/*
 * C++ Advanced Enums with Functions - RGB Color Example
 * =====================================================
 * 
 * This file demonstrates advanced enum usage with:
 * - Enums representing real-world concepts (RGB colors)
 * - Functions that work with enum parameters
 * - Converting enum values to meaningful strings
 * - Switch statements with enums
 * - Practical applications of enums in programming
 * 
 * Key Concept: Enums combined with functions create clean, maintainable
 * code that's easy to understand and extend.
 */

#include <iostream>  // For input/output operations
#include <string>    // For string class
using namespace std;

/*
 * RGB Color Enumeration
 * =====================
 * 
 * Represents the three primary colors in the RGB color model.
 * RGB stands for Red, Green, Blue - the three colors of light that
 * can be combined to create all other colors on screens and displays.
 */
enum RGB {
    RED,    // 0 - Represents red color
    GREEN,  // 1 - Represents green color
    BLUE    // 2 - Represents blue color
};

/*
 * Function: rgbToString
 * Purpose: Converts an RGB enum value to a human-readable string
 * Parameter: RGB color - The color enum value to convert
 * Returns: string - The name of the color as a string
 * 
 * This function demonstrates how to use switch statements with enums
 * to create clean, readable code that maps enum values to actions.
 */
string rgbToString(RGB color) {
    /*
     * Switch statement with enum
     * =========================
     * 
     * Switch statements work perfectly with enums because:
     * - Enum values are compile-time constants
     * - Compiler can check if all cases are handled
     * - More efficient than if-else chains for multiple values
     * - Makes the code more readable and maintainable
     */
    switch (color) {
        case RED:
            return "Red";
        case GREEN:
            return "Green";
        case BLUE:
            return "Blue";
        default:
            // Good practice: always include a default case
            // This handles any unexpected values and prevents crashes
            return "Unknown";
    }
}

/*
 * Function: printColor
 * Purpose: Displays color information in a formatted way
 * Parameter: RGB color - The color to display
 * 
 * This function shows how to use enums as function parameters
 * and demonstrates the combination of enums with helper functions.
 */
void printColor(RGB color) {
    // Use our helper function to get the string representation
    string colorName = rgbToString(color);
    
    cout << "The color is: " << colorName << endl;
    cout << "Enum value: " << color << endl;
    cout << "--------------------" << endl;
}

/*
 * Function: demonstrateColorMixing
 * Purpose: Shows practical application of RGB enum in color mixing
 * 
 * Demonstrates how enums can be used in real-world applications
 * like graphics programming, game development, or UI design.
 */
void demonstrateColorMixing() {
    cout << "=== RGB Color Mixing Information ===" << endl;
    
    RGB colors[] = {RED, GREEN, BLUE};
    string descriptions[] = {
        "Red light - Wavelength ~700nm, warm color, associated with energy and passion",
        "Green light - Wavelength ~550nm, most visible to human eye, associated with nature",
        "Blue light - Wavelength ~450nm, cool color, associated with calm and stability"
    };
    
    for (int i = 0; i < 3; i++) {
        cout << rgbToString(colors[i]) << ": " << descriptions[i] << endl;
    }
    
    cout << "\nColor Combinations:" << endl;
    cout << "Red + Green = Yellow light" << endl;
    cout << "Red + Blue = Magenta light" << endl;
    cout << "Green + Blue = Cyan light" << endl;
    cout << "Red + Green + Blue = White light" << endl;
    cout << endl;
}

int main() {
    cout << "=== Advanced RGB Enum Demonstration ===" << endl;
    cout << endl;
    
    /*
     * Create RGB color variables
     * These variables can only hold the values defined in our RGB enum
     * This provides type safety - you can't accidentally assign invalid values
     */
    RGB color1 = RED;    // Primary red
    RGB color2 = GREEN;  // Primary green
    RGB color3 = BLUE;   // Primary blue
    
    cout << "=== Basic Color Display ===" << endl;
    // Use our function to display each color
    printColor(color1);
    printColor(color2);
    printColor(color3);
    
    /*
     * Demonstrate enum values and string conversion
     */
    cout << "=== Enum Values and String Conversion ===" << endl;
    cout << "RGB enum values are stored as integers:" << endl;
    cout << "RED = " << RED << " -> \"" << rgbToString(RED) << "\"" << endl;
    cout << "GREEN = " << GREEN << " -> \"" << rgbToString(GREEN) << "\"" << endl;
    cout << "BLUE = " << BLUE << " -> \"" << rgbToString(BLUE) << "\"" << endl;
    cout << endl;
    
    /*
     * Practical application demonstration
     */
    demonstrateColorMixing();
    
    /*
     * Demonstrate enum in arrays and loops
     */
    cout << "=== Using Enums in Arrays and Loops ===" << endl;
    RGB primaryColors[] = {RED, GREEN, BLUE};
    
    cout << "Primary colors in RGB model:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << (i + 1) << ". " << rgbToString(primaryColors[i]) 
             << " (value: " << primaryColors[i] << ")" << endl;
    }
    cout << endl;
    
    /*
     * Show how enums prevent errors
     */
    cout << "=== Type Safety Example ===" << endl;
    RGB userChoice = GREEN;  // This is valid
    // RGB invalidChoice = 999;  // This would cause a compiler warning/error
    // RGB invalidChoice = "purple";  // This would cause a compiler error
    
    cout << "Selected color: " << rgbToString(userChoice) << endl;
    cout << "Type safety prevents invalid color assignments!" << endl;
    
    /*
     * Key Learning Points:
     * 
     * 1. Enums with Functions:
     *    - Enums work well as function parameters and return values
     *    - Switch statements provide clean mapping from enums to actions
     *    - Helper functions can convert enums to user-friendly representations
     * 
     * 2. Type Safety:
     *    - Enums prevent assignment of invalid values
     *    - Compiler catches errors at compile time, not runtime
     *    - Makes code more robust and less prone to bugs
     * 
     * 3. Readability:
     *    - enum RGB { RED, GREEN, BLUE } is much clearer than using 0, 1, 2
     *    - Code self-documents what values are valid
     *    - Function signatures become more meaningful
     * 
     * 4. Maintainability:
     *    - Adding new colors only requires updating the enum and switch
     *    - Changes are centralized and less error-prone
     *    - Compiler helps ensure all cases are handled
     * 
     * 5. Real-world Applications:
     *    - Graphics programming (colors, rendering modes)
     *    - Game development (player states, game modes)
     *    - User interfaces (button states, menu options)
     *    - Network programming (connection states, error codes)
     *    - File systems (file types, permissions)
     * 
     * 6. Best Practices:
     *    - Always include a default case in switch statements
     *    - Use meaningful names that describe the concept
     *    - Group related constants in the same enum
     *    - Consider using enum class for stronger type safety (C++11+)
     *    - Document the purpose and valid range of enum values
     */
    
    return 0;
}
