#include "selectstuinfo.h"
#include "ui_selectstuinfo.h"

SelectStuInfo::SelectStuInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectStuInfo)
{
    ui->setupUi(this);
    numButton = new QPushButton("学号查找",this);
    nameButton = new QPushButton("姓名查找",this);
    numButton->setGeometry(135,120,120,30);
    nameButton->setGeometry(135,170,120,30);
    selLabel = new QLabel(this);
    selLabel->setText("学生信息查找选项");
    selLabel->setFont(QFont("华文行楷",20));
    selLabel->setGeometry(100,15,250,100);

    exitWin = new QPushButton("返回",this);
   // exitWin->setFont(QFont("华文行楷",20));
    exitWin->setGeometry(135,230,120,30);
    //connect(numButton,SIGNAL(click))
    connect(exitWin,SIGNAL(clicked()),this,SLOT(retMain()));
    connect(numButton,SIGNAL(clicked()),this,SLOT(openNumDialog()));
    connect(nameButton,SIGNAL(clicked()),this,SLOT(openNameDialog()));
}

SelectStuInfo::~SelectStuInfo()
{
    delete ui;
}

void SelectStuInfo::retMain()
{
    SelectStuInfo::close();
}

void SelectStuInfo::openNumDialog()
{
    bool ok;
    int val = QInputDialog::getInt(this,
         "学号查找",  //标题Title
             "请输入要查找学生的学号",  //Label提示
                     100000,  //默认值
                     0,  //最小值
                     1000000000,  //最大值
                     1 ,  //增量 步进值每次加减1
                     &ok
                      );
   // QInputDialog::getText(this,"","0","")
    if(ok)
    {
        if(val<=0 ||val>=1000000000)
        {
             QMessageBox::critical(this,"错误","您输入的学号有误");
        }
        else
        {
             stuInfo = new StuInfo();
             SelectStuInfo::close();
             stuInfo->show();
        }
    }

}

void SelectStuInfo::openNameDialog()
{
    bool isOK;
    QString text = QInputDialog::getText(NULL,"姓名查找",                                                    "请输入要查找的姓名",                                                   QLineEdit::Normal,
"",&isOK);
if(isOK)
{
    QMessageBox::information(this,"查找失败","姓名不存在!请重新查找");
}
}
