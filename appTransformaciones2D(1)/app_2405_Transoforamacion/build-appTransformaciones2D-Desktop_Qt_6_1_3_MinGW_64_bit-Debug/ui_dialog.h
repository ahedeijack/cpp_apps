/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *btnAbajo;
    QLabel *label;
    QPushButton *btnIzq;
    QPushButton *btnDer;
    QPushButton *btnArriba;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_2;
    QPushButton *pushButton_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QSlider *verticalSlider;
    QLabel *label_9;
    QLabel *label_7;
    QCheckBox *checkBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(700, 500);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(500, 0, 200, 500));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 181, 111));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Constantia")});
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        btnAbajo = new QPushButton(layoutWidget);
        btnAbajo->setObjectName(QString::fromUtf8("btnAbajo"));
        btnAbajo->setFont(font);
        btnAbajo->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));

        gridLayout->addWidget(btnAbajo, 3, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        btnIzq = new QPushButton(layoutWidget);
        btnIzq->setObjectName(QString::fromUtf8("btnIzq"));
        btnIzq->setFont(font);
        btnIzq->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));

        gridLayout->addWidget(btnIzq, 2, 0, 1, 1);

        btnDer = new QPushButton(layoutWidget);
        btnDer->setObjectName(QString::fromUtf8("btnDer"));
        btnDer->setFont(font);
        btnDer->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));

        gridLayout->addWidget(btnDer, 2, 2, 1, 1);

        btnArriba = new QPushButton(layoutWidget);
        btnArriba->setObjectName(QString::fromUtf8("btnArriba"));
        btnArriba->setFont(font);
        btnArriba->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 162, 162);"));

        gridLayout->addWidget(btnArriba, 1, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 3);

        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 130, 77, 134));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout_2->addWidget(label_6);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout_2->addWidget(label_4);

        doubleSpinBox = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setFont(font);
        doubleSpinBox->setMinimum(1.000000000000000);

        verticalLayout_2->addWidget(doubleSpinBox);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout_2->addWidget(label_5);

        doubleSpinBox_2 = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setFont(font);
        doubleSpinBox_2->setMinimum(1.000000000000000);

        verticalLayout_2->addWidget(doubleSpinBox_2);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        verticalLayout_2->addWidget(pushButton_2);

        layoutWidget2 = new QWidget(widget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(87, 130, 31, 131));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        verticalLayout_3->addWidget(label_8);

        verticalSlider = new QSlider(layoutWidget2);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setFont(font);
        verticalSlider->setMinimum(1);
        verticalSlider->setSingleStep(3);
        verticalSlider->setOrientation(Qt::Vertical);

        verticalLayout_3->addWidget(verticalSlider);

        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        verticalLayout_3->addWidget(label_9);

        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout_3->addWidget(label_7);

        checkBox = new QCheckBox(Dialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(369, 470, 111, 20));
        checkBox->setFont(font);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "Detener", nullptr));
        btnAbajo->setText(QCoreApplication::translate("Dialog", "v", nullptr));
        label->setText(QString());
        btnIzq->setText(QCoreApplication::translate("Dialog", "<", nullptr));
        btnDer->setText(QCoreApplication::translate("Dialog", ">", nullptr));
        btnArriba->setText(QCoreApplication::translate("Dialog", "^", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Mover la nave.", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "Escalaci\303\263n", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "SX", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "SY", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Escalar", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "+", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "-", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "Zoom", nullptr));
        checkBox->setText(QCoreApplication::translate("Dialog", "Encender la nave.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
