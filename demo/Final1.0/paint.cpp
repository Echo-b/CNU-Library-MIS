#include "paint.h"
#include <QMainWindow>
Paint::Paint(){}
void Paint::configLableAndRange(QCustomPlot *cus,QCPBars *fossil){
    cus->xAxis->setTickLabelRotation(60);
    cus->xAxis->setTickLength(0,4);

    cus->xAxis->setUpperEnding(QCPLineEnding::esSpikeArrow);//x轴终点图案为箭头


    cus->yAxis->setPadding(30);
    cus->yAxis->setLabel("simply graph");
    cus->yAxis->setUpperEnding(QCPLineEnding::esSpikeArrow);//values轴终点图案为箭头


      // 设置柱状图的宽度类型为以key坐标轴计算宽度的大小，默认方式
    fossil->setWidthType(QCPBars::wtPlotCoords);
    fossil->setAntialiased(false);
    fossil->setName("the first graph");
    fossil->setPen(QPen(QColor(0,168,140).lighter(130)));
    fossil->setBrush(QColor(0,168,140));
    fossil->setWidth(fossil->width()/2); // 设置柱状图的宽度大小

    cus->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);//设置图形为可缩放的状态
    cus->replot();
}
void Paint::Draw(QCustomPlot *cus,QVector<double>data){
    QVector<double> ticks;//刻度值
    QVector<QString> labels;
    if(data.size()!=2){
        ticks<<1<<2<<3<<4<<5<<6<<7<<8<<9<<10;
        labels<<"计算机科学与技术"<<"美术"<<"物理"<<"教育学院"<<"心理"<<"化学"<<"数科"<<"文学"<<"马院"<<"历史";
        cus->yAxis->setRange(0,180);
        cus->xAxis->setRange(0,15);
    }
    else{
        ticks<<1<<2;
        labels<<"男"<<"女";
        cus->xAxis->setRange(0,1);
        cus->yAxis->setRange(0,1);
    }
    QSharedPointer<QCPAxisTickerText> textTicks (new QCPAxisTickerText);
    textTicks->addTicks(ticks,labels);//刻度值与文字相互绑定
    cus->xAxis->setTicker(textTicks);
    cus->xAxis->setSubTicks(false);
    QCPBars *fossil = new QCPBars(cus->xAxis, cus->yAxis);
    fossil->setData(ticks,data);
    configLableAndRange(cus,fossil);
}
void Paint::Draw(QCustomPlot *cus,QVector<Book*>book){
    QVector<double> ticks;//刻度值
    QVector<double> data;//刻度值
    QVector<QString> labels;
    ticks<<1<<2<<3<<4<<5<<6<<7<<8<<9<<10;
    cus->yAxis->setRange(0,10);
    cus->xAxis->setRange(0,15);
    QSharedPointer<QCPAxisTickerText> textTicks (new QCPAxisTickerText);
    QCPBars *fossil = new QCPBars(cus->xAxis, cus->yAxis);
    for( int i=0;i<book.size();i++){
        labels.push_back(QString::fromStdString(book[i]->getBookName()));
        data.push_back(book[i]->getBookBorrowOutNum());
    }
    textTicks->addTicks(ticks,labels);//刻度值与文字相互绑定
    cus->xAxis->setTicker(textTicks);
    cus->xAxis->setSubTicks(false);
    fossil->setData(ticks,data);

    configLableAndRange(cus,fossil);
}
void Paint::Draw(QCustomPlot *cus,QVector<UserPerson*>user){
    QVector<double> ticks;//刻度值
    QVector<double> data;//刻度值
    QVector<QString> labels;
    ticks<<1<<2<<3<<4<<5<<6<<7<<8<<9<<10;
    cus->yAxis->setRange(0,10);
    cus->xAxis->setRange(0,15);
    QSharedPointer<QCPAxisTickerText> textTicks (new QCPAxisTickerText);
    QCPBars *fossil = new QCPBars(cus->xAxis, cus->yAxis);
    for( int i=0;i<user.size();i++){
        labels.push_back(QString::fromStdString(user[i]->getName()));
        data.push_back(user[i]->getBorrowIDsize());
    }
    fossil->setData(ticks,data);
    textTicks->addTicks(ticks,labels);//刻度值与文字相互绑定
    cus->xAxis->setTicker(textTicks);
    cus->xAxis->setSubTicks(false);
    configLableAndRange(cus,fossil);
//    QCPPainter *painter;

}
