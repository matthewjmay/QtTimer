#ifndef MYTIMER_H
#define MYTIMER_H

#include <QWidget>
#include <QDateTime>

class MyTimer : public QWidget
{
    Q_OBJECT

public:
    MyTimer(QWidget *parent = 0);

    void setDuration(int secs);
    int duration() const;
    void draw(QPainter *painter);

signals:
    void timeout();

protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);

private:
    QDateTime finishTime;
    QTimer *updateTimer;
    QTimer *finishTimer;
};

#endif // MYTIMER_H
