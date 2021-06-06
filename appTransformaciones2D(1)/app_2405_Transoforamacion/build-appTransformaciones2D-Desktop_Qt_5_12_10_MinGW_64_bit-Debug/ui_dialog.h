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
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label_3;
    QSpinBox *spinBox_2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_10;
    QLabel *label_11;
    QDoubleSpinBox *doubleSpinBox_pfx;
    QLabel *label_12;
    QDoubleSpinBox *doubleSpinBox_pfy;
    QPushButton *pushButton_3;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QPushButton *btnArriba;
    QPushButton *btnIzq;
    QPushButton *pushButton;
    QPushButton *btnDer;
    QPushButton *btnAbajo;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_2;
    QPushButton *pushButton_2;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QSlider *verticalSlider;
    QLabel *label_9;
    QLabel *label_7;
    QWidget *widget4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_13;
    QDial *dial_angulo;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(700, 500);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(500, 0, 200, 500));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);"));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 50, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));

        verticalLayout->addWidget(spinBox);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        spinBox_2 = new QSpinBox(layoutWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));

        verticalLayout->addWidget(spinBox_2);

        layoutWidget_2 = new QWidget(widget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(90, 130, 102, 130));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_4->addWidget(label_10);

        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_4->addWidget(label_11);

        doubleSpinBox_pfx = new QDoubleSpinBox(layoutWidget_2);
        doubleSpinBox_pfx->setObjectName(QString::fromUtf8("doubleSpinBox_pfx"));
        doubleSpinBox_pfx->setMinimum(1.000000000000000);

        verticalLayout_4->addWidget(doubleSpinBox_pfx);

        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        doubleSpinBox_pfy = new QDoubleSpinBox(layoutWidget_2);
        doubleSpinBox_pfy->setObjectName(QString::fromUtf8("doubleSpinBox_pfy"));
        doubleSpinBox_pfy->setMinimum(1.000000000000000);

        verticalLayout_4->addWidget(doubleSpinBox_pfy);

        pushButton_3 = new QPushButton(layoutWidget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_4->addWidget(pushButton_3);

        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(60, 20, 131, 111));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnArriba = new QPushButton(widget1);
        btnArriba->setObjectName(QString::fromUtf8("btnArriba"));
        btnArriba->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));

        gridLayout->addWidget(btnArriba, 0, 1, 1, 1);

        btnIzq = new QPushButton(widget1);
        btnIzq->setObjectName(QString::fromUtf8("btnIzq"));
        btnIzq->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));

        gridLayout->addWidget(btnIzq, 1, 0, 1, 1);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        btnDer = new QPushButton(widget1);
        btnDer->setObjectName(QString::fromUtf8("btnDer"));
        btnDer->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));

        gridLayout->addWidget(btnDer, 1, 2, 1, 1);

        btnAbajo = new QPushButton(widget1);
        btnAbajo->setObjectName(QString::fromUtf8("btnAbajo"));
        btnAbajo->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));

        gridLayout->addWidget(btnAbajo, 2, 1, 1, 1);

        widget2 = new QWidget(widget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 130, 77, 130));
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
        doubleSpinBox->setMinimum(1.000000000000000);

        verticalLayout_2->addWidget(doubleSpinBox);

        label_5 = new QLabel(widget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        doubleSpinBox_2 = new QDoubleSpinBox(widget2);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setMinimum(1.000000000000000);

        verticalLayout_2->addWidget(doubleSpinBox_2);

        pushButton_2 = new QPushButton(widget2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        widget3 = new QWidget(widget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(10, 260, 28, 161));
        verticalLayout_3 = new QVBoxLayout(widget3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_3->addWidget(label_8);

        verticalSlider = new QSlider(widget3);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setMinimum(1);
        verticalSlider->setSingleStep(3);
        verticalSlider->setOrientation(Qt::Vertical);

        verticalLayout_3->addWidget(verticalSlider);

        label_9 = new QLabel(widget3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_3->addWidget(label_9);

        label_7 = new QLabel(widget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_3->addWidget(label_7);

        widget4 = new QWidget(widget);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(110, 260, 81, 101));
        verticalLayout_5 = new QVBoxLayout(widget4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(widget4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_5->addWidget(label_13);

        dial_angulo = new QDial(widget4);
        dial_angulo->setObjectName(QString::fromUtf8("dial_angulo"));
        dial_angulo->setMaximum(360);
        dial_angulo->setSingleStep(5);

        verticalLayout_5->addWidget(dial_angulo);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog", "Mover", nullptr));
        label_2->setText(QApplication::translate("Dialog", "TX:", nullptr));
        label_3->setText(QApplication::translate("Dialog", "TY:", nullptr));
        label_10->setText(QApplication::translate("Dialog", "Escalaci\303\263n Punto Fijo", nullptr));
        label_11->setText(QApplication::translate("Dialog", "Punto Fijo X", nullptr));
        label_12->setText(QApplication::translate("Dialog", "Punto Fijo Y", nullptr));
        pushButton_3->setText(QApplication::translate("Dialog", "Escalar", nullptr));
        btnArriba->setText(QApplication::translate("Dialog", "^", nullptr));
        btnIzq->setText(QApplication::translate("Dialog", "<", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "Reiniciar", nullptr));
        btnDer->setText(QApplication::translate("Dialog", ">", nullptr));
        btnAbajo->setText(QApplication::translate("Dialog", "v", nullptr));
        label_6->setText(QApplication::translate("Dialog", "Escalaci\303\263n", nullptr));
        label_4->setText(QApplication::translate("Dialog", "SX", nullptr));
        label_5->setText(QApplication::translate("Dialog", "SY", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog", "Escalar", nullptr));
        label_8->setText(QApplication::translate("Dialog", "+", nullptr));
        label_9->setText(QApplication::translate("Dialog", "-", nullptr));
        label_7->setText(QApplication::translate("Dialog", "Zoom", nullptr));
        label_13->setText(QApplication::translate("Dialog", "Girar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
