#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QFont>
#include <QLineEdit>
#include <QPushButton>
#include <QDebug>
#include <QMessageBox>
#include "teacher.h"
#include "student.h"
#include "selectstuinfo.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void DesignUI();
    void SignalSlot();
public slots:
    void clickedFun();

private:
    Ui::MainWindow *ui;
    QLabel *titlelabel;
    QLabel *option1;
    QLabel *option2;
    QLabel *option3;
    QLabel *editLabel;
    QLineEdit *optionEdit;
    QPushButton *okButton;
    Teacher *teach;
    Student *stu;
    SelectStuInfo *stInfo;
};

#endif // MAINWINDOW_H
