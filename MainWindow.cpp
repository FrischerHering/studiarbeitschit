#include "MainWindow.hpp"
#include "ui_MainWindow.h"

#include <QObject>
#include <QMenuBar>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->menuBar, &QMenuBar::triggered, [](QAction* action)
    {

    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
