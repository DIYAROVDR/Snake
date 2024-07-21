#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setFixedSize(520,570);
    m_gameField = new GameField();
    m_helpField = new HelpField();
    m_gridLayout=new QGridLayout();
    m_centralWidget=new QWidget();

    connect(m_gameField,&GameField::ChangeTextSignal,m_helpField,&HelpField::ChangeTextSlot);

    m_gridLayout->addWidget(m_gameField,0,0);
    m_gridLayout->addWidget(m_helpField,1,0);

    m_centralWidget->setLayout(m_gridLayout);

    setCentralWidget(m_centralWidget);
    setStyleSheet("background: rgb(90,100,112);");
}

MainWindow::~MainWindow()
{
}

