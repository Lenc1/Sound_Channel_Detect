#include "widget.h"
#include "ui_widget.h"
#include <QMediaPlayer>
#include <QSound>
#include <QSoundEffect>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("声道检测");
    setAttribute(Qt::WA_TranslucentBackground);
    setWindowFlags(Qt::FramelessWindowHint);
}
Widget::~Widget()
{
    delete ui;
}
void Widget::on_Button1_clicked()
{
   QSound::play(":/images/left.wav");
}
void Widget::on_offButton_clicked()
{
    QApplication::exit();
}

void Widget::on_pushButton_clicked()
{
}
void Widget::on_Button2_clicked()
{
    QSound::play(":/images/right.wav");
}
