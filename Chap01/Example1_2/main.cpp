//#include <QCoreApplication>
#include <iostream>
#include <string>

int main()//int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);

    using namespace std;
    int THISYEAR=2013;
    int BIRTHYEAR;
    string NAME;

    cout<<"What's your name?"<<flush;
    cin>>NAME;

    cout<<"What year were you born?"<<flush;
    cin>>BIRTHYEAR;

    cout<<"Your name is "<<NAME<<","<<endl
       <<"and you are approximately "
         <<(THISYEAR-BIRTHYEAR)
        <<" years old."<<endl;
    return 0;//a.exec();
}
