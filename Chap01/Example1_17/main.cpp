//#include <QCoreApplication>
#include <QTextStream>
#include <QString>

QTextStream cout(stdout);
QTextStream cin(stdin);
QTextStream cerr(stderr);

int main()//int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);
    const char* charstr = "This is one very long string, "
            "so I will continue it on the next line.";
    QString str = charstr;
    cout << str << endl;
    cout << "\nA\tb\\c\'d\"" << endl;

    //1.12.1 Exercises:
    cout << "GNU stands for \"GNU's Not UNIX\".\n"
            "\tTitle 1 \t\"Cat Clothing\"\n"
            "\tTitle 2 \t\"Dog Dancing\"" << endl;
    
    return 0;//a.exec();
}
