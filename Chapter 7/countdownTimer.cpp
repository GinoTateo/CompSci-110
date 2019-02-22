// Lab 7.2
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << "Programmer Gino Tateo"<< endl;
    cout << "This program counts down from 10"<< endl;

    for (int i = 10; i > -1; i--)
    {
        

        sleep(1000);

        sleep(1);


            cout << i;
        cout << endl;
    
    if (i == 0) cout << "Blast off!!" << endl;
        
    }
}
