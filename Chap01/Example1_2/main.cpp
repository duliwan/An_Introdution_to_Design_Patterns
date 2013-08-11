//#include <QCoreApplication>
#include <iostream>
#include <string>

int main()//int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);

    using namespace std;
    const int THISYEAR=2013;
    int BIRTHYEAR;
    string yourName;

    cout<<"What's your name?"<<flush;
    cin>>yourName;

    cout<<"What year were you born?"<<flush;
    cin>>BIRTHYEAR;

//    cout<<"Your name is "<<yourName<<","<<endl
//       <<"and you are approximately "
//         <<(THISYEAR-BIRTHYEAR)
//        <<" years old."<<endl;
    cout << "Your name is " << yourName
         << " and you are approximately "
         << (THISYEAR-BIRTHYEAR)
         << " years old. " << endl;
    return 0;//a.exec();
}
