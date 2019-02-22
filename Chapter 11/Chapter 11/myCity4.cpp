// Lab 11.3
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//


#include "iostream"
#include <string>
using namespace std;

int main()
{
    cout << "Programmer: Gino Tateo" << endl;
    cout << "The program takes user input and outputs a forecast";
    
    int temp[5];
    
    
    string city = "Walnut Creek";
    
    
    cout << "Enter the high for " << city << " on Monday" << ": ";
    cin >> temp[0];
    cout << "Enter the high for " << city << " on Tuesday" << ": ";
    cin >> temp[1];
    cout << "Enter the high for " << city << " on Wednesday" << ": ";
    cin >> temp[2];
    cout << "Enter the high for " << city << " on Thursday" << ": ";
    cin >> temp[3];
    cout << "Enter the high for " << city << " on Friday" << ": ";
    cin >> temp[4];
    
    
    temp[0];
    temp[1];
    temp[2];
    temp[3];
    temp[4];
    

    
    cout << endl << endl;
    cout << "Monday, November 5th " << temp[0] << " degrees." << endl;
    cout << "Tuesday, November 6th " << temp[1] << " degrees." << endl;
    cout << "Wednesday, November 7th " << temp[2] << " degrees." << endl;
    cout << "Thursday, November 8th " << temp[3] << " degrees," << endl;
    cout << "Friday, November 9th " << temp[4] << " degrees." << endl;
    
    int high = 0;
    int low = 100;
    
   // int high = 100;
    int highOccur = 0;
//int low = 1;
    int lowOccur = 0;
    
    for (int i = 0; i < 5; i++)
    {
        if(temp[i]<low)
            {
                low = temp[i];
            }
        if(temp[i]>high)
            {
                high = temp[i];
            }
    }
    
    for (int i = 0; i < 5; i++)
    {
        if(temp[i]==low)
            {
                lowOccur++;
            }
        if(temp[i]==high)
            {
                highOccur++;
            }
    }
    
    
    cout << endl;
    cout << "The high for the week is " << high << " degrees" << endl;
    cout << "The low for the week is " << low << " degrees" << endl;
    cout << endl;
    
    return 0;
    
}
