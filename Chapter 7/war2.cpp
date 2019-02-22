// Lab 7.6
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
    cout << "This is a game of war!" << endl;
    
    
    while (true) //for loop
    {
        //assign card
        srand(unsigned(time(0)));
        int computerCard = rand()%12+2;
        int userCard = rand()%12+2;
        
        
        char suit;
        
        //assign suit
        switch(suit)
        {
    case 0: return "CLUBS";
    case 1: return "DIAMONDS";
    case 2: return "HEARTS";
    case 3: return "SPADES";
        }
        
        //define card
        switch (userCard) {
        
    case 2: return "TWO";
    case 3: return "THREE";
    case 4: return "FOUR";
    case 5: return "FIVE";
    case 6: return "SIX";
    case 7: return "SEVEN";
    case 8: return "EIGHT";
    case 9: return "NINE";
    case 10: return "TEN";
    case 11: return "JACK";
    case 12: return "QUEEN";
    case 13: return "KING";
    case 14: return "ACE";
        }
        
        
        
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
