// Lab 8.3
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

void getPassword()
    {
        while (true)
        {
            string password;
            cout << "Enter password: " << endl;
            getline (cin, password);
            
            if (password != "password123")
            {
                cout << "INVALID" << endl;
            }
            
            if (password == "password123")
            {
                break;
            }
            
            
        }

    }


    int main()

        {
                getPassword();

                cout << "Programmer: Gino Tateo" << endl;
                cout << "This Program utilizes a password" << endl;



                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(3);

                //input
                int loanAmount;
                float interestRate;
                int years;

                cout << "Loan amount:  \n";

                cin >> loanAmount;

                cout << "Interest rate:  \n";

                cin >> interestRate;

                cout << "Years:   \n";

                cin >> years;

                years = years*12;


                int interest2Rate=interestRate/10;

                float s= interest2Rate *(pow(1+interest2Rate, years)* loanAmount);
                float t= (pow(1+interest2Rate, years))-1;

                float x = s/t;

                float monthlyPayment = (x/years)/12;

                cout <<"loan amount: $" << loanAmount<<"\n";
                cout <<"interest rate: "<< interestRate<<"\n";
                cout << "monthly Payment: $"<< monthlyPayment<<"\n";
    
        }
