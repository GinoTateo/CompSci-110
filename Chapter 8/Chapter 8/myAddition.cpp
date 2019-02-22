// Lab 8.2
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void additionProblem(int topNumber, int bottomNumber)
{
  
    int userAnswer;
        cout << "\n\n\n      " << topNumber << " + " << bottomNumber << " = ";
            cin >> userAnswer;
                cin.ignore(1000, 10);
    
    int theAnswer = topNumber + bottomNumber;
   
        if (theAnswer == userAnswer)
            cout << "      Correct!" << endl;
        else
            cout << "      Very good, but a better answer is " << theAnswer << endl;
    
} // additionProblem

int main()
{
    srand( (unsigned int) time(NULL) );
    
        for (int i = 0; i < 5;i++)
                {
                        int x = rand()%11;
                        int y = rand()%11;
                        additionProblem(x,y);
                }

} // main 
