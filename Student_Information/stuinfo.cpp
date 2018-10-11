#include "stuinfo.h"
#include "ui_stuinfo.h"

StuInfo::StuInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StuInfo)
{
    ui->setupUi(this);
    this->setWindowTitle("学生信息");
}

StuInfo::~StuInfo()
{
    delete ui;
}
