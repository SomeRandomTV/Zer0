//
//  main.cpp
//  Monoply
//
//  Created by Retr0 on 2/9/22.
//

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include "Player Class.hpp"

using namespace std;

int main() {
    
    // board values
    int spaces = 40;
    int players = 7;
    string location;
    
    // players 1-7
    int player1Location = 0;
    int player2Location = 0;
    int player3Location = 0;
    int player4Location = 0;
    int player5Location = 0;
    int player6Location = 0;
    int player7Location = 0;
    char player1Decison;
    // dice roll value
    int diceRoll1;
    int diceRoll2;
    
    // basic funtions for the actual game mechanics
    cout << "Hello, welcome to the game of Monoply!\n";
    cout << "Here are the rules: \n";
    cout << "You cannot sell/buy/trade/go to jail until you pass go once.\n";
    
    cout << "There are 7 playes:\n\nBattleship\nTop Hat\nRacecar\nThimble\nWheelburrow\nDog\nBoot\n";
    
    cout << "There are " << players << " in the game\n";
    cout << "There are " << spaces << " on the board\n";
    cout << "Players, pick your piece\n";
    
    // dice roll mechanics
    srand(time(0));
    diceRoll1 = rand() % 6 + 1;
    diceRoll2 = rand() % 6 + 1;
    cout << diceRoll1 << endl;
    cout << diceRoll2 << endl;
    
    player1Location = player1Location + diceRoll2 + diceRoll1;
    
    cout << player1Location << endl << endl;
    if (player1Location == 4) {
        cout << "You landed on x\n would you like to? a) Buy\n b) ignore";
        cin >> player1Decison;
        if (player1Decison == 'a') {
            player1val
        }
        }
        

    diceRoll1 = rand() % 6 + 1;
    diceRoll2 = rand() % 6 + 1;
    cout << diceRoll2 << endl;
    cout << diceRoll1 << endl;
    
    
    player1Location = player1Location + diceRoll2 + diceRoll1;
    cout << player1Location << endl;
    
    
    
    
   
    
    
    
    return 0;
}
