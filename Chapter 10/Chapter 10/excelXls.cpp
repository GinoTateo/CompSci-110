// Lab 10.8
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
    cout << "This program will calculate amount of bills after payment" << endl;
    cout << "Enter 0 in  entry to quit"<< endl;
    
    while (true)
    {
        
        ofstream fout;
        fout.open("change.xls", ios::app);
        if (!fout.good()) throw "I/O error";
        
        fout << "Denomination";
        fout << "count";
        fout << "\n";
        
        //input
        int cashPayment;
        int amountTendered;
        cout << "Cash payment    \n";
        cin >> cashPayment;
        //Exit
        if (cashPayment < 0)
            break;
        
        
        cout << "Amount tendered  \n";
        cin >> amountTendered;
        //Exit
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
        {
            std::cout << hundredThousands << " $100000's" << '\n';
            fout <<"100,000s";
            fout << hundredThousands;
            fout <<"\n";
        }

        if ( tenThousands>0 )
        {
            std::cout << tenThousands << " $10000's" << '\n';
            fout << "10,000's";
            fout << tenThousands;
            fout << "\n";
        }
        if (fiveThousand >0 )
        {
            std::cout << fiveThousand << " $5000's" << '\n';
            fout << "5000's";
            fout << fiveThousand;
            fout << "\n";
        }
        if (oneThousand >0 )
        {
            std::cout << oneThousand << " $1000's" << '\n';
            fout << "1000's";
            fout << oneThousand;
            fout << "\n";
        }
        if ( fiveHundred>0 )
        {
            std::cout << fiveHundred << " $500's" << '\n';
            fout << "500's";
            fout << fiveHundred;
            fout << "\n";
        }
        if ( oneHundred>0 )
        {
            std::cout << oneHundred << " $100's" <<'\n';
            fout << "100's";
            fout << oneHundred;
            fout << "\n";
        }
        if ( fifty>0 )
        {
            std::cout << fifty << " $50's" << '\n';
            fout << "50's";
            fout << fifty;
            fout << "\n";
        }
        if ( twenty>0 )
        {
            std::cout << twenty << " $20's" << '\n';
            fout << "20's";
            fout << twenty;
            fout << "\n";
        }
        if ( ten>0 )
        {
            std::cout << ten << " $10's" <<'\n';
            fout << "10's";
            fout << ten;
            fout << "\n";
        }
        if (five>0 )
        {
            std::cout << five << " $5's" << '\n';
            fout << "5's";
            fout << five;
            fout << "\n";
        }
        if ( two>0 )
        {
            std::cout << two << " $2's" << '\n';
            fout << "2's";
            fout << two;
            fout << "\n";
        }
        if ( one>0 )
        {
            std::cout << one << " $1" <<'\n';
            fout << "1's";
            fout << one;
            fout << "\n";
        }

        
    
    
    
    return 0;
    

    }
}
