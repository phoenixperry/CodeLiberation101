//
//  main.cpp
//  CLF_Homework1
//
//  Created by Phoenix Perry on 6/23/13.
//  Copyright (c) 2013 Phoenix Perry. All rights reserved.
//

#include <iostream>
using namespace std;

int player =100;
int monster = 100;
string playerInput = " ";

bool gameLoop = true;

int main()
{
    while (gameLoop)
    {
        if(player!=0)
        {
         
        cout<<endl << "you are being threatened by an evil monster! Do you attack or defend?" << endl;
        //change values based on player input
         cin >> playerInput;
            
        }
        
        if( playerInput == "attack"){
            monster -=20;
            player -= 5; 
            cout << endl<< "the score is now. Player " << player << " monster:" << monster;
        }
        else if (playerInput == "defend"){
            player -= 2;
            cout << endl << "the score is now. Player " << player << " vs monster:" << monster;
        }
        
        
        //end states
        if(monster ==0){
            cout << endl << "you won the monster is dead" << endl << "end of game";
            gameLoop = false; 
        }
    
        else if (player == 0) {
            cout << endl << "you are dead" << endl << "end of game";
            gameLoop = false; 
        }
        
    }
}



