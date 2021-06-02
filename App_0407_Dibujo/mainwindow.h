#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTimer>
#include<QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_start_clicked();

    void on_btn_stop_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    void paintEvent(QPaintEvent *evt) override;
    void pixeles();
};
#endif // MAINWINDOW_H
