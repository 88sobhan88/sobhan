#include"Hex.h"
#include<QVector>
#include<QPointF>
Hex::Hex(QGraphicsItem *parent)
{
    QVector<QPointF>hexPoints;
    hexPoints << QPointF(1 , 0) << QPointF(2 , 0) << QPointF(2.5 , 1) <<
        QPointF(2 , 2) << QPointF(1 , 2) << QPointF(0.5 , 1) ;

    int Scale_by = 60;
    for(size_t i = 0 , n = hexPoints.size() ; i < n ; i++){
        hexPoints[i] *= Scale_by ;
    }
    QPolygonF hexagon(hexPoints);

    setPolygon(hexagon);
}
