// Lab 10.4
// Programmer: Gino Tateo
// Editor(s) used: xcode
// Compiler(s) used: xcode
//

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
                cout << "Programmer: Gino Tateo" << endl;
                cout << "This program claculates a distance you can see the a lighthouse." << endl << endl;
    

        //input
    
        ifstream fin;
        fin.open("lighthouse.txt"); 
    
    while (true)
    {
            float height;
       
                fin >> height;
                fin.ignore(1000,10);
        
            float x;
        
                x = sqrt((double)height*.8);
        
                    cout<< "The " << height << " foot light house can be seen from ";
    
                    cout.setf(ios::fixed);
                    cout.precision(0);
    
                //output
    
                    cout << x << " miles away.\n" << endl;
        
            if (!fin.good()) break;
        
    }
    
}
