#include "HexBoard.h"
#include "Board.h"
#include <QDebug>

HexBoard::HexBoard(Board *b) : board(b)
{
    if (!board) {
        qDebug() << "HexBoard: Invalid Board pointer";
    }
}

QList<Hex*> HexBoard::getHexes()
{
    return hexes;
}

void HexBoard::placeHexes(int x, int y, int cols, int rows)
{
    if (!board || !board->scene) {
        qDebug() << "HexBoard: Invalid board or scene";
        return;
    }
    int X_Shift = 90;
    int Y_Shift = 60 ;
    for (size_t i = 0, n = cols; i < n; i++) {
        if ((i + 1) % 2 == 0) {
            createHexColumn(x + X_Shift * i, y + Y_Shift, rows);
        } else {
            createHexColumn(x + X_Shift * i, y, rows);
        }
    }
}

void HexBoard::createHexColumn(int x, int y, int numOfRows)
{
    if (!board || !board->scene) {
        qDebug() << "createHexColumn: Invalid board or scene";
        return;
    }
    int Y_shift = 120;
    for (size_t i = 0, n = numOfRows; i < n; i++) {
        Hex *hex = new Hex();
        if (!hex) {
            qDebug() << "Failed to create Hex";
            continue;
        }
        hex->setPos(x, y + Y_shift * i);
        hexes.append(hex);
        board->scene->addItem(hex);
    }
}
