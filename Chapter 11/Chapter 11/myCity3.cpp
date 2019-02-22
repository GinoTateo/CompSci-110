// Lab 11.2
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//


#include "iostream"
using namespace std;

int main()
{
    cout << "Programmer: Gino Tateo" << endl;
    
    int temp[5];
    
    temp[0] = 75;
    temp[1] = 73;
    temp[2] = 78;
    temp[3] = 81;
    temp[4] = 78;
    
    std::cout << "High temperature forcast for Walnut Creek, California." << endl << endl;
    std::cout << "Monday, September 17th, " << temp[0] << endl;
    std::cout << "Tuesday, September 18th, " << temp[1] << endl;
    std::cout << "Wednesday, September 19th, " << temp[2] << endl;
    std::cout << "Thursday, September 20th, " << temp[3] << endl;
    std::cout << "Friday, September 21st, " << temp[4] << endl;
    
    int high = 0;
    int low = 100;
    
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

    
    cout << endl;
    cout << "The high for the week is " << high << " degrees" << endl;
    cout << "The low for the week is " << low << " degrees" << endl;
    cout << endl;
    
    return 0;
    
}

