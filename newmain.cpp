#include <SFML/Graphics.hpp>
#include "Game.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    float sp = 10;
    
    int selection;
    
    while (1)
    {
        cout << "                                                  Welcome to Breakout" << endl;
        cout << "\n \n \n \n" << "                                                          MENU \n\n\n";
        cout<<"Enter desired selection \n" << "1. Controls \n" << "2. Start game\n" << "3. About us " << endl;
        cin >> selection;
        if (selection==1)
        {

            cout << "Use mouse to move paddle. \nClick on mouse to start moving ball\n\n";
            
        }
        else if (selection==2)
        {
            cout << "Enter required difficulty " << endl << "50 for Easy\n" << "100 for Medium\n" << "500 for Hard" << endl;
            cin >> sp;
            Game game(800, 600, "Breakout");
            game.setspeed(sp);
            game.run();
            
        }
        
        else if(selection==3)
        {  
            cout << "This project has been made by \n Asad Hasan \n Mahnoor Sohail \n Rameel Ahmed \n Adil kaleem \n as our Data Structures and Object Oriented Programming course final Project \n HOPE YOU LIKE IT !!\n";
        }
        else
        {
            cout << "Enter a valid selection";
        }
        system("PAUSE");
        system("CLS");
    }

    
    
    return 0;
}
