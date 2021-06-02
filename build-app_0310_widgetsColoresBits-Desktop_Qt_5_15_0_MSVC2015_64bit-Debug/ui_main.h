/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main
{
public:
    QWidget *centralwidget;
    QSlider *rSlider;
    QSlider *gSlider;
    QSlider *bSlider;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *main)
    {
        if (main->objectName().isEmpty())
            main->setObjectName(QString::fromUtf8("main"));
        main->resize(538, 163);
        centralwidget = new QWidget(main);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        rSlider = new QSlider(centralwidget);
        rSlider->setObjectName(QString::fromUtf8("rSlider"));
        rSlider->setGeometry(QRect(20, 30, 160, 16));
        rSlider->setOrientation(Qt::Horizontal);
        gSlider = new QSlider(centralwidget);
        gSlider->setObjectName(QString::fromUtf8("gSlider"));
        gSlider->setGeometry(QRect(20, 60, 160, 16));
        gSlider->setOrientation(Qt::Horizontal);
        bSlider = new QSlider(centralwidget);
        bSlider->setObjectName(QString::fromUtf8("bSlider"));
        bSlider->setGeometry(QRect(20, 90, 160, 16));
        bSlider->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 120, 80, 21));
        main->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(main);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        main->setStatusBar(statusbar);

        retranslateUi(main);

        QMetaObject::connectSlotsByName(main);
    } // setupUi

    void retranslateUi(QMainWindow *main)
    {
        main->setWindowTitle(QCoreApplication::translate("main", "main", nullptr));
        pushButton->setText(QCoreApplication::translate("main", "Mezcla", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main: public Ui_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
