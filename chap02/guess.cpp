// Guess a number

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    const int NUMBER_FOF_TRIES = 10;

    srand(static_cast<unsigned int>(time(0))); // seed

    int randomNumber = rand(); // gens the number

    int myNumber = (randomNumber % 100) + 1; // gen between 1-100

    int guesses = 0;
    bool notGuessed = true;
    int guess;

    while ((guesses < NUMBER_FOF_TRIES) && (notGuessed == true)) {

        cout << "[" << guesses << "] Guess a number : ";
        cin >> guess;

        if (guess == myNumber) {
            cout << "You guessed right on try " << guesses << "!" << endl;
            notGuessed = false;
        } else {
            if (guess < myNumber) {
                cout << "the number is higher." << endl << endl;
            } else {
                cout << "the number is lower." << endl << endl;
            }
        }

        guesses += 1;
    }

    if (notGuessed) {
        cout << "\n\nThe number was : " << myNumber << endl;
    }

    return 0;
}