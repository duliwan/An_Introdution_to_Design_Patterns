#include "mainwindow.h"
#include <QApplication>
#include <QTextStream>
#include <QInputDialog>
#include <QString>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QTextStream cout(stdout);

    //declarations of variables
    int answer = 0;

    do {
        //local variables to the loop
        int factArg = 0;
        int fact(1);
        bool ok;
        factArg = QInputDialog::getInt(0, "Factorial Calculator", "Factorial of: ", 1, 0, 2147483647, 1, &ok, 0);
        if (ok) {
            cout << "User entered: " << factArg << endl;
            int i = 2;
            while (i <= factArg) {
                fact = fact * i;
                ++i;
            }
            QString response = QString("The factorial of %1 is %2.\n%3").arg(factArg).arg(fact).arg("Do you want to compute another factorial?");
            answer = QMessageBox::question(0, "Play again?", response, QMessageBox::Yes | QMessageBox::No);
        }
    } while (answer == QMessageBox::Yes);
    
    return EXIT_SUCCESS;//a.exec();
}
