#ifndef PAINT_H
#define PAINT_H

#include "qcustomplot.h"
#include <QWidget>
#include "book.h"
#include "UserPerson.h"
class Paint
{
public:
    Paint();
    void Draw(QCustomPlot *cus,QVector<double>data);
    void Draw(QCustomPlot *cus,QVector<Book*>book);
    void Draw(QCustomPlot *cus,QVector<UserPerson*>user);
    void configLableAndRange(QCustomPlot *cus,QCPBars *fossil);

private:

    QPointer<QCPGraph> mGraph1;
};

#endif // PAINT_H
