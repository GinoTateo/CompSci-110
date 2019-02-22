// Lab 10.5
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
    fin.open("mortgage.txt");

        
        float interestRate;
        float loanAmount;
        

        
        while (true)
        {
         
            fin >> loanAmount;
            fin >> interestRate;
            fin.ignore(1000, 10);
            
            int years = 30;

            //Math
            years = years*12;
            float interest2Rate=interestRate/10;
           
            
            //Calculator
            int s= interest2Rate *(pow(1+interest2Rate, years)* loanAmount)/(pow(1+interest2Rate, years))-1;
            //float t= (pow(1+interest2Rate, years))-1;
            int monthlyPayment = (s/years);
  
            
            //cout
            cout <<"Loan amount: $" << loanAmount<<"\n";
            cout <<"Interest rate: "<< interestRate<<"\n";
            cout << "Monthly Payment: $"<< monthlyPayment<<"\n";
            
            

            if (!fin.good()) break;
            
        }
    
        fin.close();
    
}
