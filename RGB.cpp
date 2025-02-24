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

void printColor(RGB color) {
    cout << "The color is: " << rgbToString(color) << endl;
}

int main() {

    RGB color1 = RED;
    RGB color2 = GREEN;
    RGB color3 = BLUE;
    
    printColor(color1);
    printColor(color2);
    printColor(color3);

    return 0;

}
