#ifndef HEXBOARD_H
#define HEXBOARD_H

#include<QList>
#include "Hex.h"

class Board ;
class HexBoard{
public :
    HexBoard(Board *board);
    QList<Hex*> getHexes();
    void placeHexes(int x , int y , int cols , int rows);

private :
    void createHexColumn (int x , int y , int numOfRows);
    QList<Hex*> hexes ;
    Board *board ;
};
#endif // HEXBOARD_H
