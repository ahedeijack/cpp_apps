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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnDvd;
    QPushButton *btnVertical;
    QPushButton *btnMover;
    QPushButton *btnDetener;
    QPushButton *btnSalir;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(686, 415);
        QFont font;
        font.setUnderline(false);
        Dialog->setFont(font);
        Dialog->setWindowOpacity(2.000000000000000);
        Dialog->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 100, 100, 100));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ink Free"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(true);
        font1.setWeight(50);
        label->setFont(font1);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);\n"
"border-color: rgb(255, 0, 0);"));
        label->setTextFormat(Qt::PlainText);
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/img/snoopy.png")));
        label->setScaledContents(false);
        label->setWordWrap(false);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 360, 426, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnDvd = new QPushButton(layoutWidget);
        btnDvd->setObjectName(QString::fromUtf8("btnDvd"));
        btnDvd->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);\n"
"background-color: rgb(25, 25, 25);"));

        horizontalLayout->addWidget(btnDvd);

        btnVertical = new QPushButton(layoutWidget);
        btnVertical->setObjectName(QString::fromUtf8("btnVertical"));
        btnVertical->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);\n"
"background-color: rgb(25, 25, 25);"));

        horizontalLayout->addWidget(btnVertical);

        btnMover = new QPushButton(layoutWidget);
        btnMover->setObjectName(QString::fromUtf8("btnMover"));
        btnMover->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);\n"
"background-color: rgb(25, 25, 25);"));

        horizontalLayout->addWidget(btnMover);

        btnDetener = new QPushButton(layoutWidget);
        btnDetener->setObjectName(QString::fromUtf8("btnDetener"));
        btnDetener->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);\n"
"background-color: rgb(25, 25, 25);"));

        horizontalLayout->addWidget(btnDetener);

        btnSalir = new QPushButton(layoutWidget);
        btnSalir->setObjectName(QString::fromUtf8("btnSalir"));
        btnSalir->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);\n"
"background-color: rgb(25, 25, 25);"));

        horizontalLayout->addWidget(btnSalir);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 360, 91, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(270, 340, 271, 20));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 8pt \"Tw Cen MT\";\n"
"color: rgb(255, 255, 255);"));
        QWidget::setTabOrder(btnMover, btnDetener);
        QWidget::setTabOrder(btnDetener, btnSalir);

        retranslateUi(Dialog);
        QObject::connect(btnSalir, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Movimiento de Etiqueta.exe", nullptr));
        btnDvd->setText(QCoreApplication::translate("Dialog", "DVD Mode", nullptr));
        btnVertical->setText(QCoreApplication::translate("Dialog", "Vertical", nullptr));
        btnMover->setText(QCoreApplication::translate("Dialog", "Horizontal", nullptr));
        btnDetener->setText(QCoreApplication::translate("Dialog", "Detener", nullptr));
        btnSalir->setText(QCoreApplication::translate("Dialog", "Salir", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Carlos A. V\303\241zquez", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "TIPOS DE MOVIMIENTOS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
