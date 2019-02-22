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
    
    
    

   
        
    //User
    int user;
    cout << "Choose Rock,Paper,Scissors or Quit";
    cin >> user;
    
    //Computer
    srand(unsigned(time(0)));
    int comp = rand()%2;
    
 
   //outcomes
        cout<< "p2" << endl;
        cin >> comp;
        int p;
        int r;
        int s;
        
        if (user == comp)
        {
            cout <<"\nThere is a tie"<<endl;
        }
        
        if ( user == r && comp == p)
        {
            cout << "\nPaper wraps rock, Player 1 win";
        }
        else if (user == r && comp == s)
        {
            cout << "\nRock smashes scissors, player 1 win";
        }
        
        if (user == p && comp == r)
        {
            cout <<"\nPaper wraps rock, player 1 win";
        }
        else if ( user == p && comp == s)
        {
            cout <<"\nScissors cut paper, player 2 win";
        }
        
        if ( user == r && comp == p)
        {
            cout << "\nPaper wraps rock, Player 1 win";
        }
        else if (user == r && comp == s)
        {
            cout << "\nRock smashes scissors, player 1 win";
        }
        
        if (user == p && comp == r)
        {
            cout <<"\nPaper wraps rock, player 1 win";
        }
        else if ( user == p && comp == s)
        {
            cout <<"\nScissors cut paper, player 2 win";
        }
        
        if ( user == s && comp == r)
        {
            cout <<"\nScissors cut paper, player 1 win";
        }
        else if (user == s && comp == p)
        {
            cout <<"\nRock smashes scissors, player 2 win ";
        }
    
        
        
        
        
    }
    

