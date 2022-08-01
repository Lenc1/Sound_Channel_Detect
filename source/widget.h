#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_Button1_clicked();

    void on_offButton_clicked();

    void on_Button2_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
