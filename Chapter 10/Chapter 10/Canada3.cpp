// Lab 10.3
// Programmer: Gino Tateo
// Editor(s) used: xcode
// Compiler(s) used: xcode
//

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    cout << "Programmer: Gino Tateo"<< endl;
    cout << "This program will conver celsius to fahrenheit"<< endl;
    
 
        ifstream fin;
        
        cout.setf(ios::fixed|ios::showpoint);
        cout << setprecision(2);
    
        double celsius;
        fin.open("temps.txt"); 
    
        while (true)
            {
                if (!fin.good()) break;
                    fin >> celsius;
                    fin.ignore(1000,10);
        

                double  temperaturef = (9/5)* celsius +32;
        
                cout << celsius << " degrees celsius converts to " << temperaturef << " degrees fahrenheit" << endl;
        
     
                
            }
    
    
    
}
