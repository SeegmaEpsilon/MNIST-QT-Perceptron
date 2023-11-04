#include "qwidgetpaint.h"


DrawingWidget::DrawingWidget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(256,256);

    // Установим начальные параметры
    pixmap = QPixmap(size());
    pixmap.fill(Qt::white); // Заливка виджета белым цветом

    lastPos = QPoint(-1, -1);
}

void DrawingWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0, 0, pixmap);
}

void DrawingWidget::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
        lastPos = event->pos();
    if (event->button() == Qt::RightButton)
        clearDrawing();
}

void DrawingWidget::mouseMoveEvent(QMouseEvent *event)
{
    if ((event->buttons() & Qt::LeftButton) && lastPos != QPoint(-1, -1))
    {
        QPainter painter(&pixmap);
        painter.setPen(QPen(Qt::black, 20, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        painter.drawLine(lastPos, event->pos());
        lastPos = event->pos();
        update();

        QVector<double> dataDraw = getImageData();
        emit signalDrawDigit(dataDraw);
        emit signalDigitDraws(dataDraw);
    }
}

void DrawingWidget::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        lastPos = QPoint(-1, -1);
    }

}

void DrawingWidget::clearDrawing()
{
    pixmap.fill(Qt::white); // Заливка виджета белым цветом (очистка)
    update(); // Перерисовываем виджет
}

QVector<double> DrawingWidget::getImageData()
{
    int imageWidth = 28;
    int imageHeight = 28;

    // Получаем данные (пиксели) из pixmap
    QImage image = pixmap.toImage().scaled(imageWidth, imageHeight, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QVector<double> pixelData;

    for (int y = 0; y < imageHeight; ++y)
    {
        for (int x = 0; x < imageWidth; ++x)
        {
            QRgb pixel = image.pixel(x, y);

            // Получаем значение красного канала (полагаем, что изображение монохромное)
            int grayValue = 255 - qGray(pixel);

            // Нормализуем значение в диапазоне от 0.0 до 1.0
            double normalizedValue = static_cast<double>(grayValue) / 255.0 * 0.99 + 0.01;

            pixelData.append(normalizedValue);
        }
    }

    return pixelData;
}

