#include "teacher.h"
#include "ui_teacher.h"

Teacher::Teacher(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Teacher)
{
    ui->setupUi(this);
    this->DesignTeach();
}

Teacher::~Teacher()
{
    delete ui;
}

void Teacher::DesignTeach()
{
    accountLabel = new QLabel(QString("指导员账号"),this);
    passWordLabel = new QLabel(QString("指导员密码"),this);
    accountLabel->setGeometry(70,80,150,40);
    accountLabel->setFont(QFont("华文行楷",16));
    passWordLabel->setGeometry(70,130,150,40);
    passWordLabel->setFont(QFont("华文行楷",16));
    accountEdit = new QLineEdit(this);
    passWordEdit = new QLineEdit(this);
    accountEdit->setGeometry(180,85,150,30);
    passWordEdit->setGeometry(180,135,150,30);
    accountEdit->setFont(QFont("",13));
    passWordEdit->setFont(QFont("",13));
    button = new QPushButton("确定",this);
    button->setFont(QFont("",14));
    button->setGeometry(80,200,250,35);

    connect(button,SIGNAL(clicked()),this,SLOT(ButtonSlot()));
}
void Teacher::ButtonSlot()
{
//    if (账号=="指定账号"&&密码=="指导员密码")
    QMessageBox::critical(this,"错误","密码不正确!请重新进行输入!");
}
