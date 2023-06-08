QT      += core gui
QT +=sql  core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cov_control.cpp \
    coverage.cpp \
    data.cpp \
    database.cpp \
    dshpfile.cpp \
    fcircle.cpp \
    figure.cpp \
    filedata.cpp \
    fline.cpp \
    fpoint.cpp \
    fpolygon.cpp \
    fpolyline.cpp \
    frectangle.cpp \
    ftext.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    constType.h \
    cov_control.h \
    coverage.h \
    data.h \
    database.h \
    dshpfile.h \
    fcircle.h \
    figure.h \
    filedata.h \
    fline.h \
    fpoint.h \
    fpolygon.h \
    fpolyline.h \
    frectangle.h \
    ftext.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
