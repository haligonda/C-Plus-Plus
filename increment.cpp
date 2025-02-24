#include <iostream>
using namespace std;

void increment(int x) {

    x++;
    cout << "Incrementing x: " << x << endl;

}

void decrement(int x) {

    x--;
    cout << "Decrementing x: " << x << endl;

}

int main() {
    
    int x = 3;
    cout << "X: " << x << endl;
    increment(x);
    decrement(x);

}