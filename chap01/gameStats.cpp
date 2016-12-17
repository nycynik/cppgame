//
//  gameStats.cpp
//  First
//
//  Created by michael lynch on 12/17/16.
//
//

#include "gameStats.hpp"

#include <iostream>
using namespace std;

int main() {

    enum difficulty { NOVICE, EASY, NORMAL, HARD, HARDCORE};
    difficulty gameDifficulty = NORMAL;

    const int ALIEN_POINTS = 150;
    int score;
    double distance;
    char playAgain;
    bool shieldsUp;
    
    short lives, aliensKilled;
    
    aliensKilled = 10;
    score = aliensKilled * ALIEN_POINTS;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;

    double engineTemp = 65.89;
    
    cout << "\nscore: " << score << endl;
    cout << "distance " << distance << endl;
    
    int fuel;
    cout << "\nHow much fuel?";
    cin >> fuel;
    cout << "fuel: " << fuel << endl;
    
    typedef unsigned short int ushort;
    ushort bonus = 10;
    cout << "\nbonus : " << bonus << endl;
    
    return 0;
}
