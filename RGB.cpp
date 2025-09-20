// RGB.cpp
// This program demonstrates how to use enums in C++
// to represent colors and print their names using functions.

#include <iostream> // Include the input/output stream library
using namespace std; // Use the standard namespace

// Define an enum called RGB to represent color values
enum RGB {
    RED,    // Represents the color Red (internally 0)
    GREEN,  // Represents the color Green (internally 1)
    BLUE    // Represents the color Blue (internally 2)
};

// Function to convert an RGB enum value to its string name
string rgbToString(RGB color) {
    // Use a switch statement to match the input color
    switch (color) {
        case RED:   // If color is RED
            return "Red";
        case GREEN: // If color is GREEN
            return "Green";
        case BLUE:  // If color is BLUE
            return "Blue";
        default:    // If color does not match any known value
            return "Unknown";
    }
}

// Function to print the name of the color
void printColor(RGB color) {
    // Print the color name to the console
    cout << "The color is: " << rgbToString(color) << endl;
}

// Main function: Entry point of the program
int main() {
    // Create variables of type RGB and assign colors
    RGB color1 = RED;    // Assign RED to color1
    RGB color2 = GREEN;  // Assign GREEN to color2
    RGB color3 = BLUE;   // Assign BLUE to color3

    // Print the names of each color using printColor function
    printColor(color1);  // Output: The color is: Red
    printColor(color2);  // Output: The color is: Green
    printColor(color3);  // Output: The color is: Blue

    return 0; // Return 0 to indicate successful execution
}
