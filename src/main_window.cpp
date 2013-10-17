#include <QAction>
#include <QLabel>
#include <QMainWindow>
#include <QMenuBar>
#include "main_window.hpp"

MainWindow::MainWindow(QWidget *parent, Qt::WindowFlags flags)
    : QMainWindow(parent, flags) {
    QLabel *image_label = new QLabel;
    image_label->setPixmap(QPixmap(":/tux.png"));
    image_label->setAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
    setCentralWidget(image_label);

    createMenus();

    QPalette pal(palette());
    pal.setColor(QPalette::Background, Qt::white);
    setPalette(pal);

    setWindowTitle(tr("Cross Build Sample"));
    setMaximumSize(640, 480);
    resize(640, 480);
}

void MainWindow::quit() {
    close();
}

void MainWindow::createMenus() {
    QAction *exit_action = new QAction(tr("Exit"), this);
    connect(exit_action, SIGNAL(triggered()), this, SLOT(quit()));

    QMenu *file_menu = menuBar()->addMenu(tr("File"));
    file_menu->addAction(exit_action);
}
