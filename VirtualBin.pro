TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    virtualmemory.cpp \
    virtualcore.cpp \
    instructionparser.cpp \
    instruction.cpp

HEADERS += \
    virtualmemory.h \
    virtualcore.h \
    instructionparser.h \
    instruction.h
