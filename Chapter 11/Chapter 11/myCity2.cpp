// Lab 11.1
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
    
    std::cout << "High temperature forcast for Walnut Creek, California" << endl;
    std::cout << "Monday, September 17th, " << temp[0] << endl;
    std::cout << "Tuesday, September 18th, " << temp[1] << endl;
    std::cout << "Wednesday, September 19th, " << temp[2] << endl;
    std::cout << "Thursday, September 20th, " << temp[3] << endl;
    std::cout << "Friday, September 21st, " << temp[4] << endl;
    
    return 0;
    
}
