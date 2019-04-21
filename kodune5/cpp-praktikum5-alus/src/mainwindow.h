#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


class DrawingWidget;
class QMenu;
class QLabel;

class MainWindow: public QMainWindow {
    Q_OBJECT
    public:
        MainWindow(QWidget *parent = 0);
        ~MainWindow();

        QMenu *m_toolsMenu;
            QAction *m_addVertexAction;
            QAction *m_addLineAction;
            QAction *m_moveVertexAction;
            QAction *m_deleteVertexAction;
            QAction *m_deleteLineAction;
         int points = 0;
         int lines = 0;

    protected slots:
        void startAddingVertices();
        void moveVertices();
        void startDeletingVertices();
        void startAddingLines();
        void startDeletingLines();
        void initStatusBar();
        void statusInfo();

    protected:
        void initMenus();
        void initWidgets();


        DrawingWidget *m_drawingWidget;

        QMenu *m_fileMenu;
            QAction *m_quitAction;
        QMenu *m_helpMenu;
            QAction *m_whatsThisAction;
            QAction *m_aboutAction;


            QLabel *m_statusLeft;
            QLabel *m_statusMiddle;
            QLabel *m_statusRight;


};

#endif // MAINWINDOW_H
