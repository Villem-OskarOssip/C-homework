#ifndef DRAWINGWIDGET_H
#define DRAWINGWIDGET_H

#include <QWidget>
#include "vector2.h"
#include "dynamicline.h"

using namespace std;
using std::list;

class MainWindow;

enum DrawingWidgetState {
    NO_TOOL_SELECTED,
    ADD_VERTEX_SELECTED,
    MOVE_VERTEX_SELECTED,
    DELETE_VERTEX_SELECTED,
    ADD_LINE_SELECTED,
    DELETE_LINE_SELECTED
};

class DrawingWidget: public QWidget {
    Q_OBJECT
    public:
        DrawingWidget(MainWindow *parent = 0);
        ~DrawingWidget();
        Vector2 *m_vector = nullptr;
        DrawingWidgetState m_state;

    public slots:
        void setState(DrawingWidgetState state){
            m_state = state;
        }

    protected:
        void mousePressEvent(QMouseEvent * event);
        void paintEvent(QPaintEvent *event);
        void mouseMoveEvent(QMouseEvent *event);
        void mouseReleaseEvent(QMouseEvent *event);
        MainWindow *m_mainWindow;


        std::list<Vector2*> pointList;
        std::list<DynamicLine*> lineList;
};

#endif // DRAWINGWIDGET_H
