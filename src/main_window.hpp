#ifndef MAIN_WINDOW_HPP
#define MAIN_WINDOW_HPP

#include <QMainWindow>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0, Qt::WindowFlags flags = 0);

private slots:
    void quit();

private:
    void createMenus();
};

#endif
