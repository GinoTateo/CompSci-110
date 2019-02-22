// Lab 10.7
// Programmer: Gino Tateo
// Editor(s) used: xcode
// Compiler(s) used: xcode
//

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>


using namespace std;



int main()
{
    cout << "Programmer: Gino Tateo\n";
    cout << "This programm encodes a text file!\n";
    
    cout << "Enter file loaction\n";
    
    

    //File
    fstream fin;
    string file;
    getline(cin,file);

    


    while (true)
    {
        if (!fin.good()) break;
        string lineFromFile;
        getline(fin, lineFromFile);
        
        cout << lineFromFile << endl;

    
    fin.ignore(1000,10);
    
    for (int i = 0; i < lineFromFile.length(); i++)
        lineFromFile[i]--;
    
    cout << lineFromFile << endl;
    
        }
    
    fin.close();

    
}
