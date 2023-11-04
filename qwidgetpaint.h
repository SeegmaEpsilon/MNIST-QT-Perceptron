#ifndef QWIDGETPAINT_H
#define QWIDGETPAINT_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsSceneMouseEvent>
#include <QVector>
#include <QPointF>
#include <QDebug>
#include <QLabel>
#include <QMouseEvent>
#include <QPainter>
#include <QDialog>

#include <misc.h>

class DrawingWidget : public QWidget
{
    Q_OBJECT

public:
    DrawingWidget(QWidget *parent = nullptr);
    // Добавьте метод для очистки буфера рисования
    void clearDrawing();

    QVector<double> getImageData();

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    QPixmap pixmap;
    QPoint lastPos;

signals:
    signalDigitDraws(const QVector<double>& dataDigit);
    signalDrawDigit(const QVector<double>& dataDigit);
};

#endif

