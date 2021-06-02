#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QPainter>
#include <QSlider>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_horizontalSliderR_valueChanged(int value);

    void on_horizontalSliderG_valueChanged(int value);

    void on_horizontalSliderB_valueChanged(int value);

    void on_lineEdit_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    void paintEvent(QPaintEvent *evt) override;
    void pixeles();
};
#endif // MAINWINDOW_H
