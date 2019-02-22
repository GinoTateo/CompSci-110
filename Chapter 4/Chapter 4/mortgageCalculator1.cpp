// Lab 4.1
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode


#include <iostream>
#include <cmath>
#include <string>
using namespace std;


#include <iomanip>

int main()
{
    
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    
    //input
    int loanAmount;
    float interestRate;
    int month;
    
    cin >> age;
    
    
    

    
    
    float s= interestRate *(pow(1+interestRate, month)* loanAmount);
    float t= (pow(1+interestRate, month))-1;

    float x = s/t;
    
    int monthlyPayment = x/month;
    
    cout << x <<"\n";
    cout <<"loan amount: $" << loanAmount<<"\n"<< endl;
    cout <<"interest rate: "<< interestRate<<"\n"<< endl;
    cout << "monthly Payment: $"<< monthlyPayment<<"\n"<< endl;
    return 0;
    
}


