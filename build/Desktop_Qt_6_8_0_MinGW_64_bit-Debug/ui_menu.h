/********************************************************************************
** Form generated from reading UI file 'Menu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit_1;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLabel *label_1;
    QLabel *label_2;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(1278, 764);
        Menu->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 320, 151, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Wide Latin")});
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        lineEdit_1 = new QLineEdit(centralwidget);
        lineEdit_1->setObjectName("lineEdit_1");
        lineEdit_1->setGeometry(QRect(30, 250, 251, 51));
        QFont font1;
        font1.setPointSize(18);
        lineEdit_1->setFont(font1);
        lineEdit_1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"color: rgb(255, 0, 0);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1140, 690, 391, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Wide Latin")});
        font2.setPointSize(10);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(1000, 250, 251, 51));
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"color: rgb(255, 0, 0);"));
        label_1 = new QLabel(centralwidget);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(30, 200, 251, 51));
        QFont font3;
        font3.setPointSize(20);
        label_1->setFont(font3);
        label_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(1000, 200, 251, 51));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Menu->setCentralWidget(centralwidget);

        retranslateUi(Menu);
        QObject::connect(pushButton_2, &QPushButton::clicked, Menu, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Menu", "Gallery", nullptr));
        lineEdit_1->setText(QString());
        lineEdit_1->setPlaceholderText(QCoreApplication::translate("Menu", "Enter your name", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Menu", "Start an Async PVP Game", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Menu", "Enter your name", nullptr));
        label_1->setText(QCoreApplication::translate("Menu", "Player 1", nullptr));
        label_2->setText(QCoreApplication::translate("Menu", "Player 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
