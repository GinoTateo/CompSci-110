// Lab 10.6
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
        ofstream fout;
        string file;
        cin >> file;
    
    fin.open(file); //File to be encoded

    while (true)
    {
        if (!fin.good()) break;
        string lineFromFile;
        getline(fin, lineFromFile);
        cout << lineFromFile << endl << endl;
        
            fin.ignore(1000,10);
        
        for (int i = 0; i < lineFromFile.length(); i++)
        lineFromFile[i]++;
        
        cout << lineFromFile << endl << endl;
        
        ofstream fout;
        fout.open("/Users/ginotateo/Desktop/Pwnd/Chapter 10/Chapter 10/secret.txt", ios::app);
        if (!fout.good()) throw "I/O error";
        fout << lineFromFile << endl;
        
        
    }
    
    fout.close();
    fin.close();
    
    
}








