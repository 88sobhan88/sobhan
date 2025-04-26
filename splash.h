#ifndef SPLASH_H
#define SPLASH_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class splash;
}
QT_END_NAMESPACE

class splash : public QMainWindow
{
    Q_OBJECT

public:
    splash(QWidget *parent = nullptr);
    ~splash();

private slots :
    void on_pushButton_clicked();

private:
    Ui::splash *ui;
};
#endif // SPLASH_H
