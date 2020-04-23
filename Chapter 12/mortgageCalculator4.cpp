// Lab 12.1
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

struct Mortgage{
    int moneyBorrowed;
    double annualInterestRate;
    double monthsforPayback;
    double monthlyPayment;
};


int main()
{
    cout << "Programmer: Gino Tateo" << endl;
    cout << "This Program utilizes a password 3 tries \npassword123" << endl;
    
    
    for (int i = 0; i < 5;i++)
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
        
        if (i == 2)
        {
            return 0;
        }
        
    }
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    
    //File
    
    ifstream fin;
    fin.open("//Users/ginotateo/Desktop/Pwnd/Chapter 10/Chapter 10/mortgage.txt"); //Users/ginotateo/Desktop/Pwnd/Chapter 10/Chapter 10/mortgage.txt
    
    


        int years = 30;

        
        //Calculator
    double monthlyInterestRate = for.annualInterestRate/1200;
    double yearsForPayback = 30;
    double monthsforPayback = yearsForPayback * 12;
    double monthlyPayment = (sort.moneyBorrowed * pow(1+(monthlyInterestRate),monthsforPayback) * monthlyInterestRate)/((pow(1+monthlyInterestRate,monthsforPayback))-1);

        
        
        //cout
        cout <<"Loan amount: $" << loanAmount<<"\n";
        cout <<"Interest rate: "<< interestRate<<"\n";
        cout << "Monthly Payment: $"<< monthlyPayment<<"\n";
        
    
    
    
    fin.close();
    
}
