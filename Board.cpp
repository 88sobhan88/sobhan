#include "Board.h"
#include "ui_Board.h"
#include <QGuiApplication>
#include <QScreen>
#include <QDebug>

Board::Board(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Board)
{
    ui->setupUi(this);

    QRect screenGeometry = QGuiApplication::primaryScreen()->geometry();
    int width = screenGeometry.width();
    int height = screenGeometry.height();

    setFixedSize(width, height);

    scene = new QGraphicsScene(this);
    if (!scene) {
        qDebug() << "Failed to create QGraphicsScene";
        return;
    }
    scene->setSceneRect(0, 0, width, height);

    view = new QGraphicsView(scene, this);
    if (!view) {
        qDebug() << "Failed to create QGraphicsView";
        return;
    }
    view->setSceneRect(0, 0, width, height);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    setCentralWidget(view);
    start();
}

void Board::start()
{
    hexBoard = new HexBoard(this);
    if (!hexBoard) {
        qDebug() << "Failed to create HexBoard";
        return;
    }
    hexBoard->placeHexes(300, 50, 9, 5);
}

Board::~Board()
{
    delete hexBoard;
    delete scene;
    delete ui;
}
