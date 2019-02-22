// Lab 8.5
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//


#include <iostream>
#include <string>
using namespace std;




void questions(int x)
{
    cout << "Programmer: Gino Tateo \nThis program asks 3 questions using a void function.\n\n";
    
    if (x == 1)
    {
        cout << "Who founded Microsoft?";
        string userAnswer1;
        string answer1 = "Bill Gates";
        string answer11 = "Gates";
        cin >> userAnswer1;
        cin.ignore(1000,10);
        
        if (userAnswer1 == answer1)
        {
            cout << "      Correct!" << endl;
        }
        if (userAnswer1 == answer11)
        {
            cout << "      Correct!" << endl;
        }
        else
        {
            cout << "      Very good, but incorrect " << endl;
        }
        
    }
    
    if (x == 2)
    {
        cout << "When were computers invented?";
        string userAnswer2;
        string answer2= "1999";
        cin >> userAnswer2;
        
        
        if (answer2 == userAnswer2)
        {
            cout << "      Correct!" << endl;
        }
        else
        {
            cout << "      Very good, but incorrect " << endl;
        }
        
    }
    
    if (x==3)
    {
        cout << "How many computer languages are there?";
        string userAnswer3;
        string answer3 = "Lots";
        cin >> userAnswer3;
        
        if (answer3 == userAnswer3)
        {
            cout << "      Correct!" << endl;
        }
        else
        {
            cout << "      Very good, but incorrect " << endl;
        }
    }
    


    

    
}

int main()
{
    questions(1);
        questions(2);
            questions(3);
    
}

