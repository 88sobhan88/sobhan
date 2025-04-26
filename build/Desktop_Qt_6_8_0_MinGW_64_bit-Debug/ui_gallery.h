/********************************************************************************
** Form generated from reading UI file 'gallery.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GALLERY_H
#define UI_GALLERY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gallery
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Gallery)
    {
        if (Gallery->objectName().isEmpty())
            Gallery->setObjectName("Gallery");
        Gallery->resize(1278, 764);
        Gallery->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Gallery);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 121, 41));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoPrevious));
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(30, 30));
        Gallery->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Gallery);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1278, 26));
        Gallery->setMenuBar(menubar);
        statusbar = new QStatusBar(Gallery);
        statusbar->setObjectName("statusbar");
        Gallery->setStatusBar(statusbar);

        retranslateUi(Gallery);
        QObject::connect(pushButton, &QPushButton::clicked, Gallery, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(Gallery);
    } // setupUi

    void retranslateUi(QMainWindow *Gallery)
    {
        Gallery->setWindowTitle(QCoreApplication::translate("Gallery", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Gallery", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gallery: public Ui_Gallery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GALLERY_H
