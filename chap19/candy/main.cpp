#include <QtWidgets>

#include "candydialog.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QApplication::setStyle(new QProxyStyle);

    QFile file(":/qss/candy.qss");
    file.open(QFile::ReadOnly);
    app.setStyleSheet(file.readAll());

    CandyDialog dialog;
    dialog.show();

    return app.exec();
}
