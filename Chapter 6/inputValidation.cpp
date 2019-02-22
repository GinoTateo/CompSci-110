// Lab 6.2
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//

#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

int main()
{
    cout << "This program will prompt a password and then show my savings" << endl;
    
    while (true)
    {
    string password;
    cout << "Enter password..." << endl;
    getline (cin, password);

    if (password != "Gino123")
        cout << "incorrect password" << endl;
        
    if (password == "Gino123")
    {cout << "success" << endl;
        
    // input values
    int years = 14;
    int D = 250;
    
    // output (calculated) values
    double p = 0.085 / 12; // 7.5% annual interest rate
    double T = years * 12;
    double S = D * ((pow(1 + p, T) - 1) / p);
    
    // echoing input values, unformatted
    cout << "In " << years << " years, $";
    cout << D << " deposited per month will grow to $";
    
    // formatting output (see 4.2)
    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2);
    cout << S << "." << endl;
        
        return 0;
 
    }
}
}
