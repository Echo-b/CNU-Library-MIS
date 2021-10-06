QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addbook.cpp \
    adduser.cpp \
    adiminster.cpp \
    main.cpp \
    mainwindow.cpp \
    search.cpp \
    searchbook.cpp \
    user.cpp \
    qcustomplot.cpp \
    paint.cpp \
    adminchangepassword.cpp \
    userchangepassword.cpp

HEADERS += \
    Person.h \
    ReadOnlyDelegate.h \
    Student.h \
    Teacher.h \
    UserPerson.h \
    UserTable.h \
    accountPasswordClass.h \
    addbook.h \
    adduser.h \
    adiminster.h \
    book.h \
    mainwindow.h \
    search.h \
    searchbook.h \
    user.h \
    qcustomplot.h \
    paint.h \
    adminchangepassword.h \
    AdiminsterePerson.h \
    userchangepassword.h

FORMS += \
    addbook.ui \
    adduser.ui \
    adiminster.ui \
    mainwindow.ui \
    search.ui \
    searchbook.ui \
    user.ui \
    adminchangepassword.ui \
    userchangepassword.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES +=
