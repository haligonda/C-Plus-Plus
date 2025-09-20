/*
 * C++ Enumerations (enums)
 * ========================
 * 
 * This file demonstrates enumeration concepts in C++:
 * - What enums are and why they're useful
 * - Default enum values (starting from 0)
 * - Custom enum values
 * - Auto-incrementing enum values
 * - Scope and naming of enums
 * 
 * Key Concept: Enums create named constants that make code more readable
 * and maintainable. Instead of using magic numbers, you use meaningful names.
 */

#include <iostream>
using namespace std;

/*
 * Function: set_val
 * Purpose: Demonstrates enums with custom values
 * 
 * Shows how to assign specific values to enum constants and how
 * the compiler handles them internally.
 */
void set_val() {
    cout << "=== Enums with Custom Values ===" << endl;
    
    /*
     * Define an enum with custom values
     * 
     * Instead of the default 0, 1, 2... we assign specific values
     * This is useful when the numeric values have specific meaning
     * (like error codes, priority levels, etc.)
     */
    enum Level {
        LOW = 25,   // Explicitly set to 25
        MID = 50,   // Explicitly set to 50
        HIGH = 75   // Explicitly set to 75
    };

    // Create variables of the enum type
    enum Level low = LOW;     // low = 25
    enum Level mid = MID;     // mid = 50
    enum Level high = HIGH;   // high = 75

    cout << "Custom enum values:" << endl;
    cout << "LOW = " << low << " (set to 25)" << endl;
    cout << "MID = " << mid << " (set to 50)" << endl;
    cout << "HIGH = " << high << " (set to 75)" << endl;
    cout << endl;
    
    /*
     * Why use custom values?
     * - When values have specific meaning (HTTP status codes: 200, 404, 500)
     * - When interfacing with external systems that expect specific numbers
     * - When you want gaps between values for future expansion
     * - When the numeric value itself is significant
     */
}

/*
 * Function: enumerate
 * Purpose: Demonstrates auto-incrementing enum behavior
 * 
 * Shows how setting one value affects subsequent values in the enum
 */
void enumerate() {
    cout << "=== Auto-incrementing Enum Values ===" << endl;
    
    /*
     * When you set one value, subsequent values auto-increment from there
     * 
     * In this example:
     * - First is explicitly set to 4
     * - Second becomes 5 (4 + 1) automatically
     * - Third becomes 6 (5 + 1) automatically
     */
    enum start {
        First = 4,  // Explicitly set to 4
        Second,     // Automatically becomes 5
        Third       // Automatically becomes 6
    };
    
    cout << "Auto-incrementing enum:" << endl;
    cout << "First = " << First << " (explicitly set to 4)" << endl;
    cout << "Second = " << Second << " (auto-incremented to 5)" << endl;
    cout << "Third = " << Third << " (auto-incremented to 6)" << endl;
    cout << endl;
}

int main() {
    cout << "=== C++ Enumerations Demonstration ===" << endl;
    cout << endl;
    
    /*
     * Basic Enum Example
     * ==================
     * 
     * Default behavior: enum values start from 0 and increment by 1
     * This is the most common way to use enums
     */
    cout << "=== Default Enum Values (starting from 0) ===" << endl;
    
    /*
     * Define a simple enum for difficulty levels
     * Since no values are specified, they default to 0, 1, 2
     */
    enum Level {
        LOW,    // 0 (default starting value)
        MID,    // 1 (previous + 1)
        HIGH    // 2 (previous + 1)
    };

    // Create enum variables
    enum Level zero = LOW;   // zero = 0
    enum Level one = MID;    // one = 1
    enum Level two = HIGH;   // two = 2

    cout << "Default enum values:" << endl;
    cout << "LOW = " << zero << " (default: 0)" << endl;
    cout << "MID = " << one << " (default: 1)" << endl;
    cout << "HIGH = " << two << " (default: 2)" << endl;
    cout << endl;

    // Call demonstration functions
    set_val();      // Show custom enum values
    enumerate();    // Show auto-incrementing behavior
    
    /*
     * Advanced Enum Usage Examples
     */
    cout << "=== Practical Enum Examples ===" << endl;
    
    // Example 1: Days of the week
    enum DayOfWeek {
        SUNDAY,     // 0
        MONDAY,     // 1
        TUESDAY,    // 2
        WEDNESDAY,  // 3
        THURSDAY,   // 4
        FRIDAY,     // 5
        SATURDAY    // 6
    };
    
    DayOfWeek today = FRIDAY;
    cout << "Today is day number: " << today << " (FRIDAY)" << endl;
    
    // Example 2: HTTP Status Codes (with meaningful values)
    enum HttpStatus {
        OK = 200,
        NOT_FOUND = 404,
        SERVER_ERROR = 500
    };
    
    HttpStatus response = OK;
    cout << "HTTP Response: " << response << " (OK)" << endl;
    cout << endl;
    
    /*
     * Key Learning Points:
     * 
     * 1. Default Behavior:
     *    - Enum values start at 0 and increment by 1
     *    - First value is 0, second is 1, third is 2, etc.
     * 
     * 2. Custom Values:
     *    - You can assign specific values to enum constants
     *    - Useful when numbers have specific meaning
     * 
     * 3. Auto-increment:
     *    - If you set one value, subsequent values continue from there
     *    - Only need to set values where you want to break the sequence
     * 
     * 4. Benefits of Enums:
     *    - Replace magic numbers with meaningful names
     *    - Make code more readable and maintainable
     *    - Catch errors at compile time
     *    - Group related constants together
     * 
     * 5. Common Use Cases:
     *    - State machines (IDLE, RUNNING, STOPPED)
     *    - Priority levels (LOW, MEDIUM, HIGH)
     *    - Error codes, status codes
     *    - Menu options, game states
     *    - Days, months, directions
     * 
     * 6. Best Practices:
     *    - Use ALL_CAPS or PascalCase for enum values
     *    - Choose meaningful names that describe the purpose
     *    - Group related constants in the same enum
     *    - Consider using enum class (C++11) for better type safety
     * 
     * Note: In modern C++, prefer 'enum class' for stronger type safety:
     * enum class Color { RED, GREEN, BLUE };
     * Color c = Color::RED;  // Must use scope resolution
     */
    
    return 0;
}