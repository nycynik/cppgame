// a few examples of swaps

#include <iostream>
#include <string>

using namespace std;

void passByValueSoBadSwap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void passByRefSoGoodSwap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void passByPtrSoGoodSwap(int* const x, int* const y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {

    int x = 10;
    int y = 20;

    cout << "x: " << x << " y:" << y << endl;

    cout << "pass by value - wont work" << endl;
    passByValueSoBadSwap(x, y);
    cout << "x: " << x << " y:" << y << endl;

    cout << "pass by ref will" << endl;
    passByRefSoGoodSwap(x, y);
    cout << "x: " << x << " y:" << y << endl;

    cout << "pass by ref will" << endl;
    passByPtrSoGoodSwap(&x, &y);
    cout << "x: " << x << " y:" << y << endl;


}