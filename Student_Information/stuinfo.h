#ifndef STUINFO_H
#define STUINFO_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>

namespace Ui {
class StuInfo;
}

class StuInfo : public QWidget
{
    Q_OBJECT

public:
    explicit StuInfo(QWidget *parent = 0);
    ~StuInfo();

private:
    Ui::StuInfo *ui;
    QLabel *numLabel;
    QLabel *NameLabel;
    QLabel *SignLabel;
    QLabel *contentLabel;
};

#endif // STUINFO_H
