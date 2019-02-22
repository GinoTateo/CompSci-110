// Lab 15.2
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <deque>

using namespace std;

int fibonacciIndex(int n)
{
    int f;
    if(n < 2)
        f = n;
    
    else f = fibonacciIndex(n-1) + fibonacciIndex(n-2);
    
    return f;
}

int main()
{
    cout << "Programmer: Gino Tateo" << endl;
    cout << "This programs prints the Fibonnaci number series of a provided index." << endl << endl;
    
    
    int n;
    
    cout << "Enter an index [0 or greater]: ";
    cin >> n;
    cin.ignore(1000,10);
    
    cout << endl << "The Fibonnaci number at index " << n << " is " << fibonacciIndex(n) << endl;
}
