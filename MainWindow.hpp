#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <VideoLoader.hpp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void onLoadVideo();

private:
    Ui::MainWindow *ui;

    VideoLoader m_videoLoader;
};

#endif // MAINWINDOW_HPP
