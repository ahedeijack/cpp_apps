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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *btnDetener;
    QPushButton *pushButton_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *RBHorizontal;
    QRadioButton *RBVertical;
    QRadioButton *RBAleatorio;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(577, 415);
        QFont font;
        font.setUnderline(false);
        Dialog->setFont(font);
        Dialog->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 170, 41, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 255, 255, 255), stop:0.1 rgba(255, 255, 255, 255), stop:0.2 rgba(255, 176, 176, 167), stop:0.3 rgba(255, 151, 151, 92), stop:0.4 rgba(255, 125, 125, 51), stop:0.5 rgba(255, 76, 76, 205), stop:0.52 rgba(255, 76, 76, 205), stop:0.6 rgba(255, 180, 180, 84), stop:1 rgba(255, 255, 255, 0));\n"
""));
        label->setMargin(0);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 380, 254, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 40, 40);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton_2);

        btnDetener = new QPushButton(layoutWidget);
        btnDetener->setObjectName(QString::fromUtf8("btnDetener"));
        btnDetener->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 40, 40);"));

        horizontalLayout->addWidget(btnDetener);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 40, 40);"));

        horizontalLayout->addWidget(pushButton_3);

        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 380, 215, 21));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        RBHorizontal = new QRadioButton(widget);
        RBHorizontal->setObjectName(QString::fromUtf8("RBHorizontal"));
        RBHorizontal->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(RBHorizontal);

        RBVertical = new QRadioButton(widget);
        RBVertical->setObjectName(QString::fromUtf8("RBVertical"));
        RBVertical->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(RBVertical);

        RBAleatorio = new QRadioButton(widget);
        RBAleatorio->setObjectName(QString::fromUtf8("RBAleatorio"));
        RBAleatorio->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(RBAleatorio);

        QWidget::setTabOrder(RBHorizontal, RBVertical);
        QWidget::setTabOrder(RBVertical, RBAleatorio);
        QWidget::setTabOrder(RBAleatorio, pushButton_2);
        QWidget::setTabOrder(pushButton_2, btnDetener);
        QWidget::setTabOrder(btnDetener, pushButton_3);

        retranslateUi(Dialog);
        QObject::connect(pushButton_3, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Movimientos", nullptr));
        label->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Mover", nullptr));
        btnDetener->setText(QCoreApplication::translate("Dialog", "Detener", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "Salir", nullptr));
        RBHorizontal->setText(QCoreApplication::translate("Dialog", "Horizontal", nullptr));
        RBVertical->setText(QCoreApplication::translate("Dialog", "Vertical", nullptr));
        RBAleatorio->setText(QCoreApplication::translate("Dialog", "Aleatorio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
