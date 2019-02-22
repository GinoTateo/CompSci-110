// Lab 10.2
// Programmer: Gino Tateo
// Editor(s) used: xcode
// Compiler(s) used: xcode
//

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include <cmath>

int main()
{
    // identifying output statements
    cout << "Programmer: Gino Tateo" << endl;
    cout << "Description: Calculates the savings" << endl << endl;
    
    
    // input values

        ifstream fin;
        fin.open("savings.txt");
        
    
            double years;
            double deposit;
            double rate;
    
            string lineFromFile;
            
            fin >> years;
            fin >> deposit;
            fin >> rate;
            
        fin.close();
    

 
    
    rate=rate/100;
    // output (calculated) values
    double p = rate / 12; // annual interest rate
    double T = years * 12;
    double S = deposit * ((pow(1 + p, T) - 1) / p);
    
    // echoing input values, unformatted
    cout << "In " << years << " years, $";
    cout << deposit << " deposited per month will grow to $";
    
    // formatting output (see 4.2)
    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2);
    cout << S << "." << endl;
            
                // while
    
}
