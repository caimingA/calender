#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "memo.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(this->ui->le_year,SIGNAL(clicked(bool)),this->ui->le_year,SLOT(selectAll()));
    connect(this->ui->le_day, SIGNAL(returnPressed()), this->ui->btn_ok, SIGNAL(clicked()), Qt::UniqueConnection);
    connect(this->ui->le_fev, SIGNAL(returnPressed()), this->ui->btn_find, SIGNAL(clicked()), Qt::UniqueConnection);
    for(int x = 1900; x <=2100; x++)
    {
        for(int y = 1; y <= 12; y++)
        {
            for(int z = 1; z <= 31; z++)
            {
                QDate festival(x, y, z);
                if(y == 1 && z == 1)
                {
                    QDate festival(x, y, z);
                    QTextCharFormat todayFormat;
                    todayFormat.setBackground(QColor::fromRgbF(0, 0, 0, 0));
                    todayFormat.setFontPointSize(18);
                    todayFormat.setFontWeight(15);
                    //todayFormat.set
                    todayFormat.setFontUnderline(true);
                    this->ui->calendarWidget->setDateTextFormat(festival,todayFormat);
                }
                else if(y == 1 && festival.dayOfWeek() == 1 && z >= 8 && z <= 14)
                {
                    QDate festival(x, y, z);
                    QTextCharFormat todayFormat;
                    todayFormat.setBackground(QColor::fromRgbF(0, 0, 0, 0));
                    todayFormat.setFontPointSize(18);
                    todayFormat.setFontWeight(15);
                    todayFormat.setFontUnderline(true);
                    this->ui->calendarWidget->setDateTextFormat(festival,todayFormat);
                }
                else if(y == 2 && z == 11)
                {
                    QDate festival(x, y, z);
                    QTextCharFormat todayFormat;
                    todayFormat.setBackground(QColor::fromRgbF(0, 0, 0, 0));
                    todayFormat.setFontPointSize(18);
                    //todayFormat.setFontWeight(15);
                    todayFormat.setFontUnderline(true);
                    this->ui->calendarWidget->setDateTextFormat(festival,todayFormat);
                }
                else if(y == 3 && z == 21)
                {
                    QDate festival(x, y, z);
                    QTextCharFormat todayFormat;
                    todayFormat.setBackground(QColor::fromRgbF(0, 0, 0, 0));
                    todayFormat.setFontPointSize(18);
                    todayFormat.setFontWeight(15);
                    todayFormat.setFontUnderline(true);
                    this->ui->calendarWidget->setDateTextFormat(festival,todayFormat);
                }
                else if(y == 4 && z == 29)
                {
                    QDate festival(x, y, z);
                    QTextCharFormat todayFormat;
                    todayFormat.setBackground(QColor::fromRgbF(0, 0, 0, 0));
                    todayFormat.setFontPointSize(18);
                    todayFormat.setFontWeight(15);
                    todayFormat.setFontUnderline(true);
                    todayFormat.setForeground(QColor::fromRgbF(1, 1, 1, 0));
                    this->ui->calendarWidget->setDateTextFormat(festival,todayFormat);
                }
                else if(y == 5 && z == 3)
                {
                    QDate festival(x, y, z);
                    QTextCharFormat todayFormat;
                    todayFormat.setBackground(QColor::fromRgbF(0, 0, 0, 0));
                    todayFormat.setFontPointSize(18);
                    todayFormat.setFontWeight(15);
                    todayFormat.setFontUnderline(true);
                    this->ui->calendarWidget->setDateTextFormat(festival,todayFormat);
                }
                else if(y == 5 && z == 4)
                {
                    QDate festival(x, y, z);
                    QTextCharFormat todayFormat;
                    todayFormat.setBackground(QColor::fromRgbF(0, 0, 0, 0));
                    todayFormat.setFontPointSize(18);
                    todayFormat.setFontWeight(15);
                    todayFormat.setFontUnderline(true);
                    this->ui->calendarWidget->setDateTextFormat(festival,todayFormat);
                }
                else if(y == 5 && z == 5)
                {
                    QDate festival(x, y, z);
                    QTextCharFormat todayFormat;
                    todayFormat.setBackground(QColor::fromRgbF(0, 0, 0, 0));
                    todayFormat.setFontPointSize(18);
                    todayFormat.setFontWeight(15);
                    todayFormat.setFontUnderline(true);
                    this->ui->calendarWidget->setDateTextFormat(festival,todayFormat);
                }
                else if(y == 7 && festival.dayOfWeek() == 1 && z >= 15 && z <= 21)
                {
                    QDate festival(x, y, z);
                    QTextCharFormat todayFormat;
                    todayFormat.setBackground(QColor::fromRgbF(0, 0, 0, 0));
                    todayFormat.setFontPointSize(18);
                    todayFormat.setFontWeight(15);
                    todayFormat.setFontUnderline(true);
                    this->ui->calendarWidget->setDateTextFormat(festival,todayFormat);
                }
                else if(y == 9 && festival.dayOfWeek() == 1 && z >= 15 && z <= 21)
                {
                    QDate festival(x, y, z);
                    QTextCharFormat todayFormat;
                    todayFormat.setBackground(QColor::fromRgbF(0, 0, 0, 0));
                    todayFormat.setFontPointSize(18);
                    todayFormat.setFontWeight(15);
                    todayFormat.setFontUnderline(true);
                    this->ui->calendarWidget->setDateTextFormat(festival,todayFormat);
                }
                else if(y == 9 && z == 23)
                {
                    QDate festival(x, y, z);
                    QTextCharFormat todayFormat;
                    todayFormat.setBackground(QColor::fromRgbF(0, 0, 0, 0));
                    todayFormat.setFontPointSize(18);
                    todayFormat.setFontWeight(15);
                    todayFormat.setFontUnderline(true);
                    this->ui->calendarWidget->setDateTextFormat(festival,todayFormat);
                }
                else if(y == 10 && festival.dayOfWeek() == 1 && z >= 8 && z <= 14)
                {
                    QDate festival(x, y, z);
                    QTextCharFormat todayFormat;
                    todayFormat.setBackground(QColor::fromRgbF(0, 0, 0, 0));
                    todayFormat.setFontPointSize(18);
                    todayFormat.setFontWeight(15);
                    todayFormat.setFontUnderline(true);
                    this->ui->calendarWidget->setDateTextFormat(festival,todayFormat);
                }
                else if(y == 11 && z == 3)
                {
                    QDate festival(x, y, z);
                    QTextCharFormat todayFormat;
                    todayFormat.setBackground(QColor::fromRgbF(0, 0, 0, 0));
                    todayFormat.setFontPointSize(18);
                    todayFormat.setFontWeight(15);
                    todayFormat.setFontUnderline(true);
                    this->ui->calendarWidget->setDateTextFormat(festival,todayFormat);
                }
                else if(y == 11 && z == 23)
                {
                    QDate festival(x, y, z);
                    QTextCharFormat todayFormat;
                    todayFormat.setBackground(QColor::fromRgbF(0, 0, 0, 0));
                    todayFormat.setFontPointSize(18);
                    todayFormat.setFontWeight(15);
                    todayFormat.setFontUnderline(true);
                    this->ui->calendarWidget->setDateTextFormat(festival,todayFormat);
                }
                else if(y == 12 && z == 23)
                {
                    QDate festival(x, y, z);
                    QTextCharFormat todayFormat;
                    todayFormat.setBackground(QColor::fromRgbF(0, 0, 0, 0));
                    todayFormat.setFontPointSize(18);
                    todayFormat.setFontWeight(15);
                    todayFormat.setFontUnderline(true);
                    this->ui->calendarWidget->setDateTextFormat(festival,todayFormat);
                }
                else
                {
                     continue;
                }
            }
        }
    }
    QStringList fev;                                                        //
    fev<<"新年"<<"成人节"<<"建国纪念日"<<"春分节"<<"昭和日"<<"宪法纪念日"<<"绿色日"<<"儿童节"<<"海洋节"<<"敬老节"<<"秋分节"<<"体育节"<<"文化节"<<"劳动感恩节"<<"天皇生日节"<<"补假";
    QCompleter* completer = new QCompleter(fev,this);
    completer->setFilterMode(Qt::MatchContains);
    ui->le_fev->setCompleter(completer);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::change_date()
{
    new_win = new Dialog;
    new_win->show();
    //new_win->move(0,0);
    int x = this->ui->calendarWidget->selectedDate().year();
    int y = this->ui->calendarWidget->selectedDate().month();
    int z = this->ui->calendarWidget->selectedDate().day();
    QDate date(x,y,z);

    QString str;
    this->ui->le_year->setText(QString::number(date.year()));
    this->ui->le_month->setText(QString::number(date.month()));
    this->ui->le_day->setText(QString::number(date.day()));

    QStringList fev_date_list;
        fev_date_list << "1.1" << "1.12" << "2.11" << "3.21" << "4.29"
                      << "5.3" << "5.4" << "5.5" << "7.20" << "9.21"
                      << "9.23" << "10.12" << "11.3" << "11.23" << "12.23";

        str = QString::number(x,10) + "." + QString::number(y,10) + "." + QString::number(z,10);
        QTextCodec *codec = QTextCodec::codecForName("UTF-8");
        QTextCodec::setCodecForLocale(codec);

        QFile file_thing("text_thing.txt");
        QFile file_date("text_date.txt");
        if(!file_thing.open(QIODevice::ReadOnly | QIODevice::Text)) {
            qDebug()<<"Can't open the file_thing!"<<endl;
        }
        if(!file_date.open(QIODevice::ReadOnly | QIODevice::Text)) {
            qDebug()<<"Can't open the file_date!"<<endl;
        }

        int i = 0;
        int num = 0;
        //int str_size;
        int temp;
        int j = 0;
        int n;                                          //记录是.txt中的第几个
        QString str_all = "\n" ;
        QString str_temp;

        QTextStream stream_thing(&file_thing);
        QTextStream stream_date(&file_date);
        QString str_thing_all;
        QString str_date_all;
        str_thing_all=stream_thing.readAll();
        str_date_all=stream_date.readAll();
        //str_size = str_date_all.size();
        if( (!str_date_all.isEmpty()) || (!str_thing_all.isEmpty()) )
        {
            i=str_date_all.indexOf(str);                        //检索日期，有则相同返回对应日期首位，若没有则返回-1
            while( i >= 0 )
            {
                temp = num + 1;                                 //专做序号
                str_all += QString::number(temp,10) + ". ";
                num++;
                str_temp = str_date_all.left(i);
                if(!str_temp.isEmpty())
                {
                    n = 0;
                    while(j>=0)
                    {
                        j = str_temp.indexOf("!@#$%^&*()",j);
                        n++;
                        if(j<0)
                            break;
                        j++;
                    }
                    j = 0;
                    n--;
                }
                str_all += str_thing_all.section("!@#$%^&*()",n,n);
                str_all = str_all + "\n";
                i=str_date_all.indexOf(str,i+1);
            }
            if(str_all!="\n")
            {
                /*new_win_2 =new Dialog;
                new_win_2->show();
                new_win_2->move(0,0);*/
                foreach(const QString &str_, fev_date_list)
                {
                    if (str_date_all.section("!@#$%^&*()",n,n).contains(str_))
                    {
                        new_win_2 =new Dialog;
                        new_win_2->show();
                        new_win_2->move(0,0);
                        new_win_2->display(x,y,z,str_all);
                        new_win_2->showImages(":/new/prefix1/a/qingrenjie.png");

                    }
                    /*else
                    {
                        new_win->display(x,y,z,str_all);
                        //new_win_2->showImages(":/new/prefix1/a/qingrenjie.png");
                    }*/
                }
            }
        }


    if(y == 1 && z == 1)
    {
        str = "新年:日本で最も大きなお祭りのひとつ、毎朝の朝、毎日の朝、心のこもった朝食があり、大晦日の夢をお話します。 近くの神社に初めて行かれ、幸運の一年を訪れる";
        new_win->display(x, y, z,str);
        new_win->showImages(":/new/prefix1/a/xinnian.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E6%96%B0%E5%B9%B4/9002454?fr=aladdin><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(y == 1 && date.dayOfWeek() == 1 && z >= 8 && z <= 14)
    {
        str = "成人节:20歳以上の若い男女の独立を祝うのはお祭りです";
        new_win->display(x, y, z,str);
        new_win->showImages(":/new/prefix1/a/chengrenjie.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%88%90%E4%BA%BA%E8%8A%82><img src=:/new/prefix1/a/find_more_03.png>a>"));
        openfilelabel->show();
    }
    else if(y == 2 && z == 11)
    {
        str = "建国纪念日:日本の神話によると、神皇帝は紀元前660年2月11日に祖国を創設しました。";
        new_win->display(x, y, z,str);
        new_win->showImages(":/new/prefix1/a/jianguo.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E5%BB%BA%E5%9B%BD%E7%BA%AA%E5%BF%B5%E6%97%A5/5984552><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(y == 3 && z == 21)
    {
        str = "春分节:墓を掃除し、先祖を崇拝する日";
        new_win->display(x, y, z,str);
        new_win->showImages(":/new/prefix1/a/chunfen.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%98%A5%E5%88%86/16864?fr=aladdin><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(y == 4 && z == 29)
    {
        str = "昭和日:昭和皇太子の誕生日は、就任当初はすでに国家祭であった。 この祭りは、1989年以前の天皇の誕生日、1989年から2006年の緑の日、そして2007年から現在までの昭和の日でした。";
        new_win->display(x, y, z,str);
        new_win->showImages(":/new/prefix1/a/zhaohe.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%98%AD%E5%92%8C%E4%B9%8B%E6%97%A5/10517010><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(y == 5 && z == 3)
    {
        str = "宪法纪念日:1947年5月3日、日本の憲法が施行され、今日は憲法の日と指定されました。";
        new_win->display(x, y, z,str);
        new_win->showImages(":/new/prefix1/a/xianfa.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E5%AE%AA%E6%B3%95%E7%BA%AA%E5%BF%B5%E6%97%A5><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(y == 5 && z == 4)
    {
        str = "绿色日:このセクションは、1988年から2006年の国民休日です。";
        new_win->display(x, y, z,str);
        new_win->showImages(":/new/prefix1/a/lv.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E7%BB%BF%E8%89%B2%E4%B9%8B%E6%97%A5/10607869><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(y == 5 && z == 5)
    {
        str = "儿童节:子供の成長を祝って、男の子がいる家庭はイカの旗を垂らし、寝たきりのある武家屋敷を訪れます";
        new_win->display(x, y, z,str);
        new_win->showImages(":/new/prefix1/a/ertongjie.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E7%AB%AF%E5%8D%88%E8%8A%82/1054><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(y == 7 && date.dayOfWeek() == 1 && z >= 15 && z <= 21)

    {
         str = "海洋节:海からの恵みと全国大会昌龍の海洋国家になることを祈り、2003年7月以前のこの祭りの日は7月20日です。";
         new_win->display(x, y, z,str);
         new_win->showImages(":/new/prefix1/a/hai.png");
         openfilelabel = new_win->get_help();
         openfilelabel->setOpenExternalLinks(true);
         openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E6%B5%B7%E6%B4%8B%E8%8A%82/12816052?fr=aladdin><img src=:/new/prefix1/a/find_more_03.png></a>"));
         openfilelabel->show();
    }
    else if(y == 9 && date.dayOfWeek() == 1 && z >= 15 && z <= 21)
    {
         str = "敬老节:高齢者を尊重し、高齢者に感謝の意を表明するため、2003までの9月15日";
         new_win->display(x, y, z,str);
         new_win->showImages(":/new/prefix1/a/jinglaojie.png");
         openfilelabel = new_win->get_help();
         openfilelabel->setOpenExternalLinks(true);
         openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://zhidao.baidu.com/question/321277618.html><img src=:/new/prefix1/a/find_more_03.png></a>"));
         openfilelabel->show();
    }
    else if(y == 9 && z == 23)
    {
         str = "秋分节:カレンダーによれば、年ごとに異なります。春分点のように、祖先を崇拝するためには墓を掃除する必要があります";
         new_win->display(x, y, z,str);
         new_win->showImages(":/new/prefix1/a/qiufen.png");
         openfilelabel = new_win->get_help();
         openfilelabel->setOpenExternalLinks(true);
         openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E7%A7%8B%E5%88%86/9379><img src=:/new/prefix1/a/find_more_03.png></a>"));
         openfilelabel->show();
    }
    else if(y == 10 && date.dayOfWeek() == 1 && z >= 8 && z <= 14)
    {
         str = "体育节:1964年の東京オリンピックの開会式を記念して、2000年10月以前のこの祭りは10月10日";
         new_win->display(x, y, z,str);
         new_win->showImages(":/new/prefix1/a/tiyu.png");
         openfilelabel = new_win->get_help();
         openfilelabel->setOpenExternalLinks(true);
         openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://zhidao.baidu.com/question/1900254847244912580.html><img src=:/new/prefix1/a/find_more_03.png></a>"));
         openfilelabel->show();
    }
    else if(y == 11 && z == 3)
    {
         str = "文化日:1954年以前は明治天皇の誕生を記念して1964年11月3日に新憲法が発効し、自由と平等の愛と文化的取り組みを推進するための文化祭に変わりました。";
         new_win->display(x, y, z,str);
         new_win->showImages(":/new/prefix1/a/wenhuaji.png");
         openfilelabel = new_win->get_help();
         openfilelabel->setOpenExternalLinks(true);
         openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%96%87%E5%8C%96%E8%8A%82/858980><img src=:/new/prefix1/a/find_more_03.png></a>"));
         openfilelabel->show();
    }
    else if(y == 11 && z == 23)
    {
         str = "劳动感恩节:この時、収穫期には、収穫に感謝の気持ちを表明するために、労働を感謝する目的の祭りが開かれました";
         new_win->display(x, y, z,str);
         new_win->showImages(":/new/prefix1/a/laodong.png");
         openfilelabel = new_win->get_help();
         openfilelabel->setOpenExternalLinks(true);
         openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://www.baidu.com/><img src=:/new/prefix1/a/find_more_03.png></a>"));
         openfilelabel->show();
    }
    else if(y == 12 && z == 23)
    {
         str = "天皇生日节:1933年12月23日生まれの天皇明仁";
         new_win->display(x, y, z,str);
         new_win->showImages(":/new/prefix1/a/tianhuangdansheng.png");
         openfilelabel = new_win->get_help();
         openfilelabel->setOpenExternalLinks(true);
         openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E5%A4%A9%E7%9A%87%E8%AF%9E%E7%94%9F%E6%97%A5/11010222><img src=:/new/prefix1/a/find_more_03.png></a>"));
         openfilelabel->show();
    }
    else
    {
         if(str_all == "\n")
         {
             new_win->display(x, y, z);
         }
         else
         {
             new_win->display(x, y, z, str_all);
         }
         new_win->showImages(":/new/prefix1/a/ram.png");
         openfilelabel = new_win->get_help();
         openfilelabel->setOpenExternalLinks(true);
         openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E9%9B%B7%E5%A7%86/19652918?fr=aladdin><img src=:/new/prefix1/a/find_more_03.png></a>"));
         openfilelabel->show();
    }
}
void MainWindow::get_date()
{
    QString year = this->ui->le_year->text();
    QString month =this->ui->le_month->text();
    QString day =this->ui->le_day->text();
    QDate date(year.toDouble(),month.toDouble(),day.toDouble());
    this->ui->calendarWidget->setSelectedDate(date);
}
void MainWindow::get_fev()
{
    new_win = new Dialog;
    new_win->show();
    QString festival = this->ui->le_fev->text();
    QString temp;
    if(festival == "新年")
    {
        temp = festival + ":日本で最も大きなお祭りのひとつ、毎朝の朝、毎日の朝、心のこもった朝食があり、大晦日の夢をお話します。 近くの神社に初めて行かれ、幸運の一年を訪れる。";
        new_win->display(1, 1, temp);
        new_win->showImages(":/new/prefix1/a/xinnian.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E6%96%B0%E5%B9%B4/9002454?fr=aladdin><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(festival == "成人节")
    {
        new_win->display("一月第二个星期一:20歳以上の若い男女の独立を祝うのはお祭りです");
        new_win->showImages(":/new/prefix1/a/chengrenjie.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%88%90%E4%BA%BA%E8%8A%82><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(festival == "建国纪念日")
    {
        temp = festival + ":日本の神話によると、神皇帝は紀元前660年2月11日に祖国を創設しました。";
        new_win->display(2, 11, temp);
        new_win->showImages(":/new/prefix1/a/jianguo.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E5%BB%BA%E5%9B%BD%E7%BA%AA%E5%BF%B5%E6%97%A5/5984552><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(festival == "春分节")
    {
        temp = festival + ":墓を掃除し、先祖を崇拝する日";
        new_win->display(3, 21, temp);
        new_win->showImages(":/new/prefix1/a/chunfen.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%98%A5%E5%88%86/16864?fr=aladdin><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(festival == "昭和日")
    {
        temp = festival + ":昭和皇太子の誕生日は、就任当初はすでに国家祭であった。 この祭りは、1989年以前の天皇の誕生日、1989年から2006年の緑の日、そして2007年から現在までの昭和の日でした。";
        new_win->display(4, 29, temp);
        new_win->showImages(":/new/prefix1/a/zhaohe.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%98%AD%E5%92%8C%E4%B9%8B%E6%97%A5/10517010><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(festival == "宪法纪念日")
    {
        temp = festival + ":947年5月3日、日本の憲法が施行され、今日は憲法の日と指定されました。";
        new_win->display(5, 3, temp);
        new_win->showImages(":/new/prefix1/a/xianfa.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E5%AE%AA%E6%B3%95%E7%BA%AA%E5%BF%B5%E6%97%A5><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(festival == "绿色日")
    {
        temp = festival + "このセクションは、1988年から2006年の国民休日です。";
        new_win->display(5, 4, temp);
        new_win->showImages(":/new/prefix1/a/lv.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E7%BB%BF%E8%89%B2%E4%B9%8B%E6%97%A5/10607869><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(festival == "儿童节")
    {
        temp = festival + ":子供の成長を祝って、男の子がいる家庭はイカの旗を垂らし、寝たきりのある武家屋敷を訪れます";
        new_win->display(5, 5, temp);
        new_win->showImages(":/new/prefix1/a/ertongjie.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E7%AB%AF%E5%8D%88%E8%8A%82/1054><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(festival == "海洋节")
    {
        new_win->display("七月第三个星期一:海からの恵みと全国大会昌龍の海洋国家になることを祈り、2003年7月以前のこの祭りの日は7月20日です。");
        new_win->showImages(":/new/prefix1/a/hai.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E6%B5%B7%E6%B4%8B%E8%8A%82/12816052?fr=aladdin><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(festival == "敬老节")
    {
        new_win->display("九月第三个星期一:高齢者を尊重し、高齢者に感謝の意を表明するため、2003までの9月15日");
        new_win->showImages(":/new/prefix1/a/jinglaojie.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://zhidao.baidu.com/question/321277618.html><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(festival == "秋分节")
    {
        temp = festival + ":カレンダーによれば、年ごとに異なります。春分点のように、祖先を崇拝するためには墓を掃除する必要があります";
        new_win->display(7, 20, temp);
        new_win->showImages(":/new/prefix1/a/qiufen.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E7%A7%8B%E5%88%86/9379><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(festival == "体育节")
    {
        new_win->display("十月第二个星期一:1964年の東京オリンピックの開会式を記念して、2000年10月以前のこの祭りは10月10日");
        new_win->showImages(":/new/prefix1/a/tiyu.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://zhidao.baidu.com/question/1900254847244912580.html><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(festival == "文化日")
    {
        temp = festival + ":954年以前は明治天皇の誕生を記念して1964年11月3日に新憲法が発効し、自由と平等の愛と文化的取り組みを推進するための文化祭に変わりました。";
        new_win->display(11, 3, temp);
        new_win->showImages(":/new/prefix1/a/wenhuaji.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%96%87%E5%8C%96%E8%8A%82/858980><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(festival == "劳动感恩节")
    {
        temp = festival + ":この時、収穫期には、収穫に感謝の気持ちを表明するために、労働を感謝する目的の祭りが開かれました";
        new_win->display(11, 23, temp);
        new_win->showImages(":/new/prefix1/a/laodong.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://www.baidu.com/><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else if(festival == "天皇生日节")
    {
        temp = festival + ":1933年12月23日生まれの天皇明仁";
        new_win->display(12, 23, temp);
        new_win->showImages(":/new/prefix1/a/tianhuangdansheng.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E5%A4%A9%E7%9A%87%E8%AF%9E%E7%94%9F%E6%97%A5/11010222><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
    else
    {
        new_win->display();
        new_win->showImages(":/new/prefix1/a/ram.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E9%9B%B7%E5%A7%86/19652918?fr=aladdin><img src=:/new/prefix1/a/find_more_03.png></a>"));
        openfilelabel->show();
    }
}
void MainWindow::on_btn_ok_clicked()
{
    get_date();
}

void MainWindow::on_calendarWidget_selectionChanged()
{
    change_date();
}

void MainWindow::on_btn_find_clicked()
{
    get_fev();
}

void MainWindow::on_calendarWidget_activated(const QDate &date)
{
    QDate date_temp(0,0,0);
    date_temp = date;
    /*new_win = new Dialog;
    new_win->show();
    int x = date.year();
    int y = date.month();
    int z = date.day();
    QString str;
    if(y == 1 && z == 1)
    {
        str = "新年:日本で最も大きなお祭りのひとつ、毎朝の朝、毎日の朝、心のこもった朝食があり、大晦日の夢をお話します。 近くの神社に初めて行かれ、幸運の一年を訪れる";
        new_win->display(x, y, z,str);
        new_win->showImages(":/new/prefix1/a/xinnian.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E6%96%B0%E5%B9%B4/9002454?fr=aladdin>find more</a>"));
        openfilelabel->show();
    }
    else if(y == 1 && date.dayOfWeek() == 1 && z >= 8 && z <= 14)
    {
        str = "成人节:20歳以上の若い男女の独立を祝うのはお祭りです";
        new_win->display(x, y, z,str);
        new_win->showImages(":/new/prefix1/a/chengrenjie.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%88%90%E4%BA%BA%E8%8A%82>find more</a>"));
        openfilelabel->show();
    }
    else if(y == 2 && z == 11)
    {
        str = "建国纪念日:日本の神話によると、神皇帝は紀元前660年2月11日に祖国を創設しました。";
        new_win->display(x, y, z,str);
        new_win->showImages(":/new/prefix1/a/jianguo.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E6%96%B0%E5%B9%B4/9002454?fr=aladdin>find more</a>"));
        openfilelabel->show();
    }
    else if(y == 3 && z == 21)
    {
        str = "春分节:墓を掃除し、先祖を崇拝する日";
        new_win->display(x, y, z,str);
        new_win->showImages(":/new/prefix1/a/chunfen.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E6%96%B0%E5%B9%B4/9002454?fr=aladdin>find more</a>"));
        openfilelabel->show();
    }
    else if(y == 4 && z == 29)
    {
        str = "昭和日:昭和皇太子の誕生日は、就任当初はすでに国家祭であった。 この祭りは、1989年以前の天皇の誕生日、1989年から2006年の緑の日、そして2007年から現在までの昭和の日でした。";
        new_win->display(x, y, z,str);
        new_win->showImages(":/new/prefix1/a/zhaohe.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E6%96%B0%E5%B9%B4/9002454?fr=aladdin>find more</a>"));
        openfilelabel->show();
    }
    else if(y == 5 && z == 3)
    {
        str = "宪法纪念日:1947年5月3日、日本の憲法が施行され、今日は憲法の日と指定されました。";
        new_win->display(x, y, z,str);
        new_win->showImages(":/new/prefix1/a/xianfa.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E6%96%B0%E5%B9%B4/9002454?fr=aladdin>find more</a>"));
        openfilelabel->show();
    }
    else if(y == 5 && z == 4)
    {
        str = "绿色日:このセクションは、1988年から2006年の国民休日です。";
        new_win->display(x, y, z,str);
        new_win->showImages(":/new/prefix1/a/lv.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E6%96%B0%E5%B9%B4/9002454?fr=aladdin>find more</a>"));
        openfilelabel->show();
    }
    else if(y == 5 && z == 5)
    {
        str = "儿童节:子供の成長を祝って、男の子がいる家庭はイカの旗を垂らし、寝たきりのある武家屋敷を訪れます";
        new_win->display(x, y, z,str);
        new_win->showImages(":/new/prefix1/a/ertongjie.png");
        openfilelabel = new_win->get_help();
        openfilelabel->setOpenExternalLinks(true);
        openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E6%96%B0%E5%B9%B4/9002454?fr=aladdin>find more</a>"));
        openfilelabel->show();
    }
    else if(y == 7 && date.dayOfWeek() == 1 && z >= 15 && z <= 21)
    {
         str = "海洋节:海からの恵みと全国大会昌龍の海洋国家になることを祈り、2003年7月以前のこの祭りの日は7月20日です。";
         new_win->display(x, y, z,str);
         new_win->showImages(":/new/prefix1/a/hai.png");
         openfilelabel = new_win->get_help();
         openfilelabel->setOpenExternalLinks(true);
         openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E6%96%B0%E5%B9%B4/9002454?fr=aladdin>find more</a>"));
         openfilelabel->show();
    }
    else if(y == 9 && date.dayOfWeek() == 1 && z >= 15 && z <= 21)
    {
         str = "敬老节:高齢者を尊重し、高齢者に感謝の意を表明するため、2003までの9月15日";
         new_win->display(x, y, z,str);
         new_win->showImages(":/new/prefix1/a/jinglaojie.png");
         openfilelabel = new_win->get_help();
         openfilelabel->setOpenExternalLinks(true);
         openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E6%96%B0%E5%B9%B4/9002454?fr=aladdin>find more</a>"));
         openfilelabel->show();
    }
    else if(y == 9 && z == 23)
    {
         str = "秋分节:カレンダーによれば、年ごとに異なります。春分点のように、祖先を崇拝するためには墓を掃除する必要があります";
         new_win->display(x, y, z,str);
         new_win->showImages(":/new/prefix1/a/qiufen.png");
         openfilelabel = new_win->get_help();
         openfilelabel->setOpenExternalLinks(true);
         openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E6%96%B0%E5%B9%B4/9002454?fr=aladdin>find more</a>"));
         openfilelabel->show();
    }
    else if(y == 10 && date.dayOfWeek() == 1 && z >= 8 && z <= 14)
    {
         str = "体育节:1964年の東京オリンピックの開会式を記念して、2000年10月以前のこの祭りは10月10日";
         new_win->display(x, y, z,str);
         new_win->showImages(":/new/prefix1/a/tiyu.png");
         openfilelabel = new_win->get_help();
         openfilelabel->setOpenExternalLinks(true);
         openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E6%96%B0%E5%B9%B4/9002454?fr=aladdin>find more</a>"));
         openfilelabel->show();
    }
    else if(y == 11 && z == 3)
    {
         str = "文化日:1954年以前は明治天皇の誕生を記念して1964年11月3日に新憲法が発効し、自由と平等の愛と文化的取り組みを推進するための文化祭に変わりました。";
         new_win->display(x, y, z,str);
         new_win->showImages(":/new/prefix1/a/wenhuaji.png");
         openfilelabel = new_win->get_help();
         openfilelabel->setOpenExternalLinks(true);
         openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E6%96%B0%E5%B9%B4/9002454?fr=aladdin>find more</a>"));
         openfilelabel->show();
    }
    else if(y == 11 && z == 23)
    {
         str = "劳动感恩节:この時、収穫期には、収穫に感謝の気持ちを表明するために、労働を感謝する目的の祭りが開かれました";
         new_win->display(x, y, z,str);
         new_win->showImages(":/new/prefix1/a/laodong.png");
         openfilelabel = new_win->get_help();
         openfilelabel->setOpenExternalLinks(true);
         openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E6%96%B0%E5%B9%B4/9002454?fr=aladdin>find more</a>"));
         openfilelabel->show();
    }
    else if(y == 12 && z == 23)
    {
         str = "天皇生日节:1933年12月23日生まれの天皇明仁";
         new_win->display(x, y, z,str);
         new_win->showImages(":/new/prefix1/a/tianhuangdansheng.png");
         openfilelabel = new_win->get_help();
         openfilelabel->setOpenExternalLinks(true);
         openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' href =https://baike.baidu.com/item/%E6%97%A5%E6%9C%AC%E6%96%B0%E5%B9%B4/9002454?fr=aladdin>find more</a>"));
         openfilelabel->show();
    }
    else
    {
         new_win->display(x, y, z);
         new_win->showImages(":/new/prefix1/a/ram.png");
         openfilelabel = new_win->get_help();
         openfilelabel->setOpenExternalLinks(true);
         openfilelabel->setText(QString::fromLocal8Bit("<style> a {text-decoration: none} </style>  <a style='color: black;' https://baike.baidu.com/item/%E9%9B%B7%E5%A7%86/19652918?fr=aladdin>find more</a>"));
         openfilelabel->show();
    }*/
    change_date();
}




void MainWindow::on_le_year_returnPressed()
{
    this->ui->le_month->setFocus();
}

void MainWindow::on_le_month_returnPressed()
{
    this->ui->le_day->setFocus();
}

void MainWindow::on_action_triggered()
{
    new_m_win = new month_search;
    new_m_win->setWindowTitle("检索");
    new_m_win->show();
}

void MainWindow::on_action_2_triggered()
{
    new_win_memo = new memo;
    new_win_memo->show();
}
