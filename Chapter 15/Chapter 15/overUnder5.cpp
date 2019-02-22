// Lab 15.2
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode

#include <iostream>
using namespace std;

#include <ctime>
#include <cstdlib>
#include <deque>


struct Score
{
    int num;
};

int main()
{
    
    cout << "Programmer: Gino Tateo" << endl;
    cout << "This game asks for the user to guess a number" << endl;
    
    cout << "Im thinking of a number between 1-100." << endl;
    
    int rando;
    srand(unsigned(time(0)));
    int temp = rand()%100+1;
    
    deque<Score> numList;
    Score number;
    
    while (true)
    {
    
        
        cin >> rando;
        
        
        
        for(int i = 0; i < numList.size(); i++)
        {
            if(numList[i].num==rando)
            {
                cout << "You already guessed " << numList[i].num << " -- guess again: ";
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
            number.num = rando;
            numList.push_back(number);
        }
        
        if (temp < rando)
        {
            cout << "lower -- Guess again: " << rando << endl;
            number.num = rando;
            numList.push_back(number);
        }
        
    }
}
