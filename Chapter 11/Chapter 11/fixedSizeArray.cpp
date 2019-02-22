// Lab 11.4
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//

#include <fstream>
#include "iostream"
using namespace std;

int main()
{
    
    
    cout << "Programmer: Gino Tateo" << endl;
    cout << "Description: This program prompts for four numbers and displays an average of the numbers" << endl;
    
        int score[4];
        int i;
    
        for(i =0; i < 4; i++)
        {
            cout << "Enter a number:";
            cin >> score[i];
        }
    
        int scoreTotal = 0;
    
        for (i = 0; i < 4; i++)
        {
            scoreTotal += score[i];
        }
    
        double average = scoreTotal / 4.0;
    
    cout << "The average of " << 4 << " numbers is " << average << endl;
    

        int nGreater = 0;
    
        for (i = 0; i < 4; i++)
        {
            if (score[i] > average) nGreater++;
        }
    
    cout << nGreater << " scores are greater than the average." << endl;

}
