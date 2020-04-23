// Lab 12
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: xCode

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    ifstream fin;
    
    cout << "Programmer: Gino Tateo" << endl;
    cout << "The program will prompt the user for input and output filenames, open and read the input file, and print to the console the lines that contain the character @.";
    
        cout << "\n\n\n\n\n";
    
        string defaultInputFile = "fileContainingEmails.txt";
            string inputFile;
        string defaultOutputFile = "copyPasteMyEmails.txt";
            string outputFile;
    
    cout << "Enter input filename [default: " << defaultInputFile << "]: ";
    getline(cin,inputFile);
    
            if(inputFile.length() == 0)
            {
                inputFile = defaultInputFile;
            }
    
    cout << "Enter output filename [default: " << defaultOutputFile << "]: ";
    getline(cin,outputFile);
    
            if(outputFile.length() == 0)
            {
                inputFile = defaultOutputFile;
            }
    
    fin.open(inputFile.c_str());
    ofstream fout;
    
    while(fin.good())
        {
            string line;
            getline(fin, line);
            
            for (int i = 0; i < line.length(); i++)
            {
                if(line[i]=='@')
                    cout << line << endl;
            }
            
        }
    fin.close();
    
    
}
