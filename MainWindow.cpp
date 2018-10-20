#include "MainWindow.hpp"
#include "ui_MainWindow.h"

#include <QObject>
#include <QMenuBar>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onLoadVideo()
{
    m_videoLoader.loadFromDialog();
}
