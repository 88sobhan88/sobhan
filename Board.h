#ifndef BOARD_H
#define BOARD_H

#include <QMainWindow>
#include <QList>
#include "HexBoard.h"
#include <QGraphicsScene>
#include <QGraphicsView>

namespace Ui {
class Board;
}

class Board : public QMainWindow
{
    Q_OBJECT

public:
    explicit Board(QWidget *parent = nullptr);

    void start();
    QGraphicsScene * scene ;
    QGraphicsView *view;
    HexBoard* hexBoard ;

    ~Board();

private:
    Ui::Board *ui;

};

#endif // BOARD_H
