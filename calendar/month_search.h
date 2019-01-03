#ifndef MONTH_SEARCH_H
#define MONTH_SEARCH_H

#include <QDialog>
#include <QPushButton>
#include <QGridLayout>
#include <QClipboard>
#include <QTreeWidgetItem>
#include <QMessageBox>

namespace Ui {
class month_search;
}

class month_search : public QDialog
{
    Q_OBJECT

public:
    explicit month_search(QWidget *parent = 0);
    month_search* new_m_win;
    ~month_search();

private slots:
    void on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);

private:
    Ui::month_search *ui;
};

#endif // MONTH_SEARCH_H
