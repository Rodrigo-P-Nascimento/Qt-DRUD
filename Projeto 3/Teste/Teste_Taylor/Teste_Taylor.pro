QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    atualizar.cpp \
    cadastro.cpp \
    main.cpp \
    mainwindow.cpp \
    produtos.cpp \
    relatorio_de_fornecedores.cpp \
    relatorio_de_produtos.cpp

HEADERS += \
    atualizar.h \
    cadastro.h \
    mainwindow.h \
    produtos.h \
    relatorio_de_fornecedores.h \
    relatorio_de_produtos.h

FORMS += \
    atualizar.ui \
    cadastro.ui \
    mainwindow.ui \
    relatorio_de_fornecedores.ui \
    relatorio_de_produtos.ui

TRANSLATIONS += \
    Teste_Taylor_pt_BR.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Arquivos_de_Recursos.qrc
