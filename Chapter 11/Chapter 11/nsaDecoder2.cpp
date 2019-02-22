// Lab 11.7
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
    
    cout << "Programmer: Gino Tateo"<< endl;
    cout << "This Program decodes a previously encoded messsage." << endl;

//Key
const int SIZE = 5;
int offset[SIZE] = {4,-5,-2,3,-6};

//File in
ifstream fin;
string lineFromFile;
cout << "Enter file name to be decoded: ";
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
