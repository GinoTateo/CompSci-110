// Lab 11.5
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//

#include <fstream>
#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
    
    cout << "Programmer: Gino Tateo" << endl;
    cout << "Description: This program prompts for scores and outputs a sorted list, minimum, maximum,and average." << endl;
    
     cout << "How many scores? ";
    
        int n;
            cin >> n;
                int* scores = new int[n];
    
                for(int x = 0; x < n; x++)
                {
                    cout << "Enter a number: ";
                    cin >> scores[x];
                }
    
   
    
        sort(scores,scores + n);
        cout << "Sorted: ";
    
            for(int x = 0; x < n; x++)
            {
                if(x==n-1)
                    {
                        cout << scores[x] << endl;
                    }
                else
                    {
                        cout << scores[x] << " ";
                    }
            }
    
            cout << "Minimum: " << scores[0] << endl;
            cout << "Maximum: " << scores[n-1] << endl;
    
    double sum = 0;
    
            for(int x = 0; x < n; x++)
                {
                    sum += scores[x];
                }
    
    double average = sum/(double)n;
    
    cout << "Average: " << average << endl;
    
    int numAverage;
            for(int x = 0; x < n; x++)
                {
                    if(scores[x]>=90)
                        numAverage++;
                }
    if(numAverage>0)
                {
                    cout << "At least one 'A' grade entered" << endl;
                }
    
}
