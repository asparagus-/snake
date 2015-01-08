#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class Window : public QWidget
{

    Q_OBJECT

public:
    Window();
    bool isclicked;
    enum Direction {UP, DOWN, LEFT, RIGHT };
    void mousePressEvent(QMouseEvent * );
    void paintEvent(QPaintEvent * );
};


#endif // WINDOW_H

