// Lab 11.6
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Programmer: Gino Tateo" << endl;
    cout << "This programm encodes a text file!\n";
    
    //Key
    const int SIZE = 5;
    int offset[SIZE] = {-4,5,2,-3,6};
    
    //File in
    ifstream fin;
    string lineFromFile;
    cout << "Enter file name to be encoded: ";
    getline(cin, lineFromFile);
    fin.open(lineFromFile.c_str());
    
    //File out
    ofstream fout;
    fout.open("secret.txt");
    int counter = 0;
    int index = 0;
    if(!fout.good()) throw "I/O error";
    
    //LBL
    while(fin.good())
        {
        string line;
        getline(fin, line);
            
        for (int i = 0; i < line.length(); i++)
        {
            index = counter % SIZE;
            counter++;
            line[i]=line[i]+offset[index];
        }
            
        fout << line << endl;
            
    }
    
    fout.close();
    fin.close();
}
