#include "window.h"


Window::Window() {

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(40);
}

void Window::addSnake(QPoint pt) {
    Snake * snake = new Snake(pt);
    this->snakes.append(snake);
}

void Window::mousePressEvent(QMouseEvent *event) {

    addSnake(event->pos());

}

void Window::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    QPen pen;
    pen.setWidth(2);
    painter.setPen(pen);

    for(int i=0; i<snakes.length(); i++) {
        snakes[i]->updateSnake();
        QList<QPoint> path = snakes[i]->getPath();
        QList<QPoint>::Iterator nextPt = path.begin();
        for(nextPt;;) {
            QPoint currPt = *nextPt;
            ++nextPt;
            if(nextPt != path.end()) {
                painter.drawLine(currPt, *nextPt);
            }
            else break;
        }
    }
}
