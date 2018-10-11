#include "stuinfo.h"
#include "ui_stuinfo.h"

StuInfo::StuInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StuInfo)
{
    ui->setupUi(this);
    this->setWindowTitle("学生信息");
    numLabel = new QLabel("学号",this);
    NameLabel = new QLabel("姓名",this);
    SignLabel = new QLabel("签到次数",this);
    NameLabel->setGeometry(50,50,100,30);
    numLabel->setGeometry(100,50,100,30);
    numLabel->setFont(QFont("",12));
    NameLabel->setFont(QFont("",12));
    SignLabel->setGeometry(150,50,100,30);
    SignLabel->setFont(QFont("",12));
    contentLabel = new QLabel("不良记录",this);
    contentLabel->setGeometry(235,50,100,30);
    contentLabel->setFont(QFont("",12));
}

StuInfo::~StuInfo()
{
    delete ui;
}
