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
    QSlider *verticalSlider;
    QSlider *verticalSlider_2;
    QSlider *verticalSlider_3;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *main)
    {
        if (main->objectName().isEmpty())
            main->setObjectName(QString::fromUtf8("main"));
        main->resize(222, 314);
        centralwidget = new QWidget(main);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(70, 10, 16, 160));
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider_2 = new QSlider(centralwidget);
        verticalSlider_2->setObjectName(QString::fromUtf8("verticalSlider_2"));
        verticalSlider_2->setGeometry(QRect(100, 10, 16, 160));
        verticalSlider_2->setOrientation(Qt::Vertical);
        verticalSlider_3 = new QSlider(centralwidget);
        verticalSlider_3->setObjectName(QString::fromUtf8("verticalSlider_3"));
        verticalSlider_3->setGeometry(QRect(130, 10, 16, 160));
        verticalSlider_3->setOrientation(Qt::Vertical);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 180, 141, 41));
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
        pushButton->setText(QCoreApplication::translate("main", "Obtener Combinaci\303\263n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main: public Ui_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
