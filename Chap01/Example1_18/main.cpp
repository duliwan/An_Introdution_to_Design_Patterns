//#include <QCoreApplication>
#include <QTextStream>
#include <QChar>
#include <QString>
#include <QDate>

int main()//int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);
    QTextStream cout(stdout);
    char array1[34] = "This is a dreaded C array of char";
    char array2[] = "if not for main, we could avoid it entirely.";
    char* charp = array1;
    QString qstring = "This is an unicode QString. Much preferred.";
//    Q_ASSERT(sizeof(i) == sizeof(int));// <QtGlobal>
    cout << " c type sizes: \n";
    cout << "sizeof(char) = " << sizeof(char) << "\n";
    cout << "sizeof(wchar_t) = " << sizeof(wchar_t) << "\n";
    cout << "sizeof(int) = " << sizeof(int) << "\n";
    cout << "sizeof(long) = " << sizeof(long) << "\n";
    cout << "sizeof(float) = " << sizeof(float) << "\n";
    cout << "sizeof(double) = " << sizeof(double) << "\n";
    cout << "sizeof(double*) = " << sizeof(double*) << "\n";
    cout << "sizeof(array1) = " << sizeof(array1) << "\n";
    cout << "sizeof(array2) = " << sizeof(array2) << "\n";
    cout << "sizeof(char*) = " << sizeof(char*) << "\n";
    cout << "sizeof(charp) = " << sizeof(charp) << "\n";
    cout << " qt type sizes:\n";
    cout << "sizeof(QString) = " << sizeof(QString) << "\n";
    cout << "sizeof(qint32) = " << sizeof(qint32) << "\n";
    cout << "sizeof(qint64) = " << sizeof(qint64) << "\n";
    cout << "sizeof(QChar) = " << sizeof(QChar) << "\n";
    cout << "sizeof(QDate) = " << sizeof(QDate) << "\n";
    cout << "qstring.length() = " << qstring.length() << "\n";
    
    return 0;//a.exec();
}
