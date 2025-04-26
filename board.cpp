#include "board.h"
#include "ui_board.h"


#include <QLabel>
#include <QGuiApplication>
#include <QScreen>

Board::Board(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Board)
{
    ui->setupUi(this);
    QRect screenGeometry = QGuiApplication::primaryScreen()->geometry();
    int width = screenGeometry.width();
    int height = screenGeometry.height();
    QLabel *label = new QLabel(this);
    label->setGeometry(0, 0, width, height);
    this->showFullScreen();
    label->lower();
    this->showMaximized();
}

Board::~Board()
{
    delete ui;
}
