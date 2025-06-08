#include "Splash.h"
#include "ui_Splash.h"
#include "Menu.h"
#include <QScreen>


splash::splash(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::splash)
{
    ui->setupUi(this);

     QRect screenGeometry = QGuiApplication::primaryScreen()->geometry();
     int width = screenGeometry.width();
     int height = screenGeometry.height();


     QLabel *label = new QLabel(this);
     label->setGeometry(0, 0, width, height);

     QPixmap pixmap(":/new/prefix1/1st.jpg");
     label->setPixmap(pixmap.scaled(label->size(), Qt::KeepAspectRatioByExpanding));
     label->setScaledContents(true);
     label->lower();
     this->showMaximized();



}

splash::~splash()
{
    delete ui;
}

void splash::on_pushButton_clicked()
{
    Menu *m = new Menu ;
    m ->show();
    m ->setWindowTitle("Menu");
}

