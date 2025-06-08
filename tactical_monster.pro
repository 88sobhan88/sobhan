QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Agent.cpp \
    Board.cpp \
    Gallery.cpp \
    Hex.cpp \
    HexBoard.cpp \
    Menu.cpp \
    Splash.cpp \
    main.cpp

HEADERS += \
    Agent.h \
    Board.h \
    Gallery.h \
    Hex.h \
    HexBoard.h \
    Menu.h \
    Splash.h

FORMS += \
    Gallery.ui \
    Menu.ui \
    Splash.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    1st_image.qrc \
    2nd_image.qrc \
    3nd_image.qrc \
    4th_image.qrc \
    5th_image.qrc \
    board.qrc \
    pic.qrc
