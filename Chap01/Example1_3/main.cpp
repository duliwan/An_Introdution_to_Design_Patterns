//#include <QCoreApplication>
#include <iostream>
#include "factorial.h"

int main()//int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);
    using namespace std;

    long n(0);
    cout<<"Input factorial n:"<<endl;
    cin>>n;

    for(n=2; ;++n){
    if(n>=0){
        long nfact=factorial(n);
        if (nfact<0){
            cerr<<"Overflow error:"
               <<n<<" is too big."<<endl;
            break;
        }
        else{
            cout<<"The factorial of "<<n<<" is "<<nfact<<endl;
        }
    }
    else{
        cerr << "Undefined:"
             << "factorial of a negative number: " << n << endl;
    }
    }
    return 0;//a.exec();
}
