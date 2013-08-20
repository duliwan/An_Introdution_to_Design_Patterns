//#include <QCoreApplication>
#include <iostream>
#include "toCelsius.h"

int main()//int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);
    using namespace std;
    float f(0);
    cout<<"Input the Fahrenheit:"<<endl;
    cin>>f;

    cout<<"The Celsius of "<<f<<" is "<<toCelsius(f)<<"(Fahrenheit)."<<endl;
    
    return 0;//a.exec();
}
