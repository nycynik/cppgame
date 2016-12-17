// jumble
// word jumble game

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void welcomePlayer() {

    cout << "\t\t\tWelcome to Wrod Jumble!" << endl << endl;
    cout << "Unscramble the letters to make the correct word." << endl;
    cout << "Enter 'hint' for a hint, and 'quit' to give up." << endl << endl;

}

string jumbleWord(string originalWord) {
    string jumble = originalWord;

    int length = jumble.size();

    for (int i=0; i<length; i++) {
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }

    return jumble;

}

int main() {

    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] =
    {
        {"wall", "Do you feel you're banging your head against someting?"},
        {"glasses", "These might help you see the answer."},
        {"jumble", "It's what the game is all about."},
        {"test", "This might feel like one."},
        {"christmas", "Santa clause is coming to town."}
    };

    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORDS);
    string theWord = WORDS[choice][WORD];
    string theHint = WORDS[choice][HINT];

    string jumble = jumbleWord(theWord);

    welcomePlayer();

    cout << "The jumble is " << jumble;

    string guess = "empty";

    cout << "\n\nYour Guess :";
    cin >> guess;

    while ((guess != theWord) && (guess != "quit")) {

        if (guess == "hint") {
            cout << theHint;
        } else {
            cout << "Sorry, that's not it.";
        }

        cout << "\n\nYour Guess :";
        cin >> guess;

    }

    if (guess == theWord) {
        cout << "\nThat's it! You guessed it!\n\n";
    }

    cout << "\nThanks!";

    return 0;
}