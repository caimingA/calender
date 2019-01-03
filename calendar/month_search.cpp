#include "month_search.h"
#include "ui_month_search.h"

month_search::month_search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::month_search)
{
    ui->setupUi(this);
}

month_search::~month_search()
{
    delete ui;
}


void month_search::on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    QClipboard *board = QApplication::clipboard();
    board->setText(item->text(column));
    QMessageBox msgBox;
    msgBox.setWindowTitle("通知");
    msgBox.setText("已复制到剪切板");
    msgBox.exec();
}
