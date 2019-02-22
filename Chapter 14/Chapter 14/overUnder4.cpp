// Lab 14.1
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode

#include <iostream>
using namespace std;

#include <ctime>
#include <cstdlib>
#include <string>

struct Score
{
    int num;
    Score* next;
};

int main()
{
    
    cout << "Programmer: Gino Tateo" << endl;
    cout << "This game asks for the user to guess a number" << endl;
    
    cout << "Im thinking of a number between 1-100." << endl;
    
    int rando;
    srand(unsigned(time(0)));
    int temp = rand()%100+1;
    

    
    Score* start = 0;
    
    while (true)
    {
        Score* aScore = new Score;
        
        cin >> rando;
        
        
        
        for(Score* p = start; p; p = p->next)
        {
            if(p->num==rando)
            {
                cout << "You already guessed " << p->num << " -- guess again: ";
            }
            break;
        }
        
        if (temp == rando )
        {   cout << "You got it! -- It's " << temp << endl;
            break;
        }
        
        if (temp > rando)
        {
            cout << "Higher -- Guess again: " << rando << endl;
            Score* s = new Score;
            s->num = rando;
            s->next = start;
            start = s;
        }
        
        if (temp < rando)
        {
            cout << "lower -- Guess again: " << rando << endl;
            Score* s = new Score;
            s->num = rando;
            s->next = start;
            start = s;
        }
        
    }
}
