TEMPLATE      = lib
CONFIG       += dll axserver
HEADERS       = axbouncer.h \
                objectsafetyimpl.h
SOURCES       = axbouncer.cpp \
                main.cpp \
                objectsafetyimpl.cpp
RC_FILE       = qaxserver.rc
DEF_FILE      = qaxserver.def
