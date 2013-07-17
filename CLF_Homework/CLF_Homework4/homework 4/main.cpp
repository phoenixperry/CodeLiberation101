//
//  main.cpp
//  homework 4
//
//  Created by Nina Freeman on 7/14/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#include <iostream>
using namespace std;

void enterChoices();
void printBlanks();
void guessLoop(string (&)[5]);

string lovedList[5];
bool guessing = true;
char choice[100];
string choiceString;
char guess[100];
string guessString;

int main(int argc, const char * argv[])
{
    enterChoices();
    printBlanks();
    guessLoop(lovedList);
    return 0;
}

void enterChoices(){
    cout << "What are the 5 things you love most?" << endl;
    
    for(int i = 0; i < 5; i++){
        cout << "Type choice and press enter. " << 5-i << " choices left." << endl;
        cin.getline (choice,100);
        string choiceString(choice);
        lovedList[i] = choiceString;
    }
}

void printBlanks(){
    for(int i = 0; i < 5; i++){
        cout << endl;
    }
}

void guessLoop(string (&list)[5]){
    int countRemaining = 5;
    int guessesLeft = 5;
    bool guessResult;
    
    cout << "You have 5 chances to guess the 5 things your friend loves most! Type and press enter to guess!" << endl;
    
    while (guessing == true) {
        cout << countRemaining << " things left to guess. " << guessesLeft << " guesses left. Type and press enter to guess." << endl;
        cin.getline (guess,100);
        string guessString(guess);
        
        for(int i = 0; i < 5; i++){
            if (guessString == list[i]) {
                cout << "Yay! " << guessString << " is right!" << endl;
                guessResult = true;
                break;
            } else if (guessString != list[i]){
                guessResult = false;
            }
        }
        
        if (guessResult == true) {
            countRemaining -= 1;
            guessesLeft -= 1; 
        } else if (guessResult == false){
            cout << "Uh oh, wrong guess! Try again." << endl;
            guessesLeft -= 1;
        }
            
        if(countRemaining == 0){
            cout << "Great! You guessed everything! Yaaaayyyy you win!" << endl;
            guessing = false;
        } else if(guessesLeft == 0) {
            cout << "Oops, you lost!" << endl;
            cout << "You would have won if you guessed:" << endl;
            for(int i = 0; i < 5; i++){
                cout << lovedList[i] << endl;
            }
            guessing = false;
        }
    }
}

