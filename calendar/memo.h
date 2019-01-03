#ifndef MEMO_H
#define MEMO_H

#include <QDialog>
#include <QPushButton>
#include <QGridLayout>
#include <QtCore/QCoreApplication>
#include <QFile>
#include <QDebug>
#include <QTextCodec>

namespace Ui {
class memo;
}

class memo : public QDialog
{
    Q_OBJECT
public:
    memo* new_win;
    explicit memo(QWidget *parent = 0);
    ~memo();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_pushButton_clicked();

private:
    Ui::memo *ui;
};

#endif // MEMO_H
