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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
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
    QLabel *label_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QLabel *label_3;
    QPushButton *btnAbajo;
    QPushButton *btnArriba;
    QPushButton *btnIzq;
    QPushButton *btnDer;
    QLabel *label_4;
    QLabel *label_5;
    QDoubleSpinBox *spinBoxSx;
    QDoubleSpinBox *spinBoxSy;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_pfy;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_pfx;
    QPushButton *pushButton_7;
    QSpinBox *spinBox_Rotar;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(700, 500);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(500, -11, 200, 511));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 54, 54);"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 181, 31));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 21, 21));
        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(40, 50, 91, 22));
        spinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));
        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(40, 80, 91, 22));
        spinBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 80, 21, 21));
        btnAbajo = new QPushButton(widget);
        btnAbajo->setObjectName(QString::fromUtf8("btnAbajo"));
        btnAbajo->setGeometry(QRect(70, 160, 31, 21));
        btnAbajo->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));
        btnArriba = new QPushButton(widget);
        btnArriba->setObjectName(QString::fromUtf8("btnArriba"));
        btnArriba->setGeometry(QRect(70, 120, 31, 21));
        btnArriba->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));
        btnIzq = new QPushButton(widget);
        btnIzq->setObjectName(QString::fromUtf8("btnIzq"));
        btnIzq->setGeometry(QRect(40, 140, 31, 21));
        btnIzq->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));
        btnDer = new QPushButton(widget);
        btnDer->setObjectName(QString::fromUtf8("btnDer"));
        btnDer->setGeometry(QRect(100, 140, 31, 21));
        btnDer->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 210, 21, 16));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 240, 21, 16));
        spinBoxSx = new QDoubleSpinBox(widget);
        spinBoxSx->setObjectName(QString::fromUtf8("spinBoxSx"));
        spinBoxSx->setGeometry(QRect(60, 210, 62, 22));
        spinBoxSx->setMinimum(1.000000000000000);
        spinBoxSy = new QDoubleSpinBox(widget);
        spinBoxSy->setObjectName(QString::fromUtf8("spinBoxSy"));
        spinBoxSy->setGeometry(QRect(60, 240, 62, 22));
        spinBoxSy->setMinimum(1.000000000000000);
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 330, 118, 83));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 300, 101, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        doubleSpinBox_pfy = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_pfy->setObjectName(QString::fromUtf8("doubleSpinBox_pfy"));

        horizontalLayout->addWidget(doubleSpinBox_pfy);

        layoutWidget2 = new QWidget(widget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 270, 101, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        doubleSpinBox_pfx = new QDoubleSpinBox(layoutWidget2);
        doubleSpinBox_pfx->setObjectName(QString::fromUtf8("doubleSpinBox_pfx"));

        horizontalLayout_2->addWidget(doubleSpinBox_pfx);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 440, 80, 21));
        spinBox_Rotar = new QSpinBox(widget);
        spinBox_Rotar->setObjectName(QString::fromUtf8("spinBox_Rotar"));
        spinBox_Rotar->setGeometry(QRect(110, 440, 42, 22));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog", "Traslacion", nullptr));
        label_2->setText(QApplication::translate("Dialog", "TX:", nullptr));
        label_3->setText(QApplication::translate("Dialog", "TY:", nullptr));
        btnAbajo->setText(QApplication::translate("Dialog", "v", nullptr));
        btnArriba->setText(QApplication::translate("Dialog", "^", nullptr));
        btnIzq->setText(QApplication::translate("Dialog", "<", nullptr));
        btnDer->setText(QApplication::translate("Dialog", ">", nullptr));
        label_4->setText(QApplication::translate("Dialog", "sx", nullptr));
        label_5->setText(QApplication::translate("Dialog", "sy", nullptr));
        pushButton_3->setText(QApplication::translate("Dialog", "eSCALAR PUNTO FIJO", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog", "escalar", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "reiniciar", nullptr));
        label_7->setText(QApplication::translate("Dialog", "PFY", nullptr));
        label_6->setText(QApplication::translate("Dialog", "PFX", nullptr));
        pushButton_7->setText(QApplication::translate("Dialog", "Rotar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
