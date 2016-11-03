#include "drawer.h"
#include <QGroupBox>
#include <QVBoxLayout>
#include <QPixmap>
Drawer::Drawer(QWidget *parent,Qt::WindowFlags f)
    :QToolBox(parent,f)
{
    setWindowTitle("Myself QQ");
    setWindowIcon(QIcon(":/image/qq.png"));

    toolBtn1 = new QToolButton;
    toolBtn1->setText("叶良辰");
    toolBtn1->setIcon(QIcon(":/image/1.png"));
    toolBtn1->setIconSize(QSize(50,50));
    toolBtn1->setAutoRaise(true);
    toolBtn1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn2 = new QToolButton;
    toolBtn2->setText("赵日天");
    toolBtn2->setIcon(QIcon(":/image/2.png"));
    toolBtn2->setIconSize(QSize(50,50));
    toolBtn2->setAutoRaise(true);
    toolBtn2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn3 = new QToolButton;
    toolBtn3->setText("崔大队");
    toolBtn3->setIcon(QIcon(":/image/3.png"));
    toolBtn3->setIconSize(QSize(50,50));
    toolBtn3->setAutoRaise(true);
    toolBtn3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn4 = new QToolButton;
    toolBtn4->setText("马云");
    toolBtn4->setIcon(QIcon(":/image/4.png"));
    toolBtn4->setIconSize(QSize(50,50));
    toolBtn4->setAutoRaise(true);
    toolBtn4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn5 = new QToolButton;
    toolBtn5->setText("阿里");
    toolBtn5->setIcon(QIcon(":/image/5.png"));
    toolBtn5->setIconSize(QSize(50,50));
    toolBtn5->setAutoRaise(true);
    toolBtn5->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn6 = new QToolButton;
    toolBtn6->setText("胡潇菲");
    toolBtn6->setIcon(QIcon(":/image/6.png"));
    toolBtn6->setIconSize(QSize(50,50));
    toolBtn6->setAutoRaise(true);
    toolBtn6->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn7 = new QToolButton;
    toolBtn7->setText("刘二狗");
    toolBtn7->setIcon(QIcon(":/image/7.png"));
    toolBtn7->setIconSize(QSize(50,50));
    toolBtn7->setAutoRaise(true);
    toolBtn7->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn8 = new QToolButton;
    toolBtn8->setText("陈赦");
    toolBtn8->setIcon(QIcon(":/image/8.png"));
    toolBtn8->setIconSize(QSize(50,50));
    toolBtn8->setAutoRaise(true);
    toolBtn8->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn9 = new QToolButton;
    toolBtn9->setText("阿卡丽");
    toolBtn9->setIcon(QIcon(":/image/9.png"));
    toolBtn9->setIconSize(QSize(50,50));
    toolBtn9->setAutoRaise(true);
    toolBtn9->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    connect(toolBtn1,SIGNAL(clicked()),this,SLOT(showChatWidget1()));
    connect(toolBtn2,SIGNAL(clicked()),this,SLOT(showChatWidget2()));
    connect(toolBtn3,SIGNAL(clicked()),this,SLOT(showChatWidget3()));
    connect(toolBtn4,SIGNAL(clicked()),this,SLOT(showChatWidget4()));
    connect(toolBtn5,SIGNAL(clicked()),this,SLOT(showChatWidget5()));
    connect(toolBtn6,SIGNAL(clicked()),this,SLOT(showChatWidget6()));
    connect(toolBtn7,SIGNAL(clicked()),this,SLOT(showChatWidget7()));
    connect(toolBtn8,SIGNAL(clicked()),this,SLOT(showChatWidget8()));
    connect(toolBtn9,SIGNAL(clicked()),this,SLOT(showChatWidget9()));

    QGroupBox *groupBox = new QGroupBox;
    QVBoxLayout *layout = new QVBoxLayout(groupBox);
    layout->setMargin(10);
    layout->setAlignment(Qt::AlignLeft);
    layout->addWidget(toolBtn1);
    layout->addWidget(toolBtn2);
    layout->addWidget(toolBtn3);
    layout->addWidget(toolBtn4);
    layout->addWidget(toolBtn5);
    layout->addWidget(toolBtn6);
    layout->addWidget(toolBtn7);
    layout->addWidget(toolBtn8);
    layout->addWidget(toolBtn9);

    this->addItem((QWidget *)groupBox,"请单击以下其中一个成员进行登录");
}

void Drawer::showChatWidget1()
{
    chatWidget1 = new Widget(0,toolBtn1->text());
    chatWidget1->setWindowTitle(toolBtn1->text());
    chatWidget1->setWindowIcon(toolBtn1->icon());
    chatWidget1->show();
}

void Drawer::showChatWidget2()
{
    chatWidget2 = new Widget(0,toolBtn2->text());
    chatWidget2->setWindowTitle(toolBtn2->text());
    chatWidget2->setWindowIcon(toolBtn2->icon());
    chatWidget2->show();
}

void Drawer::showChatWidget3()
{
    chatWidget3 = new Widget(0,toolBtn3->text());
    chatWidget3->setWindowTitle(toolBtn3->text());
    chatWidget3->setWindowIcon(toolBtn3->icon());
    chatWidget3->show();
}

void Drawer::showChatWidget4()
{
    chatWidget4 = new Widget(0,toolBtn4->text());
    chatWidget4->setWindowTitle(toolBtn4->text());
    chatWidget4->setWindowIcon(toolBtn4->icon());
    chatWidget4->show();
}

void Drawer::showChatWidget5()
{
    chatWidget5 = new Widget(0,toolBtn5->text());
    chatWidget5->setWindowTitle(toolBtn5->text());
    chatWidget5->setWindowIcon(toolBtn5->icon());
    chatWidget5->show();
}

void Drawer::showChatWidget6()
{
    chatWidget6 = new Widget(0,toolBtn6->text());
    chatWidget6->setWindowTitle(toolBtn6->text());
    chatWidget6->setWindowIcon(toolBtn6->icon());
    chatWidget6->show();
}

void Drawer::showChatWidget7()
{
    chatWidget7 = new Widget(0,toolBtn7->text());
    chatWidget7->setWindowTitle(toolBtn7->text());
    chatWidget7->setWindowIcon(toolBtn7->icon());
    chatWidget7->show();
}

void Drawer::showChatWidget8()
{
    chatWidget8 = new Widget(0,toolBtn8->text());
    chatWidget8->setWindowTitle(toolBtn8->text());
    chatWidget8->setWindowIcon(toolBtn8->icon());
    chatWidget8->show();
}

void Drawer::showChatWidget9()
{
    chatWidget9 = new Widget(0,toolBtn9->text());
    chatWidget9->setWindowTitle(toolBtn9->text());
    chatWidget9->setWindowIcon(toolBtn9->icon());
    chatWidget9->show();
}

