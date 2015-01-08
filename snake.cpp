#include "snake.h"

Snake::Snake(QPoint initial)
{
    this->currentDir =  getRandDir();
    this->currentLoc = initial;
    this->currentTrav = 0;
    this->path.append(initial);
    this->color.setRgb(qrand()%200,qrand()%200,qrand()%200);
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

    if(++currentTrav % 20 == 0){
        path.append(currentLoc);
        int temp = currentDir;
        while(temp == currentDir || currentDir == temp-2 || currentDir == temp+2)
            currentDir = getRandDir();
    }

}

QList<QPoint> Snake::getPath() {
    QList<QPoint> currPath = path;
    currPath.append(currentLoc);
    return currPath;
}

QColor Snake::getColor(){
    return this->color;
}

int Snake::getRandDir(){
   return qrand () % 4;
}
