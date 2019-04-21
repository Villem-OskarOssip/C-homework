#include "mainwindow.h"

#include <QAction>
#include <QApplication>
#include <QEvent>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QWhatsThis>
#include <QLabel>
#include "drawingwidget.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setFixedSize(800, 600);
    initWidgets();
    initMenus();
    initStatusBar();
}

MainWindow::~MainWindow() {
    // Intentionally empty
}

/**
  Initializes all menus of this widget.
*/
void MainWindow::initMenus() {
    // Creates the file menu
    m_fileMenu = new QMenu(this);
    m_fileMenu->setTitle(QString("&File"));
    menuBar()->addMenu(m_fileMenu);
    statusBar()->showMessage("ASDASDAS");

    // Creates the quit action in the file menu
    m_quitAction = new QAction(this);
    m_quitAction->setMenuRole(QAction::QuitRole);
    m_quitAction->setText(QString("&Quit"));
    m_quitAction->setStatusTip(QString("Quits this application"));
    m_quitAction->setToolTip(QString("Quits this application"));
    m_quitAction->setWhatsThis(QString("Activate this item to quit this application. You will"
                                  " be asked for confirmation."));
    m_fileMenu->addAction(m_quitAction);

    // Connects the triggering of the quit action
    // to closing the main window
    connect(m_quitAction, SIGNAL(triggered()),
               this, SLOT(close()));

   // Create the help menu and its contents
   m_helpMenu = new QMenu(this);
   m_helpMenu->setTitle(QString("&Help"));
   menuBar()->addMenu(m_helpMenu);

   m_whatsThisAction = QWhatsThis::createAction(this);
   m_whatsThisAction->setText(QString("&Whats this?"));
   m_helpMenu->addAction(m_whatsThisAction);

   m_aboutAction = new QAction(this);
   m_aboutAction->setMenuRole(QAction::AboutQtRole);
   m_aboutAction->setText(QString("&About"));
   m_helpMenu->addAction(m_aboutAction);
   connect(m_aboutAction, SIGNAL(triggered()),
           qApp, SLOT(aboutQt()));

   // Create tools menu
   m_toolsMenu = new QMenu(this);
   m_toolsMenu->setTitle(QString("&Tools"));
   menuBar()->addMenu(m_toolsMenu);

   m_addVertexAction = new QAction(this);
   m_addVertexAction->setText("&Add vertex");
   m_toolsMenu->addAction(m_addVertexAction);
   connect(m_addVertexAction, SIGNAL(triggered()),
           this, SLOT(startAddingVertices()));

   m_moveVertexAction = new QAction(this);
   m_moveVertexAction->setText("&Move vertex");
   m_toolsMenu->addAction(m_moveVertexAction);
   connect(m_moveVertexAction, SIGNAL(triggered()),
           this, SLOT(moveVertices()));

   m_deleteVertexAction = new QAction(this);
   m_deleteVertexAction->setText("&Delete vertex");
   m_toolsMenu->addAction(m_deleteVertexAction);
   connect(m_deleteVertexAction, SIGNAL(triggered()),
           this, SLOT(startDeletingVertices()));

   m_addLineAction = new QAction(this);
   m_addLineAction->setText("&Add line");
   m_toolsMenu->addAction(m_addLineAction);
   connect(m_addLineAction, SIGNAL(triggered()),
           this, SLOT(startAddingLines()));

   m_deleteLineAction = new QAction(this);
   m_deleteLineAction->setText("&Delete line");
   m_toolsMenu->addAction(m_deleteLineAction);
   connect(m_deleteLineAction, SIGNAL(triggered()),
           this, SLOT(startDeletingLines()));
}

/**
  Translates all texts of this widget.
*/
void MainWindow::initWidgets() {
    setWindowTitle(QString("Drawing"));
    m_drawingWidget = new DrawingWidget(this);
    setCentralWidget(m_drawingWidget);
}
void MainWindow::startAddingVertices(){
    m_drawingWidget->setState(ADD_VERTEX_SELECTED);
    m_statusLeft->setText("Adding vertices");
}

void MainWindow::moveVertices(){
    m_drawingWidget->setState(MOVE_VERTEX_SELECTED);
    m_statusLeft->setText("Moving vertices");
}

void MainWindow::startDeletingVertices(){
    m_drawingWidget->setState(DELETE_VERTEX_SELECTED);
    m_statusLeft->setText("Deleting vertices");
}

void MainWindow::startAddingLines(){
    m_drawingWidget->setState(ADD_LINE_SELECTED);
    m_statusLeft->setText("Adding lines");
}

void MainWindow::startDeletingLines(){
    m_drawingWidget->setState(DELETE_LINE_SELECTED);
    m_statusLeft->setText("Deleting lines");
}

void MainWindow::statusInfo(){
    m_statusMiddle->setText("Vertices: " + QString::number(points));
    m_statusRight->setText("Lines: " + QString::number(lines));
}


void MainWindow::initStatusBar() {
    statusBar()->showMessage("READY");
    m_statusLeft = new QLabel("", this);
    m_statusMiddle = new QLabel("", this);
    m_statusRight = new QLabel("", this);
    statusBar()->addPermanentWidget(m_statusLeft, 1);
    statusBar()->addPermanentWidget(m_statusMiddle, 1);
    statusBar()->addPermanentWidget(m_statusRight, 2);
}



