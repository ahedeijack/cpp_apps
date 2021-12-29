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
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
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
    QPushButton *btnAbajo;
    QPushButton *btnArriba;
    QPushButton *btnIzq;
    QPushButton *btnDer;
    QPushButton *pushButton;
    QSlider *verticalSlider;
    QFrame *line;
    QFrame *line_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label_3;
    QSpinBox *spinBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_4;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(700, 500);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(500, 0, 200, 500));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127);"));
        btnAbajo = new QPushButton(widget);
        btnAbajo->setObjectName(QString::fromUtf8("btnAbajo"));
        btnAbajo->setGeometry(QRect(70, 240, 51, 21));
        btnAbajo->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"Tw Cen MT Condensed Extra Bold\";"));
        btnArriba = new QPushButton(widget);
        btnArriba->setObjectName(QString::fromUtf8("btnArriba"));
        btnArriba->setGeometry(QRect(70, 200, 51, 21));
        btnArriba->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"Tw Cen MT Condensed Extra Bold\";"));
        btnIzq = new QPushButton(widget);
        btnIzq->setObjectName(QString::fromUtf8("btnIzq"));
        btnIzq->setGeometry(QRect(40, 220, 31, 21));
        btnIzq->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"Tw Cen MT Condensed Extra Bold\";"));
        btnDer = new QPushButton(widget);
        btnDer->setObjectName(QString::fromUtf8("btnDer"));
        btnDer->setGeometry(QRect(120, 220, 31, 21));
        btnDer->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"Tw Cen MT Condensed Extra Bold\";"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 220, 51, 23));
        verticalSlider = new QSlider(widget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(10, 200, 20, 61));
        verticalSlider->setMinimum(1);
        verticalSlider->setSingleStep(3);
        verticalSlider->setOrientation(Qt::Vertical);
        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(90, 0, 16, 181));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 170, 201, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 71, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"Tw Cen MT Condensed Extra Bold\";"));

        verticalLayout->addWidget(spinBox);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        spinBox_2 = new QSpinBox(layoutWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"Tw Cen MT Condensed Extra Bold\";"));

        verticalLayout->addWidget(spinBox_2);

        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(110, 10, 82, 161));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        doubleSpinBox_2 = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setMinimum(1.000000000000000);

        verticalLayout_2->addWidget(doubleSpinBox_2);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        doubleSpinBox = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimum(1.000000000000000);

        verticalLayout_2->addWidget(doubleSpinBox);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 270, 84, 119));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_3->addWidget(label_8);

        doubleSpinBox_3 = new QDoubleSpinBox(widget1);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));

        verticalLayout_3->addWidget(doubleSpinBox_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_9 = new QLabel(widget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_4->addWidget(label_9);

        doubleSpinBox_4 = new QDoubleSpinBox(widget1);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));

        verticalLayout_4->addWidget(doubleSpinBox_4);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_4->addWidget(pushButton_3);


        verticalLayout_3->addLayout(verticalLayout_4);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnAbajo->setText(QCoreApplication::translate("Dialog", "v", nullptr));
        btnArriba->setText(QCoreApplication::translate("Dialog", "^", nullptr));
        btnIzq->setText(QCoreApplication::translate("Dialog", "<", nullptr));
        btnDer->setText(QCoreApplication::translate("Dialog", ">", nullptr));
        pushButton->setStyleSheet(QCoreApplication::translate("Dialog", "color: rgb(0, 0, 0);\n"
"font: 10pt \"Tw Cen MT Condensed Extra Bold\";", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "Reiniciar", nullptr));
        label->setStyleSheet(QCoreApplication::translate("Dialog", "color: rgb(0, 0, 0);\n"
"font: 10pt \"Tw Cen MT Condensed Extra Bold\";", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Traslacion", nullptr));
        label_7->setStyleSheet(QCoreApplication::translate("Dialog", "color: rgb(0, 0, 0);\n"
"font: 10pt \"Tw Cen MT Condensed Extra Bold\";", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "(Movimiento)", nullptr));
        label_2->setStyleSheet(QCoreApplication::translate("Dialog", "color: rgb(0, 0, 0);\n"
"font: 10pt \"Tw Cen MT Condensed Extra Bold\";", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "TX:", nullptr));
        label_3->setStyleSheet(QCoreApplication::translate("Dialog", "color: rgb(0, 0, 0);\n"
"font: 10pt \"Tw Cen MT Condensed Extra Bold\";", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "TY:", nullptr));
        label_6->setStyleSheet(QCoreApplication::translate("Dialog", "color: rgb(0, 0, 0);\n"
"font: 10pt \"Tw Cen MT Condensed Extra Bold\";", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "Escalaci\303\263n", nullptr));
        label_4->setStyleSheet(QCoreApplication::translate("Dialog", "color: rgb(0, 0, 0);\n"
"font: 10pt \"Tw Cen MT Condensed Extra Bold\";", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "SX", nullptr));
        doubleSpinBox_2->setStyleSheet(QCoreApplication::translate("Dialog", "color: rgb(0, 0, 0);\n"
"font: 10pt \"Tw Cen MT Condensed Extra Bold\";", nullptr));
        label_5->setStyleSheet(QCoreApplication::translate("Dialog", "color: rgb(0, 0, 0);\n"
"font: 10pt \"Tw Cen MT Condensed Extra Bold\";", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "SY", nullptr));
        doubleSpinBox->setStyleSheet(QCoreApplication::translate("Dialog", "color: rgb(0, 0, 0);\n"
"font: 10pt \"Tw Cen MT Condensed Extra Bold\";", nullptr));
        pushButton_2->setStyleSheet(QCoreApplication::translate("Dialog", "color: rgb(0, 0, 0);\n"
"font: 10pt \"Tw Cen MT Condensed Extra Bold\";", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Escalar", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "Punto Fijo X", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "Punto Fijo Y", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "Escalaci\303\263n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
