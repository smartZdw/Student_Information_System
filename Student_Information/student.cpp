#include "student.h"
#include "ui_student.h"

Student::Student(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Student)
{
    ui->setupUi(this);
    DesignStu();
}

Student::~Student()
{
    delete ui;
}

void Student::DesignStu()
{
    stuInfoLabel = new QLabel("学生信息界面",this);
    stuInfoLabel->setFont(QFont("华文行楷",26));
    stuInfoLabel->setGeometry(115,10,330,100);
    selectInfo = new QPushButton(this);
    signInButton = new QPushButton(this);
    returnButton = new QPushButton("返回",this);
    selectInfo->setText(QString("查询学生信息"));
    signInButton->setText("学生课堂签到");
    selectInfo->setGeometry(115,120,200,35);
    signInButton->setGeometry(115,170,200,30);
    returnButton->setGeometry(115,220,200,30);
    selectInfo->setFont(QFont("华文行楷",14));
    signInButton->setFont(QFont("华文行楷",14));
    returnButton->setFont(QFont("华文行楷",14));

//    comboBox = new QComboBox(this);
//    comboBox->setFont(QFont("",13));
//    comboBox->addItem(QString("           查找学生信息"));
//    comboBox->addItem(QString("           按学号查找"));
//    comboBox->addItem(QString("           按姓名查找"));
//    comboBox->setGeometry(115,120,200,30);

    //connect(comboBox,SIGNAL(currentTextChanged(QString),this,SLOT());

    QObject::connect(selectInfo,SIGNAL(clicked()),this,SLOT(openNewWindow()));
    QObject::connect(returnButton,SIGNAL(clicked()),this,SLOT(retRes()));
    QObject::connect(signInButton,SIGNAL(clicked()),this,SLOT(openInput()));
}

void Student::openNewWindow()
{
    stInfo = new SelectStuInfo();
    stInfo->setWindowTitle("Select Options");
    Student::close();
    stInfo->show();
}
//返回
void Student::retRes()
{
    Student::close();
}

void Student::openInput()
{
    bool ok;
    Student::close();
    int val = QInputDialog::getInt(this,
         "学号签到",  //标题Title
             "请输入要签到学生的学号",  //Label提示
                     100000,  //默认值
                     0,  //最2小值
                     1000000000,  //最大值
                      1 ,  //增量 步进值每次加减1
                     &ok
                      );
    if(val==100000)
        QMessageBox::information(this,"签到成功","签到成功!");
    else
        QMessageBox::information(this,"签到失败","您输入的学号不存在!签到失败!");
}
