#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();

    // if button clicked, then add a counter
    int counter = 0;
    QObject::connect(&button, &QPushButton::clicked, [&button, &counter]() {
        counter++;
        button.setText(QString("Clicked %1 times").arg(counter));
        qDebug() << "Button clicked" << counter << "times";
    });

    return QApplication::exec();
}
