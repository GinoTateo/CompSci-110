// Lab 13.3
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//

#include <fstream>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

int main(){

    cout << "Programmer: Gino Tateo" << endl;
    cout << "This program plays up to 200 songs.\n\n";

    
    srand(time(0));
    ifstream fin;
    
    string inputFile = "songs.txt";
    
    fin.open(inputFile);
    
        const int MAX_SONGS = 200;
        int nSongs = 0;
        string song[MAX_SONGS];
    
    bool continueMusic;
    
    while(fin.good())
    {
        string line;
        getline(fin, line);
        
        
        if(nSongs < MAX_SONGS)
        {
            song[nSongs++]=line;
        }
    }
    
    fin.close();
    char answer;
    
    do{
        cout << "play a song [Y/N]?: ";
        cin >> answer;
        cin.ignore(1000,10);
        if(answer=='Y' || answer=='y'){
            continueMusic = true;
            int index = rand() % nSongs + 1;
            string songShow = song[index];
            cout << songShow << endl;
        }
        else if(answer=='N' || answer=='n')
            {
                continueMusic = false;
            }
        }
    while(continueMusic);
    if(!continueMusic)
            {
                return 0;
            }
    
    }


