// Lab 7.6
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode
//
//unfinished

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    //intro
    cout << "Programmer: Gino Tateo" << endl;
    cout << "This is a game of war!" << endl << endl;
    
 
    while (true) //for loop
    {
        
        cin.clear();
            cout << "Press any key to PLAY." << endl;
                cin.get();
        

                    //assign card
                    srand(unsigned(time(0)));
                        int computerCard = rand()%12+2;
                        int userCard = rand()%12+2;
        
                    //assign suit
                        int computerSuit = rand()%3;
                        int userSuit = rand()%3;
        
        string card;
        string card2;
                                //Define card
                                if (computerCard == 11)
                                    card = "Jack";
                                if (computerCard == 12)
                                    card = "Queen";
                                if (computerCard == 13)
                                    card = "King";
                                if (computerCard == 14)
                                    card = "Ace";
                                if (computerCard == 10)
                                    card = "10";
                                if (computerCard == 9)
                                    card = "9";
                                if (computerCard == 8)
                                    card = "8";
                                if (computerCard == 7)
                                    card = "7";
                                if (computerCard == 6)
                                    card = "6";
                                if (computerCard == 5)
                                    card = "5";
                                if (computerCard == 4)
                                    card = "4";
                                if (computerCard == 3)
                                    card = "3";
                                if (computerCard == 2)
                                    card = "2";
                                if (computerCard == 1)
                                    card = "1";

                                //Define card2
                                if (userCard == 11)
                                    card2 = "Jack";
                                if (userCard == 12)
                                    card2 = "Queen";
                                if (userCard == 13)
                                    card2 = "King";
                                if (userCard == 14)
                                    card2 = "Ace";
                                if (userCard == 10)
                                    card2 = "10";
                                if (userCard == 9)
                                    card2 = "9";
                                if (userCard == 8)
                                    card2 = "8";
                                if (userCard == 7)
                                    card2 = "7";
                                if (userCard == 6)
                                    card2 = "6";
                                if (userCard == 5)
                                    card2 = "5";
                                if (userCard == 4)
                                    card2 = "4";
                                if (userCard == 3)
                                    card2 = "3";
                                if (userCard == 2)
                                    card2 = "2";
                                if (userCard == 1)
                                    card2 = "1";
        
        string suit;
        string suit2;
                            //Define computer suit
                                if (computerSuit == 0)
                                    suit = "spades";
                                if (computerSuit == 1)
                                    suit = "diamonds";
                                if (computerSuit == 2)
                                    suit = "hearts";
                                if (computerSuit == 3)
                                    suit = "clubs";
        
                            //Define user suit
                                if (userSuit == 0)
                                    suit2 = "spades";
                                if (userSuit == 1)
                                    suit2 = "diamonds";
                                if (userSuit == 2)
                                    suit2 = "hearts";
                                if (userSuit == 3)
                                    suit2 = "clubs";
                            
                            //decision & score
        
                            cout << "Computer's card is a " << card <<" of "<<  suit << endl;
                            cout << "humans card is a " << card2 <<" of "<< suit2 << endl;
                            
                            
                            int i;
                            int c;

                            
                            if (computerCard > userCard){
                                cout << "Computer Wins!" << endl;
                                i++;
                                }
                            
                            if (userCard > computerCard){
                                cout << "User wins!" << endl;
                                c++;
                                }
                            
                            if (computerCard == userCard)
                                cout << "Its a tie!" << endl;
        
        

                            cout << "Computer wins: " << i << endl;
                   

                            cout << "User wins: " << c << endl;
        
        
        // Pay again
        
        while (true)
        {
            cin.clear();
            cout << "Do you want to play again?" << endl;
                string again;
                    cin >> again;
        
                if ((again == "y")||(again == "Y"))
                    {
                        break;
                    }
            
                if ((again == "n")||(again == "N"))
                    {
                      return(0);
                    }
                if (again != "y" && again != "n" && again != "y" && again != "n")
                {
                    cout << "invalid" << endl;
                }
            
         }
        
    }
    
    
}
