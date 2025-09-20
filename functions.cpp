/*
 * FUNCTIONS IN C++ - Learn Function Fundamentals! 🚀
 * 
 * This program teaches you:
 * 1. How to write and use functions
 * 2. The difference between pass by value and pass by reference
 * 3. How functions can modify variables
 * 4. String manipulation using functions
 * 
 * Key Concepts:
 * - void: A function that doesn't return a value
 * - Parameters: Data passed into functions
 * - Reference (&): Allows functions to modify the original variable
 * - Function calls: How to execute functions
 */

#include <string>    // For using string data type
#include <iostream>  // For input/output operations (cout, endl)
using namespace std; // So we don't have to write std::cout every time

/*
 * FUNCTION 1: modifyStr - Demonstrates string modification
 * 
 * Purpose: Add "world" to the end of any string
 * Parameter: string &s - The & means "pass by reference" 
 *                       (we can modify the original string)
 * Return: void (nothing returned)
 */
void modifyStr(string &originalString) {
    // The += operator adds text to the end of a string
    originalString += "world";
    
    // Note: Because we used &, this changes the original string,
    // not just a copy of it!
}

/*
 * FUNCTION 2: swapNums - Swap two numbers
 * 
 * Purpose: Exchange the values of two integers
 * Parameters: int &x, int &y - Both passed by reference so we can modify them
 * Return: void (nothing returned)
 */
void swapNums(int &firstNumber, int &secondNumber) {
    // To swap two values, we need a temporary variable
    // Think of it like switching drinks between two cups - you need a third cup!
    
    int temporaryHolder = firstNumber;    // Save first number in temp
    firstNumber = secondNumber;           // Put second number in first position
    secondNumber = temporaryHolder;       // Put original first number in second position
    
    // Now the values are swapped!
}

/*
 * FUNCTION 3: increOne - Increment a number by 1
 * 
 * Purpose: Add 1 to any integer
 * Parameter: int &x - Passed by reference to modify the original
 * Return: void (nothing returned)
 */
void increOne(int &number) {
    // This adds 1 to the number
    number = number + 1;
    
    // Alternative ways to write this:
    // number += 1;  (same as number = number + 1)
    // number++;     (increment operator - adds 1)
}

/*
 * FUNCTION 4: reverseString - Reverse any string
 * 
 * Purpose: Reverse the order of characters in a string
 * Parameter: string &s - The string to reverse (by reference)
 * Return: void (nothing returned)
 */
void reverseString(string &textToReverse) {
    // Get the length of the string (how many characters it has)
    int stringLength = textToReverse.length();
    
    // We only need to swap half the characters
    // Why? Because when we swap character 1 with the last,
    // we've already handled both positions!
    for (int i = 0; i < stringLength / 2; ++i) {
        // Save the character at position i
        char temporaryCharacter = textToReverse[i];
        
        // Move the character from the opposite end to position i
        textToReverse[i] = textToReverse[stringLength - i - 1];
        
        // Put the saved character at the opposite end
        textToReverse[stringLength - i - 1] = temporaryCharacter;
    }
    
    // Let the user know what happened
    cout << "✅ String has been reversed!" << endl;
}

/*
 * MAIN FUNCTION - The program starts here!
 * 
 * This is where we test all our functions and see them in action.
 */
int main() {
    cout << "=== WELCOME TO C++ FUNCTIONS DEMO! ===" << endl;
    cout << "Let's see how functions work with different examples." << endl;
    cout << endl;

    // ===========================================
    // EXAMPLE 1: Testing the swapNums function
    // ===========================================
    cout << "📊 EXAMPLE 1: Swapping Two Numbers" << endl;
    
    // Create two integer variables
    int firstNum = 3;
    int secondNum = 6;
    
    // Show the original values
    cout << "Before swapping:" << endl;
    cout << "   First number: " << firstNum << endl;
    cout << "   Second number: " << secondNum << endl;

    // Call our swap function - this will change the values!
    swapNums(firstNum, secondNum);

    // Show the values after swapping
    cout << "After swapping:" << endl;
    cout << "   First number: " << firstNum << endl;
    cout << "   Second number: " << secondNum << endl;
    cout << endl;

    // ===========================================
    // EXAMPLE 2: Testing the modifyStr function
    // ===========================================
    cout << "📝 EXAMPLE 2: Modifying a String" << endl;
    
    // Create a string variable
    string greeting = "Hello, ";
    cout << "Original string: \"" << greeting << "\"" << endl;
    
    // Call our string modification function
    modifyStr(greeting);
    
    // Show the modified string
    cout << "After modification: \"" << greeting << "\"" << endl;
    cout << endl;

    // ===========================================
    // EXAMPLE 3: Testing the increOne function
    // ===========================================
    cout << "🔢 EXAMPLE 3: Incrementing a Number" << endl;
    
    cout << "Before increment: " << firstNum << endl;
    
    // Call our increment function
    increOne(firstNum);
    
    cout << "After increment: " << firstNum << endl;
    cout << endl;

    // ===========================================
    // EXAMPLE 4: Testing the reverseString function
    // ===========================================
    cout << "🔄 EXAMPLE 4: Reversing a String" << endl;
    
    // Create a string to reverse
    string message = "Stop Everything";
    cout << "Original string: \"" << message << "\"" << endl;
    
    // Call our reverse function
    reverseString(message);
    
    cout << "Reversed string: \"" << message << "\"" << endl;
    cout << endl;
    
    cout << "🎉 All function examples completed successfully!" << endl;
    cout << "Try modifying the code to experiment with different values!" << endl;

    return 0; // Tell the system the program ended successfully
}