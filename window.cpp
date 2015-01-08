#include <QtGui>
#include "window.h"

Window::Window() {
    isclicked = false;
}

void Window::mousePressEvent(QMouseEvent *) {
    if(!isclicked)
        isclicked = true;
    else
        isclicked = false;
    update();
}

void Window::paintEvent(QPaintEvent *) {
    if(isclicked){
        QPainter painter(this);
        QPen pen;
        pen.setWidth(5);
        painter.setPen(pen);
        painter.drawLine(this->width(), this->height(), 0, 0);
        painter.drawLine(0, this->height(), this->width(), 0);
    }
}
