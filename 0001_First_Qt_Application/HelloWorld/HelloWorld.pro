# Add libraries
QT += widgets core gui

# Specify that we want to create a widgets application with version 6 of Qt
greaterThan(QT_MAJOR_VERSION, 6) : QT += widgets

# Inform qmake about additional sources
SOURCES += \
    main.cpp
