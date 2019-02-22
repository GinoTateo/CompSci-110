//  9.5
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    double x;
    double y;
    double z;
    double A;
    
    for (x=0; x != 1;)
    {
        x= x + 500;
     
   
    
    
    y = 1000/x;
    z = 1000000/x;
    A = 1000000000/x;
    
        cout << setprecision (0) << fixed;

    cout << "In " << y << " weeks, I will be a thousandaire! \n";
    cout << "In " << z << " weeks, I will be a millionaire! \n";
    cout << "In " << A << " weeks, I will be a billionaire! \n";

        
        if (A==0)
        {
            break;
        }
    }
}
