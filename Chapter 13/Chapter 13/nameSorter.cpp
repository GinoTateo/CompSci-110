// Lab 13.1
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//


#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    cout << "programmer: Gino Tateo\n";
    cout << "This program reads a list of names and places them in alphabetical order\n";
    ifstream fin;
    string inputFile;
    cout << "enter file location: ";
    getline(cin,inputFile);
    if (!fin.good()) throw "I/O error";

    //list
    const int MAX_NAMES = 100; // Capacity
    int nNames = 0;
    string name[MAX_NAMES];
    
    //
    fin.open(inputFile.c_str());
    while(fin.good())
    {
        string line;
            getline(fin, line);
                if(!line.empty()){
                    bool duplicate = false;
            
        for(int i = 0; i < nNames; i++)
            {
                if(line==name[i])
                {
                        duplicate = true;
                        }
                            }
                            if(!duplicate)
                            {
                            if(nNames < MAX_NAMES)
                            {
                            name[nNames++] = line;
                            }
                    }
            }
    }
    
    fin.close();
    sort(name,name+nNames);
    for(int i = 0; i < nNames; i++){
        cout << name[i] << endl;
    }
}
