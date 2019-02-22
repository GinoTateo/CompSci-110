// Lab 9.1
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//

#include <iostream>

        using namespace std;
        
        void questions ()
        {
            cout << "Programmer: Gino Tateo \nThis program implements a void function.";
            
            
            
                    //Answer key
                    string theAnswer1 = "bill gates";
                    string theAnswer2 = "1999";
                    string theAnswer3 = "Lots";
            
                    //Answer user
                    string userAnswer1;
                    string userAnswer2;
                    string userAnswer3;
            
            
 cin.ignore(1000,10);
            
            
            //1
            cout <<"Who founded Microsoft?" << endl;
                cin >> userAnswer1;
                    if (userAnswer1 == theAnswer1)
                    {
                        cout << "Correct" << endl;
                    }
                    else
                    {
                        cout << "wrong" << endl;
                    }
            
            
cin.ignore(1000,10);
            
            //2
            cout <<"When were computers invented?" << endl;
                cin >> userAnswer2;
                    if (userAnswer2 == theAnswer2)
                        {
                            cout << "Correct" << endl;
                        }
                    else
                        {
                            cout << "wrong" << endl;
                        }

cin.ignore(1000,10);
            
            //3
            cout << "How many computer languages are there?" << endl;
                cin >> userAnswer3;
                    if (userAnswer3 == theAnswer3)
                        {
                            cout << "Correct" << endl;
                        }
                    else
                        {
                            cout << "wrong" << endl;
                        }
   
            
        }
        
        int main ()
        {
            questions ();
            
            int correct = 0;
            if (userAnswer1("1st US president", "Washington")) correct++;
            if (question("2nd US president", "Adams")) correct++;
            
            cout << correct << " correct answers" <<  endl;
            
            
            
        }
