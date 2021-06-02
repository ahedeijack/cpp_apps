/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *peceraWidget;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnDetener;
    QPushButton *btnIniciar;
    QPushButton *btnSalir;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(700, 580);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        peceraWidget = new QWidget(centralwidget);
        peceraWidget->setObjectName(QString::fromUtf8("peceraWidget"));
        peceraWidget->setGeometry(QRect(10, 20, 700, 469));
        peceraWidget->setStyleSheet(QString::fromUtf8("background-image: url(:/img/img/pecera2.png);"));
        label = new QLabel(peceraWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 210, 100, 37));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(200, 510, 254, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnDetener = new QPushButton(widget);
        btnDetener->setObjectName(QString::fromUtf8("btnDetener"));

        horizontalLayout->addWidget(btnDetener);

        btnIniciar = new QPushButton(widget);
        btnIniciar->setObjectName(QString::fromUtf8("btnIniciar"));

        horizontalLayout->addWidget(btnIniciar);

        btnSalir = new QPushButton(widget);
        btnSalir->setObjectName(QString::fromUtf8("btnSalir"));

        horizontalLayout->addWidget(btnSalir);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        btnDetener->setText(QCoreApplication::translate("MainWindow", "Detener", nullptr));
        btnIniciar->setText(QCoreApplication::translate("MainWindow", "Iniciar", nullptr));
        btnSalir->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
