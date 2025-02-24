#include <iostream>
using namespace std;

int main() {

    enum RGB {
        RED,
        GREEN,
        BLUE
    };

    enum RGB color = RED;

    switch (color) {

        case(RED):
            cout << "Red";
            break;
        
        case(GREEN):
            cout << "Green";
            break;

        case(BLUE):
            cout << "Blue";
            break;

    }

}