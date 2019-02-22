// Lab 10.1
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Programmer: Gino Tateo" << endl;
    cout << "This program will calculate amount of bills after payment" << endl;
    cout << "Enter 0 in  entry to quit"<< endl;
    
    while (true)
    {
        
        //file grab
        
        ifstream fin;
        string fileName = "change.txt";
        fin.open(fileName.c_str());
        if (!fin.good()) throw "I/O error";
     
    
            //input from .txt
        
                if (!fin.good()) break;
                double cashPayment;
                fin >> cashPayment;

                
            fin.ignore(10000,10);

                double amountTendered;
                fin >> amountTendered;

                
                fin.close();
                
           
        
        // input
        
        // int cashPayment;
        // int amountTendered;
        // cout << "Cash payment    \n";
        // cin >> cashPayment;
        // cout << "Amount tendered  \n";
        // cin >> amountTendered;
        
        
        
        //Exit
        
        if (cashPayment < 0)
            break;
        
        if (amountTendered < 0)
            break;
        
        
        int changeDue = amountTendered - cashPayment;
        std::cout << "Cash payment amount: " << cashPayment << std::endl;
        std::cout << "Tendered amount: " << amountTendered << std::endl;
        std::cout << "Change due: " << changeDue << std::endl;
            
        
        //Calc.
        int hundredThousands = changeDue / 100000;
        changeDue = changeDue % 100000;
        int tenThousands = changeDue / 10000;
        changeDue = changeDue % 10000;
        
        int fiveThousand = changeDue / 5000;
        changeDue = changeDue % 5000;
        
        int oneThousand = changeDue / 1000;
        changeDue = changeDue % 1000;
        
        int fiveHundred = changeDue / 500;
        changeDue = changeDue % 500;
        
        int oneHundred = changeDue / 100;
        changeDue = changeDue % 100;
        
        int fifty = changeDue / 50;
        changeDue = changeDue % 50;
        
        int twenty = changeDue / 20;
        changeDue = changeDue % 20;
        
        int ten = changeDue / 10;
        changeDue = changeDue % 10;
        
        int five = changeDue / 5;
        changeDue = changeDue % 5;
        
        int two = changeDue / 2;
        changeDue = changeDue % 2;
        
        int one = changeDue / 1;
        changeDue = changeDue % 1;
        
        
        //output
        
        if (hundredThousands >0 )
            std::cout << hundredThousands << " $100000's" << '\n';
        
        if ( tenThousands>0 )
            std::cout << tenThousands << " $10000's" << '\n';
        
        if (fiveThousand >0 )
            std::cout << fiveThousand << " $5000's" << '\n';
        
        if (oneThousand >0 )
            std::cout << oneThousand << " $1000's" << '\n';
        
        if ( fiveHundred>0 )
            std::cout << fiveHundred << " $500's" << '\n';
        
        if ( oneHundred>0 )
            std::cout << oneHundred << " $100's" <<'\n';
        
        if ( fifty>0 )
            std::cout << fifty << " $50's" << '\n';
        
        if ( twenty>0 )
            std::cout << twenty << " $20's" << '\n';
        
        if ( ten>0 )
            std::cout << ten << " $10's" <<'\n';
        
        if (five>0 )
            std::cout << five << " $5's" << '\n';
        
        if ( two>0 )
            std::cout << two << " $2's" << '\n';
        
        if ( one>0 )
            std::cout << one << " $1" <<'\n';
        
        break;
            
    }
    
   
    
    return 0;
    
}
