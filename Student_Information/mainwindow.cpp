#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->DesignUI();
    SignalSlot();
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::DesignUI()
{
    this->setWindowTitle(QString("学生信息管理系统V1.0"));
    this->resize(640,480);
    titlelabel = new QLabel(QString("学生信息管理系统"),this);
    titlelabel->setGeometry(150,10,400,200);
    titlelabel->setFont(QFont(QString("华文行楷"),30));
    option1 = new QLabel(QString("1.指导员"),this);
    option2 = new QLabel(QString("2.学生"),this);
    option3 = new QLabel(QString("3.退出"),this);
    option1->setGeometry(260,190,100,40);
    option2->setGeometry(260,230,100,40);
    option3->setGeometry(260,270,100,40);
    option1->setFont(QFont(QString("宋体"),15));
    option2->setFont(QFont(QString("宋体"),15));
    option3->setFont(QFont(QString("宋体"),15));
    optionEdit = new QLineEdit(QString(""),this);
    optionEdit->setGeometry(250,360,100,30);
    editLabel = new QLabel(QString("请输入序号"),this);
    editLabel->setGeometry(160,360,100,30);
    editLabel->setFont(QFont(QString(""),12));
    okButton = new QPushButton(QString("确定"),this);
    okButton->setGeometry(360,360,80,30);
}
void MainWindow::SignalSlot()
{
    QObject::connect(okButton,SIGNAL(clicked()),this,SLOT(clickedFun()));
}

void MainWindow::clickedFun()
{
    QString strVal = optionEdit->text();
    int valInt = strVal.toInt();
    qDebug()<<valInt;
    switch(valInt)
    {
    case 1:
        teach = new Teacher();
        teach->setWindowTitle("指导员");
        teach->show();
       // QMessageBox::aboutQt(this);//关于QT对话框
        break;
    //学生系统
    case 2:
       stu = new Student();
       stu->setWindowTitle("学生信息");
       stu->show();
        break;
    //退出系统
    case 3:
       QApplication* app;
       app->quit();
        break;
    }
}
