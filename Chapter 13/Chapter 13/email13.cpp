// Lab 13 final part 3
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//
#include <fstream>
#include <iostream>
#include <string>
using namespace std;



// Validity
bool isValidEmailCharacter(char emailChar)
{
    if((emailChar >='A' && emailChar <= 'Z') || (emailChar >='a' && emailChar <='z') || (emailChar >='0' && emailChar <='9') || emailChar=='.' || emailChar=='-' || emailChar=='+')
    {
        return true;
    }
    return false;
}

int main(){
    
    cout << "Programmer: Gino Tateo" << endl;
    cout << "This program prompts for a file and prints out all valid emails in the file." << endl << endl;
 
    
        ifstream fin;
    
    
    string defaultInputFile = "fileContainingEmails.txt";
    string inputFile;
    
    
    string defaultOutputFile = "x.txt";
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
            outputFile = defaultOutputFile;
        }
    
    const int MAX_EMAILS = 1000;
    int nEmails = 0;
    string name[MAX_EMAILS];
    
    fin.open(inputFile.c_str());
    
    while(fin.good())
    {
        string line;
        getline(fin, line);
            for (int i = 0; i < line.length(); i++)
            {
            if(line[i]=='@')
            {
                
                int s = i - 1;
                int e = i + 1;
                bool hasDot = false;
                
                while(true)
                    {
                    if(s < 0)
                        {
                            break;
                        }
                    if(!isValidEmailCharacter(line[s]))
                        {
                        break;
                        }
                    s--;
                    }
                s++;
                while(true){
                    if(e >= line.length())
                    {
                        break;
                    }
                    if(!isValidEmailCharacter(line[e]))
                    {
                        break;
                    }
                    if(line[e]=='.')
                    {
                        hasDot = true;
                    }
                    e++;
                }
                
                if(nEmails < MAX_EMAILS)
                {
                    name[nEmails++] = line.substr(s,e-s);
                }
            }
        }
    }
    for(int z = 0; z < nEmails; z++)
    {
        cout << name[z] << endl;
    }
    fin.close();
    
    
}
