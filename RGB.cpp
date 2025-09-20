/*
 * ENUMS WITH FUNCTIONS IN C++ 🎨
 * 
 * This program teaches you:
 * 1. How to use enums with functions
 * 2. How switch statements work with enums
 * 3. How to convert enum values to strings
 * 4. How to create functions that work with enums
 * 5. Practical applications of enums in real programs
 * 
 * Key Concepts:
 * - enum: Named constants for better code readability
 * - switch: A way to handle multiple possible values
 * - case: Each possible value in a switch statement
 * - default: What happens if no case matches
 * - Function parameters: Passing enums to functions
 * 
 * This example uses RGB colors to show how enums can represent
 * real-world concepts in a clear, understandable way.
 */

#include <iostream>
using namespace std;

/*
 * ENUM DEFINITION: RGB Colors
 * 
 * Instead of remembering that red=0, green=1, blue=2,
 * we can use meaningful names: RED, GREEN, BLUE
 */
enum RGB {
    RED,    // Automatically assigned value 0
    GREEN,  // Automatically assigned value 1  
    BLUE    // Automatically assigned value 2
};

/*
 * FUNCTION 1: rgbToString
 * Converts an RGB enum value to a readable string
 * 
 * Parameter: RGB color - The color enum to convert
 * Return: string - The name of the color
 */
string rgbToString(RGB color) {
    cout << "  🔄 Converting enum value " << color << " to string..." << endl;
    
    // Switch statement - like multiple if-else, but cleaner
    switch (color) {
        case RED:
            cout << "  ✅ Found RED case!" << endl;
            return "Red";
            
        case GREEN:
            cout << "  ✅ Found GREEN case!" << endl;
            return "Green";
            
        case BLUE:
            cout << "  ✅ Found BLUE case!" << endl;
            return "Blue";
            
        default:
            cout << "  ❌ Unknown color - using default case!" << endl;
            return "Unknown";
    }
}

/*
 * FUNCTION 2: printColor
 * Displays color information in a user-friendly way
 * 
 * Parameter: RGB color - The color to display
 * Return: void (nothing)
 */
void printColor(RGB color) {
    cout << "🎨 Color Analysis:" << endl;
    cout << "   Numeric value: " << color << endl;
    cout << "   Color name: " << rgbToString(color) << endl;
    cout << "   Complete message: The color is " << rgbToString(color) << endl;
    cout << endl;
}

/*
 * FUNCTION 3: demonstrateColorMixing
 * Shows how enums can represent real-world concepts
 */
void demonstrateColorMixing() {
    cout << "📊 EXAMPLE: Color Mixing Simulation" << endl;
    cout << "Let's see what happens when we mix colors!" << endl;
    cout << endl;
    
    RGB primaryColor1 = RED;
    RGB primaryColor2 = BLUE;
    
    cout << "🔍 Mixing colors:" << endl;
    cout << "   Primary color 1: " << rgbToString(primaryColor1) << endl;
    cout << "   Primary color 2: " << rgbToString(primaryColor2) << endl;
    
    // Simulate color mixing logic
    if (primaryColor1 == RED && primaryColor2 == BLUE) {
        cout << "   Result: Red + Blue = Purple! 💜" << endl;
    } else if (primaryColor1 == RED && primaryColor2 == GREEN) {
        cout << "   Result: Red + Green = Yellow! 💛" << endl;
    } else if (primaryColor1 == GREEN && primaryColor2 == BLUE) {
        cout << "   Result: Green + Blue = Cyan! 💚" << endl;
    } else {
        cout << "   Result: Same color - no mixing! 🎨" << endl;
    }
    cout << "   💡 Enums make this logic clear and readable!" << endl;
    cout << endl;
}

/*
 * FUNCTION 4: demonstrateSwitchStatement
 * Detailed explanation of how switch statements work
 */
void demonstrateSwitchStatement(RGB color) {
    cout << "📊 SWITCH STATEMENT BREAKDOWN" << endl;
    cout << "Let's see how the switch statement processes RGB::" << rgbToString(color) << endl;
    cout << endl;
    
    cout << "🔍 Switch statement execution:" << endl;
    cout << "   switch(color) {  // color = " << color << endl;
    
    switch (color) {
        case RED:
            cout << "   case RED:        // Checking if " << color << " == " << RED << endl;
            cout << "      ✅ MATCH! Executing RED case" << endl;
            cout << "      Setting RGB values: R=255, G=0, B=0" << endl;
            cout << "      return \"Red\";" << endl;
            cout << "      break;       // Exit switch statement" << endl;
            break;
            
        case GREEN:
            cout << "   case GREEN:      // Checking if " << color << " == " << GREEN << endl;
            cout << "      ✅ MATCH! Executing GREEN case" << endl;
            cout << "      Setting RGB values: R=0, G=255, B=0" << endl;
            cout << "      return \"Green\";" << endl;
            cout << "      break;       // Exit switch statement" << endl;
            break;
            
        case BLUE:
            cout << "   case BLUE:       // Checking if " << color << " == " << BLUE << endl;
            cout << "      ✅ MATCH! Executing BLUE case" << endl;
            cout << "      Setting RGB values: R=0, G=0, B=255" << endl;
            cout << "      return \"Blue\";" << endl;
            cout << "      break;       // Exit switch statement" << endl;
            break;
            
        default:
            cout << "   default:         // No cases matched" << endl;
            cout << "      ❓ This runs if no other case matches" << endl;
            cout << "      return \"Unknown\";" << endl;
            break;
    }
    
    cout << "   }  // End of switch statement" << endl;
    cout << endl;
}

/*
 * MAIN FUNCTION - The program starts here!
 */
int main() {
    cout << "=== ENUMS WITH FUNCTIONS (RGB COLORS) ===" << endl;
    cout << "Learn how enums and switch statements work together!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 1: Basic enum usage with functions
    // =========================================================
    cout << "📊 EXAMPLE 1: Creating RGB Color Variables" << endl;
    cout << "Let's create variables for each primary color:" << endl;
    cout << endl;
    
    RGB primaryRed = RED;
    RGB primaryGreen = GREEN;  
    RGB primaryBlue = BLUE;
    
    cout << "🎨 Primary colors created:" << endl;
    cout << "   RGB primaryRed = RED;     // Value: " << primaryRed << endl;
    cout << "   RGB primaryGreen = GREEN; // Value: " << primaryGreen << endl;
    cout << "   RGB primaryBlue = BLUE;   // Value: " << primaryBlue << endl;
    cout << "   💡 Notice: Each color has a unique numeric value" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 2: Using functions with enums
    // =========================================================  
    cout << "📊 EXAMPLE 2: Functions Working with Enums" << endl;
    cout << "Watch how our functions process each color:" << endl;
    cout << endl;
    
    cout << "🔴 Processing RED:" << endl;
    printColor(primaryRed);
    
    cout << "🟢 Processing GREEN:" << endl;
    printColor(primaryGreen);
    
    cout << "🔵 Processing BLUE:" << endl;
    printColor(primaryBlue);
    
    // =========================================================
    // EXAMPLE 3: Detailed switch statement explanation
    // =========================================================
    cout << "===========================================" << endl;
    cout << "📊 EXAMPLE 3: How Switch Statements Work" << endl;
    cout << "Let's break down the switch statement step by step:" << endl;
    cout << endl;
    
    demonstrateSwitchStatement(GREEN);
    
    // =========================================================
    // EXAMPLE 4: Practical application  
    // =========================================================
    cout << "===========================================" << endl;
    demonstrateColorMixing();
    
    // =========================================================
    // SUMMARY SECTION
    // =========================================================
    cout << "===========================================" << endl;
    cout << "📚 SUMMARY - What You Learned:" << endl;
    cout << "1. Enums can be passed to functions as parameters" << endl;
    cout << "2. Switch statements provide clean multiple-choice logic" << endl;
    cout << "3. Each case in switch handles one enum value" << endl;
    cout << "4. default case handles unexpected values" << endl;
    cout << "5. Functions can convert enums to strings for user output" << endl;
    cout << endl;
    
    cout << "🔑 SWITCH STATEMENT SYNTAX:" << endl;
    cout << "   switch (enumVariable) {" << endl;
    cout << "       case VALUE1:" << endl;
    cout << "           // Code for VALUE1" << endl;
    cout << "           break;" << endl;
    cout << "       case VALUE2:" << endl;
    cout << "           // Code for VALUE2" << endl;
    cout << "           break;" << endl;
    cout << "       default:" << endl;
    cout << "           // Code for any other value" << endl;
    cout << "   }" << endl;
    cout << endl;
    
    cout << "💡 WHY USE SWITCH WITH ENUMS:" << endl;
    cout << "• Cleaner than multiple if-else statements" << endl;
    cout << "• Compiler can optimize switch statements better" << endl;
    cout << "• Easy to add new enum values and cases" << endl;
    cout << "• Very readable and maintainable code" << endl;
    cout << "• Perfect match: enums provide the values, switch handles them" << endl;
    cout << endl;
    
    cout << "⚠️  IMPORTANT REMINDERS:" << endl;
    cout << "• Always include break; after each case (unless intentionally falling through)" << endl;
    cout << "• Consider adding a default case for safety" << endl;
    cout << "• Switch works with integers, chars, and enums" << endl;
    cout << "• Each case must be a constant value (like enum values)" << endl;
    cout << endl;
    
    cout << "🎉 Fantastic! You now understand enums with functions!" << endl;
    cout << "💡 Try creating your own enum with a switch statement!" << endl;
    
    return 0; // Program completed successfully
}
