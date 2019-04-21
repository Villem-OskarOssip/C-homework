#include "drawingwidget.h"

#include <QPainter>
#include <QPaintEvent>
#include "mainwindow.h"


/**
  Constructs a drawing widget.
  \param[in] parent parent widget of the drawing widget.
*/
DrawingWidget::DrawingWidget(MainWindow *parent)
    : QWidget(parent), m_mainWindow(parent)
{
    // Nothing here yet
}

DrawingWidget::~DrawingWidget() {
    // Nothing here yet
}

/**
  Overridden method to handle all received paint events.
  \param[in] event the paint event that was received.
*/
void DrawingWidget::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.fillRect(event->rect(), Qt::white);

    painter.setBrush(Qt::black);
    foreach(Vector2 *vector, pointList){

        painter.drawEllipse(vector->x-10, vector->y-10, 20,20);
    }
    foreach(DynamicLine *l, lineList){
        painter.drawLine(l->p1->x, l->p1->y, l->p2->x, l->p2->y);
    }

}

void DrawingWidget::mousePressEvent(QMouseEvent *event){
    if (m_state == ADD_VERTEX_SELECTED){
            Vector2 *v = new Vector2(event->x(), event->y());
            bool proximity = true;
            foreach (Vector2 *vector, pointList){
                if (vector->distanceFrom(v->x, v->y) < 30){
                    proximity = false;
                }
            }
            if (proximity){
                pointList.push_back(v);
                m_mainWindow->points = m_mainWindow->points + 1;
            }
            update();

    }
    if (m_state == MOVE_VERTEX_SELECTED){
        foreach (Vector2 *v, pointList){
            if (v->distanceFrom(event->x(), event->y()) <= 10){
                m_vector = v;
            }
        }
    }
    if (m_state == DELETE_VERTEX_SELECTED){
        foreach (Vector2 *v, pointList){
            if (v->distanceFrom(event->x(), event->y()) <= 10){
                foreach (DynamicLine *line, lineList){
                    if (line->p1 == v || line->p2 == v){
                        lineList.remove(line);
                    }
                }
                pointList.remove(v);
                m_mainWindow->points--;
                delete v;

            }
        }
        update();
    }
    if (m_state == ADD_LINE_SELECTED){
        foreach (Vector2 *v, pointList){
            if (v->distanceFrom(event->x(), event->y()) <= 10){
                if (m_vector == nullptr){
                    m_vector = v;
                    update();
                } else{
                    DynamicLine *line = new DynamicLine(m_vector, v);
                    lineList.push_back(line);
                    m_mainWindow->lines++;
                    m_vector = nullptr;
                    update();
                }
            }
        }
    }
    if (m_state == DELETE_LINE_SELECTED){
        foreach(DynamicLine *line, lineList){
            if (line->p1->distanceFrom(event->x(), event->y() <= 20) ||
                    line->p2->distanceFrom(event->x(), event->y()<=20)){
                lineList.remove(line);
                m_mainWindow->lines--;
                delete line;
                update();
            }
        }
    }



}
    void DrawingWidget::mouseMoveEvent(QMouseEvent *event){
        if (m_state == MOVE_VERTEX_SELECTED && m_vector != nullptr){
            m_vector->x=event->x();
            m_vector->y=event->y();
            update();
        }
    }
    void DrawingWidget::mouseReleaseEvent(QMouseEvent *event){
        if (m_vector != nullptr && m_state == MOVE_VERTEX_SELECTED){
            bool inProximity = false;
            foreach (Vector2 *v, pointList) {
                if (v->distanceFrom(event->x(), event->y()) < 30){
                    inProximity = true;
                }
            }
            if (!inProximity){
                m_vector = nullptr;
                update();
            }else {
               event->ignore();
        }
    }
}
