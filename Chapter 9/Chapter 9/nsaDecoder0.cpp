//  9.2
//  nsaEncoder0.cpp
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    
    cout << "Enter message:" << endl;
    string str;
    
    
    cin.ignore(1000,10);
    cin >> str;
    
    for (int i = 0; i < str.length(); i++)
        str[i]--;
    
    cout << str << endl;
    
}
