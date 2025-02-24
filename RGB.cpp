#include <iostream>
using namespace std;

enum RGB {
    RED,
    GREEN,
    BLUE
};

string rgbToString(RGB color) {
    switch (color) {
        case RED: return "Red";
        case GREEN: return "Green";
        case BLUE: return "Blue";
        default: return "Unknown";
    }
}

int main() {

    enum RGB color = RED;
    cout << "The color is: " << rgbToString(color) << endl;

    }
