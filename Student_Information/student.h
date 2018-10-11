#ifndef STUDENT_H
#define STUDENT_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QComboBox>
#include <QInputDialog>
#include "selectstuinfo.h"

namespace Ui {
class Student;
}

class Student : public QWidget
{
    Q_OBJECT

public:
    explicit Student(QWidget *parent = 0);
    ~Student();
    void DesignStu();
public slots:
    void openNewWindow();
    void retRes();
    void openInput();
private:
    Ui::Student *ui;
    QLabel *stuInfoLabel;
    QPushButton *selectInfo;
    QPushButton *signInButton;
    QPushButton *returnButton;
    QComboBox *comboBox;
    SelectStuInfo *stInfo;

};

#endif // STUDENT_H
