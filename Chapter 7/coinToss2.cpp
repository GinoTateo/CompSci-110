// Lab 7.4
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//
#include <iostream>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif 
using namespace std;

int main()
{
    cout << "Programmer: Gino Tateo" << endl;
    cout << "This program flips a coin" << endl;
    
    cout << "How many times would you like to flip?" << endl;
    int i = 0;
    int in;
    cin >> in;
    
    while  (i != in)
    {
        i++;
        
        #ifdef _win32
        sleep(1000);
        #else
        sleep(1);
        #endif
        
    int flip = rand()%2;
        
        if (flip == 0)
            cout << "Heads" << endl;
        if (flip == 1)
            cout << "Tails" << endl;
    
    
    
}
}
