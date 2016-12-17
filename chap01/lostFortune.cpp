//
//  lostFortune.cpp
//  First
//
//  Created by michael lynch on 12/17/16.
//
//

#include "lostFortune.hpp"

#include <iostream>
#include <string>

using namespace std;

int main() {

    const int GOLD_PIECES = 900;
    int adventurers, killed, survivors;
    string leader, boat;

    // get the info!
    cout << "\n\nWelcome to Runaway Island";
    cout << "=========================";

    cout << "\nPlease enter a number > 5: ";
    cin >> adventurers;

    cout << "\nPlease enter a number, smaller than the first: ";
    cin >> killed;

    cout << "\nEnter your name: ";
    cin >> leader;

    cout << "\nEnter a ladies name: ";
    cin >> boat;


    cout << "\n\nThe tale of Runaway Island!\n\n";
    cout << "A group of explorers left the relative safety of the docs on a crisp cool December morn.  Unbeknownst\n\n";
    cout << "to the crew, dark clouds were just raround the bend.  " << leader << " was the captain of the boat and \n";
    cout << "a fine leader.  But nobody could be prepared for what was about to happen.\n\n";

    cout << "It was only four hours in to the excursion when the skies went black as midnight.  Everyone on the boat,\n";
    cout << "all " << adventurers << " souls aboard were in for the journey of a lifetime, even as their lives were \n";
    cout << "running out!  As the darkness set in, so did the horrible terrors from below!\n\n";

    cout << "The sea creature came from the depths and suprised the crew, its brual attacks taking a toll on the\n";
    cout << "mighty " << boat << ".  She tossed and turned in the ocean as the crew tried to stave off the attacks\n";
    cout << "and keep the boat sailing out of the darkness.\n\n";

    cout << "During the night " << killed << " of the crew was lost at sea.  But " << leader << " kept the mighty\n";
    cout << boat << " true, and he managed to run her aground on Runnaway Island, a island that was never on any map \n;
    cout << "because it was where the pirates kept all their treasure!\n\n";

    cout << "When the sun finally rose the next morning all " << (adventurers - killed) << " members of the crew\n";
    cout << "Set out for water and food, but along the way they found " << GOLD_PIECES << " gold pieces hidden in\n";
    cout << "a treasure chest\n\n";

    cout << "Of course, " << leader << " thought it would be best to eaqully divide the gold and gave each one \n";
    cout << "a share and kept " << (GOLD_PIECES % (adventurers - killed)) << " peices for all the extra effort of \n";
    cout << "steering the boat to the island in the first place!\n\n";


    return 0;
}