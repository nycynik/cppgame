// jumble
// word jumble game

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cctype>
#include <vector>

using namespace std;

int main() {

    const int MAX_WRONG = 8;
    vector<string> words;
    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("COMPUTER");
    words.push_back("FICTION");

    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());
    const string THE_WORD = words[0];
    int wrong = 0;
    string soFar(THE_WORD.size(), '_');
    string used = "";

    cout << "Welcome to Hangman.  Good Luck!\n";

    // MAiN
    while ((wrong < MAX_WRONG) && (soFar != THE_WORD)) {

        cout << "\n\nYou have " << (MAX_WRONG - wrong) << " incorrect gueses left.\n";
        cout << "\nYou've used the following letters:\n" << used << endl;
        cout << "\nSo far, the word is:\n" << soFar << endl;

        char guess;
        cout << "\n\nEnter your guess: ";
        guess = toupper(guess);
        while (used.find(guess) != string::npos) {
            cout << "\nYou've already guesed " << guess << endl;
            cout << "Enter your guess :";
            cin >> guess;
            guess = toupper(guess);
        }

        used += guess;

        if (THE_WORD.find(guess) != string::npos) {

            cout << "That's fight! " << guess << " is in the word!!\n";

            for (int i=0; i < THE_WORD.length(); ++i) {

                if (THE_WORD[i] == guess) {
                    soFar[i] = guess;
                }
            }
        } else {

            cout << "Nope, try again. " << guess << " is not in the word.";
            ++wrong;
        }
    }

    // game over
    if (wrong == MAX_WRONG) {
        cout << "\nYou've did not make it out.";
    } else {
        cout << "\nYou guessed it!";
    }

    // reveal
    cout << "\nThe word was " << THE_WORD << endl;

    return 0;
}