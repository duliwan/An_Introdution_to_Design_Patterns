//#include <QCoreApplication>
#include <iostream>
#include "toFahrenheit.h"

int main()//int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);
    using namespace std;

    float c;
    cout<<"Input the Celsius:"<<endl;
    cin>>c;

    cout<<"The Fahrenheit of "<<c<<" is "<<toFahrenheit(c)<<"(Celsius)."<<endl;
    return 0;//a.exec();
}
