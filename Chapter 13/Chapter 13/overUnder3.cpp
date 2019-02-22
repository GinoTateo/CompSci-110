// Lab 13.2
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
    
    cout << "Programmer: Gino Tateo" << endl;
    cout << "This game asks for the user to guess a number" << endl;
    
    cout << "Im thinking of a number between 1-100." << endl;
    
    int rando;
    srand(unsigned(time(0)));
    
    const int MAX_GUESSES = 100;
    int nGuesses = 0;
    int guess[MAX_GUESSES];
    
    int numberGuessed;
    cout << "Guess a number between 1 and 100: ";
    do{
        cin >> numberGuessed;
        
        bool match = false;
        for(int i = 0; i < nGuesses; i++){
            if(guess[i]==numberGuessed){
                cout << "You already guessed " << guess[i] << "- guess again: ";
                match = true;
            }
        }
        if(!match){
            if (numberGuessed == rando){
                cout << "You got it! -- It's "" << rando << endl;
                break;
            }
            if (numberGuessed < rando){
                if(nGuesses < MAX_GUESSES){
                    guess[nGuesses++]=numberGuessed;
                }
                cout << "Higher -- Guess again: ";
            }
            else{
                if(nGuesses < MAX_GUESSES){
                    guess[nGuesses++]=numberGuessed;
                }
                cout << "lower -- Guess again: ";
            }
        }
    }while(numberGuessed != rando);
}
