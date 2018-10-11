#ifndef SELECTSTUINFO_H
#define SELECTSTUINFO_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QInputDialog> //标准输入对话框
#include <QMessageBox>
#include "stuinfo.h"

namespace Ui {
class SelectStuInfo;
}

class SelectStuInfo : public QWidget
{
    Q_OBJECT

public:
    explicit SelectStuInfo(QWidget *parent = 0);
    ~SelectStuInfo();
public slots:
     void retMain();
     void openNumDialog();
     void openNameDialog();
private:
    Ui::SelectStuInfo *ui;
    QPushButton *numButton;
    QPushButton *nameButton;
    QPushButton *exitWin;
    QLabel *selLabel;
    QInputDialog *inputDialog;
    StuInfo *stuInfo;
};

#endif // SELECTSTUINFO_H
