#ifndef QIMAGEPIOTR_H
#define QIMAGEPIOTR_H

#include <QObject>

class QImagePiotr : public QImage
{
public:
    QImagePiotr();
    QImage ClearParasite(QImage image);
    QImage ColorToGray(QImage image);
    QImage GrayToBlackNWhite(QImage image);
    QImage Dilatation(QImage image);
    QImage Erosion(QImage image);
    QImage ToEdgeRedDetection(QImage image);
    QImage ROI(QImage image);
    QImage Erosion(QImage image);
    QImage Zone(QImage image);
    QImage Algo(QImage image);
    QImage imageNow;
};

#endif // QIMAGEPIOTR_H
