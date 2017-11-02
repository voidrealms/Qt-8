// QT Tutorial
// http://www.voidrealms.com
// https://www.youtube.com/watch?v=6KtOzh0StTc&list=PL7C604D492F9E0E0B

// Note: for Qt5, you need to add in the *.pro file
//          QT += widgets
//       right-click on the project folder and select "Run qmake"
//          after any changes

#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    window->setWindowTitle("My App");

    QPushButton *button1 = new QPushButton("one");
    QPushButton *button2 = new QPushButton("two");
    QPushButton *button3 = new QPushButton("three");

    // HORIZONTAL:
    //QHBoxLayout *hlayout = new QHBoxLayout;
    //hlayout->addWidget(button1);
    //hlayout->addWidget(button2);
    //hlayout->addWidget(button3);
    //window->setLayout(hlayout);

    // VERTICAL:
    QVBoxLayout *vlayout = new QVBoxLayout;
    vlayout->addWidget(button1);
    vlayout->addWidget(button2);
    vlayout->addWidget(button3);
    window->setLayout(vlayout);

    window->show();
    return app.exec();
}
