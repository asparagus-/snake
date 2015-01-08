#include "snake.h"

Snake::Snake(QPoint initial)
{
    this->currentDir =  getRandDir();
    this->currentLoc = initial;
    this->currentTrav = 0;
    this->path.append(initial);
}
void Snake::updateSnake(){
    switch (currentDir) {
    case RIGHT:
        currentLoc.rx()++;
        break;
    case UP:
        currentLoc.ry()--;
        break;
    case LEFT:
        currentLoc.rx()--;
        break;
    case DOWN:
        currentLoc.ry()++;
        break;
    default:
        return;
    }

    if(++currentTrav % 10 == 0){
        path.append(currentLoc);
        int cpDir = currentDir;
        while(cpDir == currentDir) {
            currentDir = getRandDir();
        }
    }
}

QList<QPoint> Snake::getPath() {
    QList<QPoint> currPath = path;
    currPath.append(currentLoc);
    return currPath;
}

int Snake::getRandDir(){
    return qrand () % 4;
}
