#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>
#include <QLabel>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog* new_win;
    void showImages(const QString &file);
    void display(int x, int y, int z,QString str);
    void display(int x, int y, int z);
    void display(int x, int y,QString str);
    void display(QString str);
    void display();
    QLabel* get_help();
    //void background();
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
