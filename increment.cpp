/*
 * C++ Increment and Decrement Operations
 * =====================================
 * 
 * This file demonstrates:
 * - Increment (++) and decrement (--) operators
 * - Pass-by-value vs pass-by-reference behavior
 * - How function parameters work with copies
 * 
 * Important Concept: These functions use pass-by-value, meaning they work
 * with COPIES of variables, not the original variables themselves.
 */

#include <iostream>
using namespace std;

/*
 * Function: increment
 * Purpose: Demonstrates increment operation on a COPY of the variable
 * Parameter: int x - This is pass-by-value (no & symbol)
 * 
 * Key Point: This function receives a COPY of the variable, so the
 * original variable in main() remains unchanged!
 */
void increment(int x) {
    x++;  // Increment the COPY by 1
    // This is equivalent to: x = x + 1;
    cout << "Inside increment function - x: " << x << endl;
    
    // When this function ends, the copy is destroyed
    // The original variable in main() is NOT affected
}

/*
 * Function: decrement
 * Purpose: Demonstrates decrement operation on a COPY of the variable
 * Parameter: int x - Pass-by-value (working with a copy)
 */
void decrement(int x) {
    x--;  // Decrement the COPY by 1
    // This is equivalent to: x = x - 1;
    cout << "Inside decrement function - x: " << x << endl;
    
    // Again, original variable remains unchanged
}

int main() {
    // Initialize a variable
    int x = 3;
    cout << "Original value of X: " << x << endl;
    cout << "\n";
    
    // Call increment function
    cout << "Calling increment function..." << endl;
    increment(x);  // Pass x to function (creates a copy)
    cout << "After increment function - X in main: " << x << endl;
    cout << "\n";
    
    // Call decrement function  
    cout << "Calling decrement function..." << endl;
    decrement(x);  // Pass x to function (creates a copy)
    cout << "After decrement function - X in main: " << x << endl;
    
    /*
     * Expected Output Explanation:
     * - X starts as 3
     * - increment() receives a copy, increments it to 4, prints 4
     * - But original X in main() is still 3
     * - decrement() receives a copy, decrements it to 2, prints 2  
     * - But original X in main() is still 3
     * 
     * Key Learning Points:
     * 1. Pass-by-value creates copies - original variables unchanged
     * 2. To modify original variables, use pass-by-reference (int &x)
     * 3. ++ and -- operators increment/decrement by 1
     * 4. Functions can work with local copies without affecting main variables
     * 
     * Compare this with functions.cpp which uses pass-by-reference (&)!
     */
    
    return 0;
}