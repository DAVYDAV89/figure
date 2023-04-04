UI_DIR =.ui
MOC_DIR = .moc
OBJECTS_DIR = .obj

TARGET = drawFigure


TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        drawFigure.cpp \
        rectangle.cpp \
        triangle.cpp \
        circle.cpp \

HEADERS += \
    figure.h \
    drawFigure.h \
    rectangle.h \
    triangle.h \
    circle.h \
