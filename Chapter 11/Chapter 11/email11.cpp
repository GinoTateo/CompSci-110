// Lab 11: Term Project Preparation
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    cout << "Programmer: Gino Tateo\n";
    cout << "This program prompts for a user input and output file name and prints them.\n";
    
    //Clear UI
    cout << string(11, '\n');
    
            string inputFile;
            string defaultInputFile = "fileContainingEmails.txt";
    
            string outputFile;
            string defaultOutputFile;

    
    cout << "Enter input filename or default: " << defaultInputFile << endl;
    
    getline(cin,inputFile);
    
            if (inputFile.length() == 0)
            {
                inputFile = defaultInputFile;
            }
    
            if(inputFile!= defaultInputFile)
            {
                defaultOutputFile = inputFile;
            }
            else
            {
                defaultOutputFile = "copyPasteMyEmails.txt";
            }
    
    cout << "Enter output filename or default: " << defaultOutputFile << endl;
    
    getline(cin,outputFile);
    
            if (outputFile.length() == 0)
            {
                outputFile = defaultOutputFile;
            }
    
    cout << "Input file: " << inputFile << endl;
    cout << "Output file: " << outputFile << endl;
    
    
}
