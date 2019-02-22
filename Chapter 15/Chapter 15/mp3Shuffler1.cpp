// Lab 15.3
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <deque>
#include <string>
#include <fstream>

using namespace std;



struct Played
{
    string previous;
};

int main()

{
    srand(unsigned(time(0)));
    ifstream fin;

    cout << "Programmer: Gino Tateo" << endl;
    cout << "This program asks the user to play a song without repition." << endl;
    cout << endl;
    
    string inputFile = "songs.txt";
    fin.open(inputFile);
    
    const int MAX_SONGS = 100;
    int nSongs = 0;
    string song[MAX_SONGS];
    
    deque<Played> five;
    Played aSong;
    
    bool continueMusic = true;
    bool recent = false;
    int index = 0;
    string songShow = "";
    
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
                
        if(answer=='Y' || answer=='y')
            {
                do{
                    continueMusic = true;
                    index = rand() % nSongs;
                    songShow = song[index];
                    recent = false;
                    int i = 0;
                    
                    for(i = 0; i < five.size(); i++)
                        {
                            if((five[i].previous).compare(songShow) == 0)
                            {
                            recent = true;
                            }
                        }
                        
                    if(recent == false)
                        {
                        cout << endl << "--> " << songShow << endl << endl;
                        aSong.previous = songShow;
                            
                            if(five.size() == 5)
                                {
                                    five.pop_front();
                                }
                            
                        five.push_back(aSong);
                        }
                        
                    }while(recent);
                
        }
        
        else if(answer=='N' || answer=='n')
            
        {
            continueMusic = false;
        }
        
    }while(continueMusic);
    
}
