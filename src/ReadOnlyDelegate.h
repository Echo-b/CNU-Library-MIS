#ifndef READONLYDELEGATE_H
#define READONLYDELEGATE_H
#include <QWidget>
#include <QItemDelegate>
class ReadOnlyDelegate: public QItemDelegate
{
//设置表格的属性为不可编辑
public:
    ReadOnlyDelegate(QWidget *parent = NULL):QItemDelegate(parent)
    {}

    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,const QModelIndex &index) const override //final
    {
        Q_UNUSED(parent)
        Q_UNUSED(option)
        Q_UNUSED(index)
        return NULL;
    }
};
#endif // READONLYDELEGATE_H
