#ifndef HOMESCREEN_H
#define HOMESCREEN_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class HomeScreen; }
QT_END_NAMESPACE

class HomeScreen : public QWidget
{
    Q_OBJECT

public:
    HomeScreen(QWidget *parent = nullptr);
    ~HomeScreen();

private:
    Ui::HomeScreen *ui;
};
#endif // HOMESCREEN_H
