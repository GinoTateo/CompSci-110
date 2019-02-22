// Lab 8.1
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//

#include <iostream>
#include <iomanip>
using namespace std;

double calcAverage(int a, int b, int c)
{
    double result = 0.0;
    result = (a + b + c) / 3.0;
    return result;
} // calcAverage

int main()
{
    
    cout << "Programmer: Gino Tateo" << endl;
    cout << "This program calculates the average of three number" << endl;
    
    int w;
    int x;
    int y;
   
    //1
    cout << "Enter the first whole number: " << endl;
    cin >> w;
    //2
    cout << "Enter the second whole number: " << endl;
    cin >> x;
    //3
    cout << "Enter the third whole number: " << endl;
    cin >> y;

    double z = calcAverage(w,x,y);
    
    cout << fixed << setprecision(2);
    
    cout << "The average is " << z << endl;
} // main
