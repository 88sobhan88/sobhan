#ifndef MENU_H
#define MENU_H

#include <QMainWindow>

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void on_lineEdit_1_editingFinished();
    void on_lineEdit_2_editingFinished();

private:
    Ui::Menu *ui;
    QString player1 ;
    QString player2 ;
};

#endif // MENU_H
