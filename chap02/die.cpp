// Die Roller
// random numbers

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(static_cast<unsigned int>(time(0))); // seed

    int randomNumber = rand(); // gens the number

    int die = (randomNumber % 6) + 1; // gen between 1-6
    cout << "you rolled a : " << die << endl;

    return 0;
}