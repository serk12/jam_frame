TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11
LIBS += -lsfml-graphics -lsfml-window -lsfml-system

SOURCES += \
    main.cc \
    game.cc \
    screen.cc \
    level.cc \
    player.cc

HEADERS += \
    screen.h \
    utils.h \
    game.h \
    gameobject.h \
    player.h \
    level.h \
    actor.h

