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

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(686, 415);
        QFont font;
        font.setUnderline(false);
        Dialog->setFont(font);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 100, 101, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(true);
        font1.setWeight(9);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"text-decoration: underline;\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 360, 426, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnDvd = new QPushButton(layoutWidget);
        btnDvd->setObjectName(QString::fromUtf8("btnDvd"));

        horizontalLayout->addWidget(btnDvd);

        btnVertical = new QPushButton(layoutWidget);
        btnVertical->setObjectName(QString::fromUtf8("btnVertical"));

        horizontalLayout->addWidget(btnVertical);

        btnMover = new QPushButton(layoutWidget);
        btnMover->setObjectName(QString::fromUtf8("btnMover"));

        horizontalLayout->addWidget(btnMover);

        btnDetener = new QPushButton(layoutWidget);
        btnDetener->setObjectName(QString::fromUtf8("btnDetener"));

        horizontalLayout->addWidget(btnDetener);

        btnSalir = new QPushButton(layoutWidget);
        btnSalir->setObjectName(QString::fromUtf8("btnSalir"));

        horizontalLayout->addWidget(btnSalir);

        QWidget::setTabOrder(btnMover, btnDetener);
        QWidget::setTabOrder(btnDetener, btnSalir);

        retranslateUi(Dialog);
        QObject::connect(btnSalir, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "TEC LAGUNA", nullptr));
        btnDvd->setText(QCoreApplication::translate("Dialog", "DVD Mode", nullptr));
        btnVertical->setText(QCoreApplication::translate("Dialog", "Vertical", nullptr));
        btnMover->setText(QCoreApplication::translate("Dialog", "Mover", nullptr));
        btnDetener->setText(QCoreApplication::translate("Dialog", "Detener", nullptr));
        btnSalir->setText(QCoreApplication::translate("Dialog", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
