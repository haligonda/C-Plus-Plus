/*
 * C++ Functions and Pass-by-Reference Examples
 * ============================================
 * 
 * This file demonstrates key function concepts in C++:
 * - Function declarations and definitions
 * - Pass-by-reference using & operator
 * - String manipulation functions
 * - Numeric operations on variables
 * - String reversal algorithm
 * 
 * Key Concept: Pass-by-reference allows functions to modify the original
 * variables passed to them, not just copies.
 */

#include <string>    // For string class
#include <iostream>  // For input/output operations
using namespace std;

/*
 * Function: modifyStr
 * Purpose: Demonstrates string modification using pass-by-reference
 * Parameter: string &s - Reference to a string (can modify original)
 * The & symbol means we're working with the actual string, not a copy
 */
void modifyStr(string &s) {
    // Append "world" to the existing string
    // Since we're using reference, this modifies the original string
    s += "world";
    // This is equivalent to: s = s + "world";
}

/*
 * Function: swapNums
 * Purpose: Swaps the values of two integer variables
 * Parameters: int &x, int &y - References to integers
 * This is a classic example of why pass-by-reference is useful
 */
void swapNums(int &x, int &y) {
    // Classic swap algorithm using a temporary variable
    int z = x;  // Store x's value temporarily
    x = y;      // Put y's value into x
    y = z;      // Put original x's value (stored in z) into y
    
    // After this function, the original variables will have swapped values
}

/*
 * Function: increOne
 * Purpose: Increment a number by 1
 * Parameter: int &x - Reference to integer
 * Modifies the original variable
 */
void increOne(int &x) {
    x = x + 1;  // Add 1 to the original variable
    // Could also write as: x++; or ++x;
}

/*
 * Function: reverseString
 * Purpose: Reverses a string in-place using character swapping
 * Parameter: string &s - Reference to string to be reversed
 * Algorithm: Swap characters from start and end, working towards middle
 */
void reverseString(string &s) {
    int len = s.length();  // Get string length
    
    // Loop through first half of string
    // We only need to go to len/2 because we're swapping pairs
    for (int i = 0; i < len / 2; ++i) {
        // Swap character at position i with character at position (len-i-1)
        char temp = s[i];                // Store character temporarily
        s[i] = s[len - i - 1];          // Move end character to start
        s[len - i - 1] = temp;          // Move start character to end
    }
    
    // Display the reversed string (this function both modifies AND prints)
    cout << "Reversed String: " << s << endl;
}

/*
 * Main Function: Demonstrates all the functions above
 * Shows how pass-by-reference works in practice
 */
int main() {
    // Test swapping functionality
    int a = 3;
    int b = 6;
    cout << "Before swapping - A: " << a << "\t" << "B: " << b << endl;
    
    swapNums(a, b);  // Pass variables by reference
    
    cout << "After swapping - A: " << a << "\t" << "B: " << b << endl;
    cout << "\n";
    
    // Test string modification
    string greet = "hello, ";
    cout << "Before modification: " << greet << endl;
    modifyStr(greet);  // Function will append "world"
    cout << "After modification: " << greet << endl;
    cout << "\n";
    
    // Test increment function
    cout << "Before increment - A: " << a << endl;
    increOne(a);  // Increment 'a' by 1
    cout << "After increment - A: " << a << endl;
    cout << "\n";
    
    // Test string reversal
    string s = "Stop Everything";
    cout << "Original String: " << s << endl;
    reverseString(s);  // This will print the reversed string AND modify 's'
    cout << "Variable after reversal: " << s << endl;
    
    /*
     * Key Learning Points:
     * 1. & in parameter means pass-by-reference (modifies original)
     * 2. Without &, functions work with copies (can't modify original)
     * 3. Pass-by-reference is essential for functions that need to modify inputs
     * 4. String reversal demonstrates array/string indexing and algorithms
     * 5. Functions can both modify variables AND perform other actions (like printing)
     */
    
    return 0;
}