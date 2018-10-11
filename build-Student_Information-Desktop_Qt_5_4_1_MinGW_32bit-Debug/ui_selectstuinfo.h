/********************************************************************************
** Form generated from reading UI file 'selectstuinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTSTUINFO_H
#define UI_SELECTSTUINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectStuInfo
{
public:

    void setupUi(QWidget *SelectStuInfo)
    {
        if (SelectStuInfo->objectName().isEmpty())
            SelectStuInfo->setObjectName(QStringLiteral("SelectStuInfo"));
        SelectStuInfo->resize(400, 300);

        retranslateUi(SelectStuInfo);

        QMetaObject::connectSlotsByName(SelectStuInfo);
    } // setupUi

    void retranslateUi(QWidget *SelectStuInfo)
    {
        SelectStuInfo->setWindowTitle(QApplication::translate("SelectStuInfo", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class SelectStuInfo: public Ui_SelectStuInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTSTUINFO_H
