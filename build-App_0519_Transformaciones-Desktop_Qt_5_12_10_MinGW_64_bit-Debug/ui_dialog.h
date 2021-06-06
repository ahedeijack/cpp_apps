/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(600, 600);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(480, 0, 120, 601));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 127);"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 47, 13));
        label->setStyleSheet(QString::fromUtf8("font: 8pt \"Tw Cen MT\";\n"
"color: rgb(0, 0, 0);"));
        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(30, 50, 31, 22));
        spinBox->setStyleSheet(QString::fromUtf8("font: 8pt \"Tw Cen MT\";\n"
"color: rgb(0, 0, 0);"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 16, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 8pt \"Tw Cen MT\";\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 70, 16, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 8pt \"Tw Cen MT\";\n"
"color: rgb(0, 0, 0);"));
        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(30, 70, 31, 22));
        spinBox_2->setStyleSheet(QString::fromUtf8("font: 8pt \"Tw Cen MT\";\n"
"color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 130, 21, 21));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 150, 21, 21));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 110, 21, 21));
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(60, 130, 21, 21));
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 520, 80, 21));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog", "Traslaci\303\263n", nullptr));
        label_2->setText(QApplication::translate("Dialog", "TX", nullptr));
        label_3->setText(QApplication::translate("Dialog", "TY", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "<", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog", "v", nullptr));
        pushButton_3->setText(QApplication::translate("Dialog", "/", nullptr));
        pushButton_4->setText(QApplication::translate("Dialog", ">", nullptr));
        pushButton_5->setText(QApplication::translate("Dialog", "Limpiar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
