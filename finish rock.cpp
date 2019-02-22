// Lab Midterm
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << "-----Programmer: Gino Tateo-----" << endl;
    cout << "------Rock Paper Scissors------ " << endl;
    cout << "-----Press any key to start-----" << endl;
    cin.get();
    cout << string(50, '\n'); //safe clear
    
    
    while (true) //outter loop starts
    {
        
        //skip 3 lines
        cout << string(3, '\n');
        
        // User decision input
        cout <<"Choose your weapon!" << endl;
        cout << "r => Rock" << endl;
        cout << "p => Paper" << endl;
        cout << "s => Sissors" << endl;
        cout << "==> ";
        
        //Invalid or quit
            while(true) //inner loop starts
                {
                    
                    char user;
                        cin.clear();
                            cin >> user;
            
                    
                    if ((user != 's')&&(user != 'r')&&(user != 'p')&&(user != 'q')&&(user != 'S')&&(user != 'R')&&(user != 'P')&&(user != 'Q'))
                        {
                            cout << "invalid" << endl;
                            break;
                        }

                    if((user == 'q')||(user=='Q'))
                        {
                            cout << "Thanks for playing!" << endl;
                            return(0);
                        }
                    
        //Skip 5 lines for clean UI
        
                cout << string(3, '\n');
        
        //Count down for fun
                

 
        //Skip 3 lines for clean UI
                
        cout << string(3, '\n');
        
       
        //user reminder

                switch(user)
                {
                    case 'r':
                    case 'R':
                        std::cout<<"You picked Rock.." << endl;
                        break;
                        
                    case 'p':
                    case 'P':
                        std::cout<<"You picked Paper.."<< endl;
                        break;
                        
                    case 's':
                    case 'S':
                        std::cout<<"You picked Scissors.."<< endl;
                        break;
                }
                
         //Computer decision
                
                
                    srand((unsigned)time(NULL));
                    int x = (rand()%3+1);
        
        
                    if (x == 1)
                        {
                            cout << "Computer picks Rock.." << endl;
                        }
        
                    if (x == 2)
                        {
                            cout << "Computer picks Paper.." << endl;
                        }

                    if (x == 3)
                        {
                            cout << "Computer picks Scissor.." << endl;
                        }
    
       //User vs computer decision
        
          //if tie
                    if ((user == 'r') && (x == 1))
                        {
                            cout << "Tie!" << endl;
                                break;
                        }
                    
                    if ((user == 'p') && (x == 2))
                        {
                            cout << "Tie!" << endl;
                                break;
                        }
                    
                    if ((user == 's') && (x == 3))
                        {
                            cout << "Tie!" << endl;
                                break;
                        }
                    if ((user == 'R') && (x == 1))
                        {
                        cout << "Tie!" << endl;
                        break;
                        }
                    if ((user == 'P') && (x == 2))
                        {
                        cout << "Tie!" << endl;
                        break;
                        }
                    if ((user == 'S') && (x == 3))
                    {
                        cout << "Tie!" << endl;
                        break;
                    }
        //if user picks paper
       
                    if ((user == 'p') && (x == 3))
                        {
                            cout << "Computer wins!" << endl;
                                break;
                        }
                    
                    if ((user == 'p') && (x == 1))
                        {
                            cout << "User wins!" << endl;
                                break;
                        }
                    if ((user == 'P') && (x == 3))
                    {
                        cout << "Computer wins!" << endl;
                        break;
                    }
                    
                    if ((user == 'P') && (x == 1))
                    {
                        cout << "User wins!" << endl;
                        break;
                    }
       //if user picks rock
       
                    if ((user == 'r') && (x == 3))
                        {
                            cout << "User wins!" << endl;
                                break;
                        }
       
                    if ((user == 'r') && (x == 2))
                        {
                            cout << "Computer Wins!" << endl;
                                break;
                        }
                    if ((user == 'R') && (x == 3))
                    {
                        cout << "User wins!" << endl;
                        break;
                    }
                    
                    if ((user == 'R') && (x == 2))
                    {
                        cout << "Computer Wins!" << endl;
                        break;
                    }
                    
       //if user picks scissor
                    
                    if ((user == 's') && (x == 1))
                        {
                            cout << "Computer wins!" << endl;
                                break;
                        }
                    if ((user == 's') && ( x == 2))
                        {
                            cout << "User wins!" << endl;
                                break;
                        }
                    if ((user == 'S') && (x == 1))
                        {
                        cout << "Computer wins!" << endl;
                        break;
                        }
                    if ((user == 'S') && ( x == 2))
                        {
                        cout << "User wins!" << endl;
                        break;
                        }
                    
        }//end loop2
        
    }// bracket for loop
    
}

