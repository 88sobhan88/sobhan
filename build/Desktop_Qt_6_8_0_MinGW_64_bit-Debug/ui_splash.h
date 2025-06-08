/********************************************************************************
** Form generated from reading UI file 'Splash.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASH_H
#define UI_SPLASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_splash
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *splash)
    {
        if (splash->objectName().isEmpty())
            splash->setObjectName("splash");
        splash->resize(1278, 764);
        centralwidget = new QWidget(splash);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(710, 410, 101, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(13);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 191, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Snap ITC")});
        font1.setPointSize(20);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        splash->setCentralWidget(centralwidget);
        menubar = new QMenuBar(splash);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1278, 26));
        splash->setMenuBar(menubar);
        statusbar = new QStatusBar(splash);
        statusbar->setObjectName("statusbar");
        splash->setStatusBar(statusbar);

        retranslateUi(splash);
        QObject::connect(pushButton, &QPushButton::clicked, splash, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(splash);
    } // setupUi

    void retranslateUi(QMainWindow *splash)
    {
        splash->setWindowTitle(QCoreApplication::translate("splash", "splash", nullptr));
        pushButton->setText(QCoreApplication::translate("splash", "Play", nullptr));
        label_2->setText(QCoreApplication::translate("splash", "Welcome", nullptr));
    } // retranslateUi

};

namespace Ui {
    class splash: public Ui_splash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASH_H
