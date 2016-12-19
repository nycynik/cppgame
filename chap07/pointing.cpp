// Pointers
//
// & == address of
// * == points to
// So.. int *p = 0; means set a int pointer to null.  And to find its value, ask for p (it will be 0) and to find the
// thing it points to, use *p to see what the int that it is point to (in this case that would be a problem, since
// it is null.)

#include <iostream>
#include <string>

using namespace std;

int main() {

    int* pAPointer; // pointer with * on it :)
    int* pScore = NULL;

    int score = 1000;
    pScore = &score;

    cout << "&score = " << &score << endl;
    cout << "pScore = " << pScore << endl;
    cout << "score = " << score << endl;
    cout << "*pScore = " << pScore << endl;

    score += 500;

    cout << "&score = " << &score << endl;
    cout << "pScore = " << pScore << endl;
    cout << "score = " << score << endl;
    cout << "*pScore = " << pScore << endl;

    pScore += 500;


    cout << "&score = " << &score << endl;
    cout << "pScore = " << pScore << endl;
    cout << "score = " << score << endl;
    cout << "*pScore = " << pScore << endl;

    cout << "objects";

    string str = "Score";
    string* pStr = &str;
    cout << "String = " << str;
    cout << "String = " << *pStr;
    cout << "Dereferencing and calling member " << (*pStr).size() << " is the size";
}