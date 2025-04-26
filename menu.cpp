#include "menu.h"
#include "ui_menu.h"
#include "gallery.h"
#include "board.h"

#include <QPixmap>
#include <QLabel>
#include <QGuiApplication>
#include <QScreen>

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



}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
    Gallery *g = new Gallery ;
    g ->show();
    g ->setWindowTitle("Gallery");
}


void Menu::on_pushButton_2_clicked()
{
    Board *b = new Board ;
    b ->show();
    b ->setWindowTitle("Board");
}

