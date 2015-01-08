#ifndef SNAKE_H
#define SNAKE_H

#include <QList>
#include <QPair>
#include <QPoint>


class Snake
{
public:
    Snake(QPoint initial);
    ~Snake();
    void updateSnake();
    QList<QPoint> getPath();

private:
    enum Direction {RIGHT, UP, LEFT, DOWN }; //direction in which a snake is moving

    int currentDir;
    int currentTrav;
    QPoint currentLoc;

    QList<QPoint> path; //2d points which sum up a snakes path

    int getRandDir();

};

#endif // SNAKE_H
