#ifndef TEACHER_H
#define TEACHER_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QMessageBox>

namespace Ui {
class Teacher;
}

class Teacher : public QWidget
{
    Q_OBJECT

public:
    explicit Teacher(QWidget *parent = 0);
    ~Teacher();
    void DesignTeach();
 public slots:
    void ButtonSlot();
private:
    Ui::Teacher *ui;
    QLabel *accountLabel;
    QLabel *passWordLabel;
    QLineEdit *accountEdit;
    QLineEdit *passWordEdit;
    QPushButton *button;
};

#endif // TEACHER_H
