/********************************************************************************
** Form generated from reading UI file 'stuinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUINFO_H
#define UI_STUINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StuInfo
{
public:

    void setupUi(QWidget *StuInfo)
    {
        if (StuInfo->objectName().isEmpty())
            StuInfo->setObjectName(QStringLiteral("StuInfo"));
        StuInfo->resize(400, 300);

        retranslateUi(StuInfo);

        QMetaObject::connectSlotsByName(StuInfo);
    } // setupUi

    void retranslateUi(QWidget *StuInfo)
    {
        StuInfo->setWindowTitle(QApplication::translate("StuInfo", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class StuInfo: public Ui_StuInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUINFO_H
