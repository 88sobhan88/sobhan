#include "Gallery.h"
#include "ui_Gallery.h"

#include <QScreen>
#include <QGuiApplication>
#include <QLabel>

Gallery::Gallery(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Gallery)
{
    ui->setupUi(this);
    QRect screenGeometry = QGuiApplication::primaryScreen()->geometry();
    int width = screenGeometry.width();
    int height = screenGeometry.height();

    QLabel *label = new QLabel(this);
    label->setGeometry(0, 0, width, height);

    QPixmap pixmap(":/new/prefix1/5th.jpg");
    label->setPixmap(pixmap.scaled(label->size(), Qt::KeepAspectRatioByExpanding));
    label->setScaledContents(true);
    label->lower();

    this->showMaximized();
}

Gallery::~Gallery()
{
    delete ui;
}


