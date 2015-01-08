#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QTimer>
#include <QList>
#include <QPoint>
#include <QtGui>
#include <QPainter>
#include <QPen>
#include <QPair>

#include <snake.h>

class Window : public QWidget
{

    Q_OBJECT

public:
    Window();
    void addSnake(QPoint pt);
    void mousePressEvent(QMouseEvent * event);
    void paintEvent(QPaintEvent * );

private:
    QTimer *timer;
    QList<Snake*> snakes;
};


#endif // WINDOW_H

