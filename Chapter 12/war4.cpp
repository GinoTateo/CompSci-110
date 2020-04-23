// Lab 12.3
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <sstream>
#include <cstring>

using namespace std;

struct Card
{
    int suit, value;
};

void valueAndSuit(Card pcd, int player)
    {
    string display;
    string display2;
    if(player==0)
    {
        display+= "Computer's card is a ";
    }
    else{
        display+= "Human's card is a ";
    }
    
    if(pcd.value == 11)
        display += "Jack";
    
    else if(pcd.value == 12)
        display += "Queen";
    
    else if(pcd.value == 13)
        display += "King";
    
    else if(pcd.value == 14)
        display += "Ace";
    
    else{
        stringstream ss;
        ss << pcd.value;
        display += ss.str();
        }
    
    if(pcd.suit == 0)
        display2 = "Spades";
    
    else if(pcd.suit == 1)
        display2 = "Diamonds";
    
    else if(pcd.suit == 2)
        display2 = "Hearts";
    
    else
        display2 = "Clubs";
    
    cout << display << " of " << display2 << endl;
}

bool getYesOrNo(){
    char sCont;
    bool continueQ;
    cout << "Continue? [Y/N] ";
    cin >> sCont;
    cin.ignore(1000, 10);
    cout << endl;
    if(toupper(sCont) == 'N'){
        continueQ = false;
    }
    if(toupper(sCont) == 'Y'){
        continueQ = true;
    }
    do{
        if(continueQ == true){
            break;
        }
        if(continueQ == false){
            break;
        }
    }while(continueQ == true || continueQ == false);
    return continueQ;
}

int main()
{
    srand(time(0));
    cout << "Programmer: Gino Tateo" << endl;
    cout << "This program plays the card game war." << endl;
    cout << endl;
    
    Card human, computer;
    
    int hWin = 0;
    int cWin = 0;
    bool answer;
    
    do{
        //computer part starts here
        computer.value = 2 + (rand() % 12);
        computer.suit = rand() % 4;
        valueAndSuit(computer,0);
        
        //human part starts here
        
        human.value = 2 + (rand() % 12);
        human.suit = rand() % 4;
        valueAndSuit(human,0);
        
        //display results here
        
        if(computer.value < human.value)
            {
            cout << "--<< Human wins! >>--" << endl;
            hWin++;
                
            stringstream ss;
            ss << cWin;
            string cDis = ss.str();
            stringstream ss2;
            ss2 << hWin;
            string hDis = ss2.str();
            cout << "Computer wins: " << cDis << ", Human wins: " << hDis << endl;
            }
        if(computer.value == human.value)
            {
            cout << "--<< It's a tie. >>--" << endl;
            stringstream ss;
            ss << cWin;
            string cDis = ss.str();
            stringstream ss2;
            ss2 << hWin;
            string hDis = ss2.str();
            cout << "Computer wins: " << cDis << ", Human wins: " << hDis << endl;
            }
        
        if(computer.value > human.value)
            {
            cout << "--<< Computer wins! >>--" << endl;
            cWin++;
            stringstream ss;
            ss << cWin;
            string cDis = ss.str();
            stringstream ss2;
            ss2 << hWin;
            string hDis = ss2.str();
            cout << "Computer wins: " << cDis << ", Human wins: " << hDis << endl;
            }
    }while(getYesOrNo()==true);
}
