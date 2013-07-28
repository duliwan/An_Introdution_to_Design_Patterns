/*Computes and prints n! for a given n.
  Uses several basic elements of C++.*/

//#include <QCoreApplication>
#include <iostream>

int main()//int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);

    using namespace std;

    //Declarations of variables
    int factArg=0;
    int fact(1);
    do {
        cout<<"Factorial of :";
        cin>>factArg;
        if(factArg<0){
            cout<<"No negative values, please!"<<endl;
        }
    }while(factArg<0);

    int i=2;
    while(i<=factArg){
        fact=fact*i;
        i=i+1;
    }
    cout<<"The factorial of "<<factArg<<" is: "<<fact<<endl;

    return 0;//a.exec();
}
