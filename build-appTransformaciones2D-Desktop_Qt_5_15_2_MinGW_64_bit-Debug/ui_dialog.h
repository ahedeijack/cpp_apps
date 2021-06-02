/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QLabel *label;
    QPushButton *btnAbajo;
    QPushButton *btnArriba;
    QPushButton *btnIzq;
    QPushButton *btnDer;
    QPushButton *pushButton_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label_3;
    QSpinBox *spinBox_2;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(700, 500);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(500, 0, 200, 500));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 54, 54);"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 181, 31));
        btnAbajo = new QPushButton(widget);
        btnAbajo->setObjectName(QString::fromUtf8("btnAbajo"));
        btnAbajo->setGeometry(QRect(90, 100, 61, 21));
        btnAbajo->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Tw Cen MT\";"));
        btnArriba = new QPushButton(widget);
        btnArriba->setObjectName(QString::fromUtf8("btnArriba"));
        btnArriba->setGeometry(QRect(90, 60, 61, 21));
        btnArriba->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Tw Cen MT\";"));
        btnIzq = new QPushButton(widget);
        btnIzq->setObjectName(QString::fromUtf8("btnIzq"));
        btnIzq->setGeometry(QRect(60, 80, 31, 21));
        btnIzq->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Tw Cen MT\";"));
        btnDer = new QPushButton(widget);
        btnDer->setObjectName(QString::fromUtf8("btnDer"));
        btnDer->setGeometry(QRect(150, 80, 31, 21));
        btnDer->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Tw Cen MT\";"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 80, 61, 21));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Tw Cen MT\";"));
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 50, 41, 90));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        spinBox = new QSpinBox(widget1);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Tw Cen MT\";"));

        verticalLayout->addWidget(spinBox);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        spinBox_2 = new QSpinBox(widget1);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Tw Cen MT\";"));

        verticalLayout->addWidget(spinBox_2);

        widget2 = new QWidget(widget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 140, 82, 137));
        verticalLayout_2 = new QVBoxLayout(widget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_4 = new QLabel(widget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        doubleSpinBox = new QDoubleSpinBox(widget2);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Tw Cen MT\";"));
        doubleSpinBox->setMinimum(1.000000000000000);
        doubleSpinBox->setMaximum(20.000000000000000);

        verticalLayout_2->addWidget(doubleSpinBox);

        label_5 = new QLabel(widget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        doubleSpinBox_2 = new QDoubleSpinBox(widget2);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Tw Cen MT\";"));
        doubleSpinBox_2->setMinimum(1.000000000000000);
        doubleSpinBox_2->setMaximum(20.000000000000000);

        verticalLayout_2->addWidget(doubleSpinBox_2);

        pushButton = new QPushButton(widget2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Tw Cen MT\";"));

        verticalLayout_2->addWidget(pushButton);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Traslacion", nullptr));
        btnAbajo->setText(QCoreApplication::translate("Dialog", "v", nullptr));
        btnArriba->setText(QCoreApplication::translate("Dialog", "^", nullptr));
        btnIzq->setText(QCoreApplication::translate("Dialog", "<", nullptr));
        btnDer->setText(QCoreApplication::translate("Dialog", ">", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Reiniciar", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "TX:", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "TY:", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "Escalaci\303\263n", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "SX", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "SY", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "Escalar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
