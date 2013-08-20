//#include <QCoreApplication>
#include <iostream>
#include "factorial.h"

int main()//int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);
    using namespace std;

    long long max(1);//max valid number

    for (long long n=2; ; ++n){
        long long nfact=factorial(n);
        long long m=n;
        do{
            nfact=nfact/m;
            --m;
        }while(m!=1);
        if (nfact!=1){
            max=n-1;
            break;
        }
    }
    cout<<max<<endl;

    return 0;//a.exec();
}
