//#include <QCoreApplication>
#include <QString>
#include <QTextStream>

QTextStream cout(stdout);// mark
QTextStream cin(stdin);// mark

int main()//int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);

    QString s1("This "), s2("is a "), s3("string.");
    s1+=s2;
    QString s4=s1+s3;
    cout<<s4<<endl;
    cout<<"The length of that string is "<<s4.length()<<endl;
    cout<<"Enter a sentence with whitespaces: "<<endl;
    s2=cin.readLine();// mark
    cout<<"Here is your sentence: \n"<<s2<<endl;
    cout<<"The length of your sentence is: "<<s2.length()<<endl;
    
    return 0;//a.exec();
}
