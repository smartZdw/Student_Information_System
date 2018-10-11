#ifndef STUINFO_H
#define STUINFO_H

#include <QWidget>

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
};

#endif // STUINFO_H
