// Lab 7.1
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//
#include <iostream>
using namespace std;



int main()
{
    
    cout << "Programmer: Gino Tateo" << endl;
    cout << "This program tells the user information about a grade received" << endl << endl;
    

        char grade;
            cout << "What is your grade? [A, B, C, D, or F]: ";
                cin >> grade;
                cin.ignore(1000, 10);
    




                    switch (grade)
                        {
                            case 'A':
                            case 'a':
                                
                            case 'B':
                            case 'b':
                                
                            case 'C':
                            case 'c':
                                cout << "You pass!" << endl;
                                    break;
                                
                            case 'D':
                            case 'd':
                                
                            case 'F':
                            case 'f':
                                cout << "you do NOT pass.." << endl;
                                    break;
                                
                            default:
                                cout << "Invalid: " << grade << endl;

                        }
}
