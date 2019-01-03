#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->ui->label->setGeometry(12,44,250,250);
    this->ui->label_2->setGeometry(507-70,338-70,100,100);
    //setWindowOpacity(0.8);
    //setStyleSheet("border-image: url(background.jpg)");
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::showImages(const QString &file)
{
    this->ui->frame->setAutoFillBackground(true);
    //this->ui->frame->setScaledContents(true);
    QPalette palette= this->ui->frame->palette();
    palette.setBrush(QPalette::Window,QPixmap(file));
    this->ui->frame->setPalette(palette);

}
void Dialog::display(int x, int y, int z,QString str)
{
    this->ui->label->setText(QString::number(x) + " / " + QString::number(y)+ " / " +QString::number(z) + ":" + str);
}
void Dialog::display(int x, int y, int z)
{
    this->ui->label->setText(QString::number(x) + " / " + QString::number(y)+ " / " +QString::number(z));
}
void Dialog::display(int x, int y, QString str)
{
    this->ui->label->setText(QString::number(x) + " / " + QString::number(y)+ ":" + str);
}
void Dialog::display(QString str)
{
    this->ui->label->setText(str);
}
void Dialog::display()
{
    this->ui->label->setText("没有结果");
}
QLabel* Dialog::get_help()
{
    return this->ui->label_2;
}


