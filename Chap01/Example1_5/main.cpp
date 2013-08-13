//#include <QCoreApplication>
#include <iostream>

using namespace std;

void foo(int n){
    cout << n << " is a nice int." << endl;
}

void foo(double x){
    cout << x << " is a nice double." << endl;
}

void foo(bool b){
    cout << "Always be " << (b?"true":"false") << " to your bool." << endl;
}

int main()//int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);
    foo(5);
    foo(6.7);
    foo(true);
    
    return 0;//a.exec();
}
