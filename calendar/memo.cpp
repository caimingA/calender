#include "memo.h"
#include "ui_memo.h"
#include <QString>
#include <QDebug>

memo::memo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memo)
{
    ui->setupUi(this);

    QTreeWidgetItem *item;

    //中文支持
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);

    QFile file_thing("text_thing.txt");
    QFile file_date("text_date.txt");
    if(!file_thing.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug()<<"Can't open the file_thing!"<<endl;
    }
    if(!file_date.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug()<<"Can't open the file_date!"<<endl;
    }

    int num=0;
    int num_thing;
    int num_date;
    QString str_thing_temp;
    QString str_date_temp;

    QTextStream stream_thing(&file_thing);
    QTextStream stream_date(&file_date);
    QString str_thing_all;
    QString str_date_all;
    str_thing_all=stream_thing.readAll();
    str_date_all=stream_date.readAll();
    num_thing=str_thing_all.size();
    num_date=str_date_all.size();
    if( (!str_date_all.isEmpty()) || (!str_thing_all.isEmpty()) )
    {
        for(int i=0;i<num_thing;i++)
        {
            i=str_thing_all.indexOf("!@#$%^&*()",i);
            if(i<0)
                break;
            num++;
            i++;
            str_thing_temp=str_thing_all.section("!@#$%^&*()",num,num);
            for(int j=0;j<num_date;j++)
            {
                j=str_date_all.indexOf("!@#$%^&*()",j);
                if(j<0)
                    break;
                j++;
                str_date_temp=str_date_all.section("!@#$%^&*()",num,num);

            }
            item = new QTreeWidgetItem(QStringList()<<str_thing_temp<<str_date_temp);
            this->ui->treeWidget->addTopLevelItem(item);
        }
    }
    file_thing.close();
    file_date.close();


}

memo::~memo()
{
    delete ui;
}

void memo::on_buttonBox_accepted()
{
    QString point=".";

    ////////////////////////////////////////////////////////////////////////////////////////
    QString str = this->ui->lineEdit->text();
    str += point;
    str += this->ui->lineEdit_2->text();
    str += point;
    str += this->ui->lineEdit_3->text();
    QString str_2 = this->ui->plainTextEdit->toPlainText();
    QTreeWidgetItem* item = new QTreeWidgetItem(QStringList()<<str_2<<str);
    this->ui->treeWidget->addTopLevelItem(item);
    ////////////////////////////////////////////////////////////////////////////////////////


    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);

    QFile file_thing("text_thing.txt");
    QFile file_date("text_date.txt");
    if(!file_thing.open(QIODevice::Append | QIODevice::Text)) {
        qDebug()<<"Can't open the file_thing!"<<endl;
    }
    if(!file_date.open(QIODevice::Append | QIODevice::Text)) {
        qDebug()<<"Can't open the file_date!"<<endl;
    }

    QTextStream stream_thing(&file_thing);
    QTextStream stream_date(&file_date);

    stream_thing.seek(file_thing.size());                   //将当前读取文件指针移动到文件末尾
    stream_date.seek(file_date.size());

    stream_date<<"!@#$%^&*()"<<str;
    stream_thing<<"!@#$%^&*()"<<str_2;

    file_date.close();
    file_thing.close();

    close();
}


void memo::on_buttonBox_rejected()
{
    close();
}

void memo::on_pushButton_clicked()
{
    QString point=".";

    /////////////////////////////////////////////////////////////////////////////////////////
    QString str = this->ui->lineEdit->text();
    str += point;
    str += this->ui->lineEdit_2->text();
    str += point;
    str += this->ui->lineEdit_3->text();
    QString str_2 = this->ui->plainTextEdit->toPlainText();
    QTreeWidgetItem* item = new QTreeWidgetItem(QStringList()<<str_2<<str);
    this->ui->treeWidget->addTopLevelItem(item);
    /////////////////////////////////////////////////////////////////////////////////////////

    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);

    QFile file_thing("text_thing.txt");
    QFile file_date("text_date.txt");
    if(!file_thing.open(QIODevice::Append | QIODevice::Text)) {
        qDebug()<<"Can't open the file_thing!"<<endl;
    }
    if(!file_date.open(QIODevice::Append | QIODevice::Text)) {
        qDebug()<<"Can't open the file_date!"<<endl;
    }

    QTextStream stream_thing(&file_thing);
    QTextStream stream_date(&file_date);

    stream_thing.seek(file_thing.size());                   //将当前读取文件指针移动到文件末尾
    stream_date.seek(file_date.size());

    stream_date<<"!@#$%^&*()"<<str;
    stream_thing<<"!@#$%^&*()"<<str_2;

    file_date.close();
    file_thing.close();

    this->ui->lineEdit->setText("");
    this->ui->lineEdit_2->setText("");
    this->ui->lineEdit_3->setText("");
    this->ui->plainTextEdit->setPlainText("");
}
