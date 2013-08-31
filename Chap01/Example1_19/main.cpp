//#include <QCoreApplication>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);

    cout << "argc = " << argc << endl;
    for (int i=0; i<argc ; ++i){
        cout << "argv# " << i << " is " << argv[i] << endl;
    }
    int num = atoi(argv[argc-1]);
    cout << num*2 << endl;
    
    return 0;//a.exec();
}
