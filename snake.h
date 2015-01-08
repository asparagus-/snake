#ifndef SNAKE_H
#define SNAKE_H

#include <QList>
#include <QPair>
#include <QPoint>
#include <QColor>


class Snake
{
public:
    Snake(QPoint initial);
    ~Snake();
    void updateSnake();
    QList<QPoint> getPath();
    QColor getColor();

private:
    enum Direction {RIGHT, UP, LEFT, DOWN }; //direction in which a snake is moving

    int currentDir;
    int currentTrav;
    QPoint currentLoc;
    QColor color;
    QList<QPoint> path; //2d points which sum up a snakes path

    int getRandDir();

};

#endif // SNAKE_H
