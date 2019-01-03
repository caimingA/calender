#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QDebug>
#include <QLabel>
#include <QDate>
#include <QString>
#include <QTextImageFormat>
#include <QFile>
#include <QCompleter>
#include <QLabel>
#include "month_search.h"
#include "dialog.h"
#include "memo.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    memo* new_win_memo;
    month_search* new_m_win;
    Dialog* new_win;
    Dialog* new_win_2;
    QLabel* openfilelabel;
    void get_date();
    void change_date();
    void get_fev();
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    /*void on_calendarWidget_activated(const QDate &date);*/
    void on_btn_ok_clicked();

    void on_calendarWidget_selectionChanged();

    void on_btn_find_clicked();

    void on_calendarWidget_activated(const QDate &date);



    void on_le_year_returnPressed();

    void on_le_month_returnPressed();

    void on_action_triggered();

    void on_action_2_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
