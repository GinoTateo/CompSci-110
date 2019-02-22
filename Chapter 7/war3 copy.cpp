// Lab 7.6
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//
//unfinished

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    //intro
    cout << "Programmer: Gino Tateo" << endl;
    cout << "This is a game of war!" << endl;
    
 
    while (true) //for loop
    {
        //assign card
        srand(unsigned(time(0)));
        int computerCard = rand()%12+2;
        int userCard = rand()%12+2;
        
        //assign suit
        int computerSuit = rand()%3;
        int userSuit = rand()%3;
        
        //define card
        int ace;
        int king;
        int queen;
        int jack;
        
        
        
        //Define suit
        if (computerSuit == 0)
            int Spades;
        if (computerSuit == 1)
            int diamonds;
        if (computerSuit == 2)
            int hearts;
        if (computerSuit == 3)
            int clubs;
        
        
        //decision
        cout << "Computer's card is a " << computerCard <<" of "<<  computerSuit << endl;
        cout << "humans card is a " << userCard <<" of "<< userSuit << endl;
        
        
     
    
        int i; i =0;
        int j; j=0;
        
        if (computerCard > userCard){
            cout << "Computer Wins!" << endl;
            i++; }
        
        if (userCard > computerCard){
            cout << "User wins!" << endl;
            j++;}
        
        if (computerCard == userCard)
            cout << "Its a tie!" << endl;
        
        //Score
    
        cout << "Computer wins: " << i << ", User wins: " << j << endl;
        
        //play again
        cout << "Continue? [Y/N]" << endl;
        int input;
        cin >> input;
        if (input == 'Y')
            if (input == 'N') break;
    
    }
        
}
