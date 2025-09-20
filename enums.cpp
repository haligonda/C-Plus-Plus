/*
 * ENUMERATIONS (ENUMS) IN C++ 🔢
 * 
 * This program teaches you:
 * 1. What enums are and why they're useful
 * 2. How to create enums with default values
 * 3. How to create enums with custom values
 * 4. How enums make code more readable and maintainable
 * 5. Different ways to use enums in your programs
 * 
 * Key Concepts:
 * - enum: A way to create named constants
 * - Enumeration: A list of named values
 * - Default values: Automatically assigned (0, 1, 2, ...)
 * - Custom values: Values you specifically assign
 * - Constants: Values that don't change during program execution
 * 
 * Think of enums like this:
 * Instead of remembering that difficulty levels are 1, 2, 3
 * You can use EASY, MEDIUM, HARD - much clearer!
 */

#include <iostream>
using namespace std;

/*
 * FUNCTION 1: demonstrateDefaultEnums
 * Shows how enums work with automatic numbering
 */
void demonstrateDefaultEnums() {
    cout << "📊 EXAMPLE 1: Default Enum Values" << endl;
    cout << "When you don't specify values, C++ assigns them automatically:" << endl;
    cout << endl;
    
    // Create an enum without specifying values
    // C++ automatically assigns: LOW=0, MID=1, HIGH=2
    enum Level {
        LOW,    // Automatically becomes 0
        MID,    // Automatically becomes 1  
        HIGH    // Automatically becomes 2
    };
    
    cout << "🔍 Enum definition:" << endl;
    cout << "   enum Level { LOW, MID, HIGH };" << endl;
    cout << "   💡 C++ automatically assigns values starting from 0" << endl;
    cout << endl;
    
    // Create variables using the enum
    enum Level beginnerLevel = LOW;
    enum Level intermediateLevel = MID;
    enum Level expertLevel = HIGH;
    
    cout << "📝 Creating enum variables:" << endl;
    cout << "   enum Level beginnerLevel = LOW;" << endl;
    cout << "   enum Level intermediateLevel = MID;" << endl;
    cout << "   enum Level expertLevel = HIGH;" << endl;
    cout << endl;
    
    cout << "🔍 Actual values stored:" << endl;
    cout << "   beginnerLevel (LOW) = " << beginnerLevel << endl;
    cout << "   intermediateLevel (MID) = " << intermediateLevel << endl;
    cout << "   expertLevel (HIGH) = " << expertLevel << endl;
    cout << "   💡 Notice: LOW=0, MID=1, HIGH=2" << endl;
    cout << endl;
    
    cout << "✅ Default enum demonstration complete!" << endl;
    cout << endl;
}

/*
 * FUNCTION 2: demonstrateCustomEnums
 * Shows how to assign custom values to enums  
 */
void demonstrateCustomEnums() {
    cout << "📊 EXAMPLE 2: Custom Enum Values" << endl;
    cout << "You can assign your own values to enum constants:" << endl;
    cout << endl;
    
    // Create an enum with custom values
    enum Level {
        LOW = 25,   // Specifically set to 25
        MID = 50,   // Specifically set to 50
        HIGH = 75   // Specifically set to 75
    };
    
    cout << "🔍 Enum definition with custom values:" << endl;
    cout << "   enum Level {" << endl;
    cout << "       LOW = 25," << endl;
    cout << "       MID = 50," << endl;  
    cout << "       HIGH = 75" << endl;
    cout << "   };" << endl;
    cout << "   💡 Now we can use meaningful values like percentages!" << endl;
    cout << endl;
    
    // Create variables using the custom enum
    enum Level lowScore = LOW;
    enum Level midScore = MID;
    enum Level highScore = HIGH;
    
    cout << "📝 Creating enum variables:" << endl;
    cout << "   enum Level lowScore = LOW;" << endl;
    cout << "   enum Level midScore = MID;" << endl;
    cout << "   enum Level highScore = HIGH;" << endl;
    cout << endl;
    
    cout << "🔍 Custom values in action:" << endl;
    cout << "   lowScore (LOW) = " << lowScore << "%" << endl;
    cout << "   midScore (MID) = " << midScore << "%" << endl;
    cout << "   highScore (HIGH) = " << highScore << "%" << endl;
    cout << "   💡 Much more meaningful than 0, 1, 2!" << endl;
    cout << endl;
    
    cout << "✅ Custom enum demonstration complete!" << endl;
    cout << endl;
}

/*
 * FUNCTION 3: demonstratePartialCustomEnums
 * Shows what happens when you only set some values
 */
void demonstratePartialCustomEnums() {
    cout << "📊 EXAMPLE 3: Partial Custom Values" << endl;
    cout << "You can set only some values - C++ fills in the rest:" << endl;
    cout << endl;
    
    // Create an enum with only the first value set
    enum StartingEnum {
        First = 4,   // Set to 4
        Second,      // Automatically becomes 5 (4 + 1)
        Third        // Automatically becomes 6 (5 + 1)
    };
    
    cout << "🔍 Enum definition:" << endl;
    cout << "   enum StartingEnum {" << endl;
    cout << "       First = 4,    // Explicitly set to 4" << endl;
    cout << "       Second,       // Automatically becomes 5" << endl;
    cout << "       Third         // Automatically becomes 6" << endl;
    cout << "   };" << endl;
    cout << "   💡 C++ continues counting from your custom value!" << endl;
    cout << endl;
    
    // Create variables to test
    enum StartingEnum firstValue = First;
    enum StartingEnum secondValue = Second;  
    enum StartingEnum thirdValue = Third;
    
    cout << "🔍 Resulting values:" << endl;
    cout << "   First = " << firstValue << endl;
    cout << "   Second = " << secondValue << " (automatically assigned)" << endl;
    cout << "   Third = " << thirdValue << " (automatically assigned)" << endl;
    cout << "   💡 Starting from 4, C++ counted up automatically!" << endl;
    cout << endl;
    
    cout << "✅ Partial custom enum demonstration complete!" << endl;
    cout << endl;
}

/*
 * FUNCTION 4: demonstratePracticalUse
 * Shows a practical example of when enums are useful
 */
void demonstratePracticalUse() {
    cout << "📊 EXAMPLE 4: Practical Use Case" << endl;
    cout << "Let's see how enums make code clearer and safer:" << endl;
    cout << endl;
    
    // Define traffic light states
    enum TrafficLight {
        RED = 0,
        YELLOW = 1,
        GREEN = 2
    };
    
    cout << "🚦 Traffic Light System Example:" << endl;
    cout << "   enum TrafficLight { RED = 0, YELLOW = 1, GREEN = 2 };" << endl;
    cout << endl;
    
    // Demonstrate usage
    enum TrafficLight currentLight = RED;
    
    cout << "🔍 Current traffic light state:" << endl;
    cout << "   currentLight = " << currentLight;
    
    // Make it more readable
    if (currentLight == RED) {
        cout << " (RED - STOP!)" << endl;
    } else if (currentLight == YELLOW) {
        cout << " (YELLOW - CAUTION!)" << endl;
    } else if (currentLight == GREEN) {
        cout << " (GREEN - GO!)" << endl;
    }
    
    cout << "   💡 Using RED instead of 0 makes the code much clearer!" << endl;
    cout << endl;
    
    // Show the advantage over magic numbers
    cout << "🤔 Compare these two approaches:" << endl;
    cout << "   ❌ Bad:  if (light == 0)    // What does 0 mean?" << endl;
    cout << "   ✅ Good: if (light == RED)  // Crystal clear meaning!" << endl;
    cout << endl;
    
    cout << "✅ Practical use case demonstration complete!" << endl;
    cout << endl;
}

/*
 * MAIN FUNCTION - The program starts here!
 */
int main() {
    cout << "=== ENUMERATIONS (ENUMS) IN C++ ===" << endl;
    cout << "Learn how to create named constants for cleaner code!" << endl;
    cout << endl;
    
    // Run all demonstrations
    demonstrateDefaultEnums();
    cout << "===========================================" << endl;
    cout << endl;
    
    demonstrateCustomEnums();
    cout << "===========================================" << endl;
    cout << endl;
    
    demonstratePartialCustomEnums();
    cout << "===========================================" << endl;
    cout << endl;
    
    demonstratePracticalUse();
    cout << "===========================================" << endl;
    cout << endl;
    
    // Summary section
    cout << "📚 SUMMARY - What You Learned:" << endl;
    cout << "1. Enums create named constants instead of magic numbers" << endl;
    cout << "2. Default enums automatically assign values: 0, 1, 2, ..." << endl;
    cout << "3. Custom enums let you assign meaningful values" << endl;
    cout << "4. Partial assignment: C++ continues counting from your value" << endl;
    cout << "5. Enums make code more readable and maintainable" << endl;
    cout << endl;
    
    cout << "🔑 ENUM SYNTAX:" << endl;
    cout << "• Basic:     enum Name { VALUE1, VALUE2 };" << endl;
    cout << "• Custom:    enum Name { VALUE1 = 10, VALUE2 = 20 };" << endl;
    cout << "• Usage:     enum Name variable = VALUE1;" << endl;
    cout << "• Access:    cout << variable; (prints the number)" << endl;
    cout << endl;
    
    cout << "💡 WHEN TO USE ENUMS:" << endl;
    cout << "• Traffic light states (RED, YELLOW, GREEN)" << endl;
    cout << "• Game difficulty levels (EASY, MEDIUM, HARD)" << endl;
    cout << "• Days of the week (MONDAY, TUESDAY, ...)" << endl;
    cout << "• Status codes (SUCCESS, ERROR, PENDING)" << endl;
    cout << "• Any time you have a fixed set of related constants" << endl;
    cout << endl;
    
    cout << "✅ ADVANTAGES OF ENUMS:" << endl;
    cout << "• Code is more readable (RED vs 0)" << endl;
    cout << "• Less prone to errors (can't accidentally use wrong number)" << endl;  
    cout << "• Easier to maintain (change values in one place)" << endl;
    cout << "• Self-documenting (the names explain what they represent)" << endl;
    cout << endl;
    
    cout << "🎉 Excellent! You now understand enumerations in C++!" << endl;
    cout << "💡 Try creating your own enum for something meaningful to you!" << endl;
    
    return 0; // Program completed successfully
}