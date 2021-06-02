#ifndef MAIN_H
#define MAIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class main; }
QT_END_NAMESPACE

class main : public QMainWindow
{
    Q_OBJECT

public:
    main(QWidget *parent = nullptr);
    ~main();

private slots:
    void on_pushButton_clicked();

private:
    Ui::main *ui;
};
#endif // MAIN_H
