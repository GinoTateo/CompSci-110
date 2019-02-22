// Lab 7.8
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    //intro
    cout << "Programmer: Gino Tateo" << endl;
    cout << "This is a game of Rock, Paper, or scissors!" << endl;

// Define keys
    
    int user;
    cin >> user;
    cin.ignore(1000, 10);
    
    switch (user)
    {
            case 'R':
            case 'r':
                cout << "rock" << endl;
                    break;
            case 'P':
            case 'p':
                cout << "Paper" << endl;
                    break;
            case 'S':
            case 's':
                cout << "Scissors" << endl;
                    break;
    }



}
