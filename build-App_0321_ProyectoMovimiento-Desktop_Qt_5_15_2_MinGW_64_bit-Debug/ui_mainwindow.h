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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *fondo;
    QLabel *player;
    QLabel *enemy1;
    QLabel *enemy2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *btnNew;
    QPushButton *btnStop;
    QRadioButton *btnFacil;
    QRadioButton *btnDificil;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_puntos;
    QLabel *lbl_final;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(600, 420);
        MainWindow->setMinimumSize(QSize(600, 420));
        MainWindow->setMaximumSize(QSize(600, 450));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/img/img/fondo.png);"));
        fondo = new QWidget(MainWindow);
        fondo->setObjectName(QString::fromUtf8("fondo"));
        fondo->setEnabled(true);
        player = new QLabel(fondo);
        player->setObjectName(QString::fromUtf8("player"));
        player->setGeometry(QRect(270, 230, 37, 75));
        player->setAutoFillBackground(false);
        player->setStyleSheet(QString::fromUtf8("background-image: url(:/img/img/player.png);"));
        enemy1 = new QLabel(fondo);
        enemy1->setObjectName(QString::fromUtf8("enemy1"));
        enemy1->setGeometry(QRect(10, 110, 80, 40));
        enemy1->setStyleSheet(QString::fromUtf8("background-image: url(:/img/img/enemy2.png);"));
        enemy2 = new QLabel(fondo);
        enemy2->setObjectName(QString::fromUtf8("enemy2"));
        enemy2->setGeometry(QRect(540, 180, 50, 40));
        enemy2->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/enemy1.png);"));
        layoutWidget = new QWidget(fondo);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 370, 421, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);\n"
"background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Goudy Old Style\";"));

        horizontalLayout->addWidget(pushButton_3);

        btnNew = new QPushButton(layoutWidget);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));
        btnNew->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);\n"
"background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Goudy Old Style\";"));

        horizontalLayout->addWidget(btnNew);

        btnStop = new QPushButton(layoutWidget);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        btnStop->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);\n"
"background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Goudy Old Style\";"));

        horizontalLayout->addWidget(btnStop);

        btnFacil = new QRadioButton(layoutWidget);
        btnFacil->setObjectName(QString::fromUtf8("btnFacil"));
        btnFacil->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 127);\n"
"background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Goudy Old Style\";"));
        btnFacil->setChecked(true);

        horizontalLayout->addWidget(btnFacil);

        btnDificil = new QRadioButton(layoutWidget);
        btnDificil->setObjectName(QString::fromUtf8("btnDificil"));
        btnDificil->setStyleSheet(QString::fromUtf8("color: rgb(170, 170, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Goudy Old Style\";"));

        horizontalLayout->addWidget(btnDificil);

        label_2 = new QLabel(fondo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1, 350, 421, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Serif\";"));
        label_3 = new QLabel(fondo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(421, 350, 191, 20));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Serif\";"));
        layoutWidget1 = new QWidget(fondo);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(421, 370, 181, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Goudy Old Style\";"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 0);\n"
"background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Goudy Old Style\";"));

        horizontalLayout_2->addWidget(pushButton);

        label_4 = new QLabel(fondo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(516, 350, 71, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 6pt \"Gadugi\";"));
        label = new QLabel(fondo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 61, 16));
        label_puntos = new QLabel(fondo);
        label_puntos->setObjectName(QString::fromUtf8("label_puntos"));
        label_puntos->setGeometry(QRect(70, 10, 121, 16));
        label_puntos->setAutoFillBackground(false);
        label_puntos->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        lbl_final = new QLabel(fondo);
        lbl_final->setObjectName(QString::fromUtf8("lbl_final"));
        lbl_final->setGeometry(QRect(140, 120, 301, 101));
        lbl_final->setStyleSheet(QString::fromUtf8("font: 12pt \"Modern No. 20\";\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(85, 0, 255);"));
        MainWindow->setCentralWidget(fondo);
        enemy1->raise();
        enemy2->raise();
        layoutWidget1->raise();
        label_2->raise();
        label_3->raise();
        layoutWidget1->raise();
        label_4->raise();
        player->raise();
        label->raise();
        label_puntos->raise();
        lbl_final->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Daisy Rescue", nullptr));
        player->setText(QString());
        enemy1->setText(QString());
        enemy2->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Reiniciar", nullptr));
#if QT_CONFIG(tooltip)
        btnNew->setToolTip(QCoreApplication::translate("MainWindow", "Empieza de nuevo", nullptr));
#endif // QT_CONFIG(tooltip)
        btnNew->setText(QCoreApplication::translate("MainWindow", "Empezar", nullptr));
#if QT_CONFIG(tooltip)
        btnStop->setToolTip(QCoreApplication::translate("MainWindow", "Deten esta pesadilla", nullptr));
#endif // QT_CONFIG(tooltip)
        btnStop->setText(QCoreApplication::translate("MainWindow", "Pausar", nullptr));
#if QT_CONFIG(tooltip)
        btnFacil->setToolTip(QCoreApplication::translate("MainWindow", "Para novatos.", nullptr));
#endif // QT_CONFIG(tooltip)
        btnFacil->setText(QCoreApplication::translate("MainWindow", "F\303\241cil", nullptr));
#if QT_CONFIG(tooltip)
        btnDificil->setToolTip(QCoreApplication::translate("MainWindow", "Prueba tu experiencia.", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDificil->setText(QCoreApplication::translate("MainWindow", "Dificl", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Evita obstaculos, y mejora tu puntuaci\303\263n.", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Controles", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Detenerse", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Avanzar", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Versi\303\263n Alpha 3.52", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Puntuaci\303\263n:", nullptr));
        label_puntos->setText(QCoreApplication::translate("MainWindow", "000", nullptr));
        lbl_final->setText(QCoreApplication::translate("MainWindow", "Bienvenido", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
