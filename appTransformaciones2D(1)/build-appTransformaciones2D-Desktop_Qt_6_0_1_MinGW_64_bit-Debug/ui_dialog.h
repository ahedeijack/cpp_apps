/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
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
    QLabel *label_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QLabel *label_3;
    QPushButton *btnAbajo;
    QPushButton *btnArriba;
    QPushButton *btnIzq;
    QPushButton *btnDer;
    QPushButton *pushButton;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(700, 500);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(500, 0, 200, 500));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 181, 31));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 21, 21));
        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(40, 80, 91, 22));
        spinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));
        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(40, 110, 91, 22));
        spinBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 21, 21));
        btnAbajo = new QPushButton(widget);
        btnAbajo->setObjectName(QString::fromUtf8("btnAbajo"));
        btnAbajo->setGeometry(QRect(70, 220, 31, 21));
        btnAbajo->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));
        btnArriba = new QPushButton(widget);
        btnArriba->setObjectName(QString::fromUtf8("btnArriba"));
        btnArriba->setGeometry(QRect(70, 160, 31, 21));
        btnArriba->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));
        btnIzq = new QPushButton(widget);
        btnIzq->setObjectName(QString::fromUtf8("btnIzq"));
        btnIzq->setGeometry(QRect(30, 190, 31, 21));
        btnIzq->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));
        btnDer = new QPushButton(widget);
        btnDer->setObjectName(QString::fromUtf8("btnDer"));
        btnDer->setGeometry(QRect(110, 190, 31, 21));
        btnDer->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 470, 75, 23));
        doubleSpinBox = new QDoubleSpinBox(widget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(40, 290, 62, 22));
        doubleSpinBox->setMinimum(1.000000000000000);
        doubleSpinBox_2 = new QDoubleSpinBox(widget);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(120, 290, 62, 22));
        doubleSpinBox_2->setMinimum(1.000000000000000);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 270, 47, 13));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 270, 47, 13));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 250, 47, 13));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 320, 75, 23));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Traslacion", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "TX:", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "TY:", nullptr));
        btnAbajo->setText(QCoreApplication::translate("Dialog", "v", nullptr));
        btnArriba->setText(QCoreApplication::translate("Dialog", "^", nullptr));
        btnIzq->setText(QCoreApplication::translate("Dialog", "<", nullptr));
        btnDer->setText(QCoreApplication::translate("Dialog", ">", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "Reiniciar", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "SX", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "SY", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "Escalaci\303\263n", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Escalar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
