#include "Menu.h"
#include "ui_Menu.h"
#include "Gallery.h"
#include "Board.h"
#include <QPixmap>
#include <QLabel>
#include <QGuiApplication>
#include <QScreen>
#include <QFile>
#include <QTextStream>

Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    QRect screenGeometry = QGuiApplication::primaryScreen()->geometry();
    int width = screenGeometry.width();
    int height = screenGeometry.height();

    // Create QLabel
    QLabel *label = new QLabel(this);
    label->setGeometry(0, 0, width, height);

    QPixmap pixmap(":/new/prefix1/3nd.png");
    label->setPixmap(pixmap.scaled(label->size(), Qt::KeepAspectRatioByExpanding));
    label->setScaledContents(true);
    label->lower();

    this->showMaximized();

    connect(ui->lineEdit_1, &QLineEdit::editingFinished, this, &Menu::on_lineEdit_1_editingFinished);
    connect(ui->lineEdit_2, &QLineEdit::editingFinished, this, &Menu::on_lineEdit_2_editingFinished);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
    Gallery *g = new Gallery(this);
    g->show();
    g->setWindowTitle("Gallery");
}

void Menu::on_pushButton_2_clicked()
{
    Board *b = new Board(this);
    b->show();
    b->setWindowTitle("Board");

}

void Menu::on_lineEdit_1_editingFinished()
{
    player1 = ui->lineEdit_1->text();

    if (!player1.isEmpty()) {
        QFile file("username.txt");
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            out << player1 << "\n";
            file.close();
        }
    }
}

void Menu::on_lineEdit_2_editingFinished()
{
    player2 = ui->lineEdit_2->text();

    if (!player2.isEmpty()) {
        QFile file("username.txt");
        if (file.open(QIODevice::Append | QIODevice::Text)) {
            QTextStream out(&file);
            out << player2 << "\n" ;
            file.close();
        }
    }
}
