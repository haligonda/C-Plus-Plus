/*
 * INCREMENT AND DECREMENT OPERATORS IN C++ 🔢
 * 
 * This program teaches you:
 * 1. How increment (++) and decrement (--) operators work
 * 2. The difference between passing by value vs by reference
 * 3. Why the original variable doesn't change with pass by value
 * 4. How to properly modify variables using functions
 * 
 * Key Concepts:
 * - ++: Increment operator (adds 1 to a variable)
 * - --: Decrement operator (subtracts 1 from a variable)
 * - Pass by value: Function gets a COPY of the variable
 * - Pass by reference (&): Function gets the ACTUAL variable
 */

#include <iostream>
using namespace std;

/*
 * FUNCTION 1: increment (Pass by Value)
 * 
 * Purpose: Shows what happens when we pass by VALUE (without &)
 * Parameter: int x - This is just a COPY of the original variable
 * Return: void (nothing returned)
 * 
 * Important: This function will NOT change the original variable!
 */
void increment(int numberCopy) {
    cout << "  📥 Inside increment function:" << endl;
    cout << "     Before incrementing copy: " << numberCopy << endl;
    
    // The ++ operator adds 1 to the variable
    numberCopy++;
    
    cout << "     After incrementing copy: " << numberCopy << endl;
    cout << "  📤 Leaving increment function..." << endl;
    
    // When this function ends, the copy is destroyed
    // The original variable remains unchanged!
}

/*
 * FUNCTION 2: decrement (Pass by Value) 
 * 
 * Purpose: Shows decrement operation with pass by value
 * Parameter: int x - This is just a COPY of the original variable
 * Return: void (nothing returned)
 * 
 * Important: This function will NOT change the original variable!
 */
void decrement(int numberCopy) {
    cout << "  📥 Inside decrement function:" << endl;
    cout << "     Before decrementing copy: " << numberCopy << endl;
    
    // The -- operator subtracts 1 from the variable
    numberCopy--;
    
    cout << "     After decrementing copy: " << numberCopy << endl;
    cout << "  📤 Leaving decrement function..." << endl;
    
    // Again, only the copy changes, not the original!
}

/*
 * FUNCTION 3: incrementByReference (Pass by Reference)
 * 
 * Purpose: Shows how to actually modify the original variable
 * Parameter: int &x - The & means we get the ACTUAL variable, not a copy
 * Return: void (nothing returned)
 * 
 * Important: This function WILL change the original variable!
 */
void incrementByReference(int &actualNumber) {
    cout << "  📥 Inside incrementByReference function:" << endl;
    cout << "     Before incrementing actual number: " << actualNumber << endl;
    
    actualNumber++; // This changes the ORIGINAL variable
    
    cout << "     After incrementing actual number: " << actualNumber << endl;
    cout << "  📤 Leaving incrementByReference function..." << endl;
    
    // The original variable is now permanently changed!
}

/*
 * MAIN FUNCTION - The program starts here!
 */
int main() {
    cout << "=== INCREMENT AND DECREMENT OPERATORS DEMO ===" << endl;
    cout << "Let's learn the difference between pass by value and pass by reference!" << endl;
    cout << endl;
    
    // Create our test variable
    int myNumber = 5;
    
    cout << "🎯 Our starting number: " << myNumber << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 1: Pass by Value - Original doesn't change
    // =========================================================
    cout << "📊 EXAMPLE 1: Pass by Value (increment function)" << endl;
    cout << "🔍 Before calling increment function: " << myNumber << endl;
    
    increment(myNumber); // Pass a COPY of myNumber
    
    cout << "🔍 After calling increment function: " << myNumber << endl;
    cout << "❗ Notice: The original number didn't change!" << endl;
    cout << "   This is because the function only got a copy." << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 2: Pass by Value - Original doesn't change  
    // =========================================================
    cout << "📊 EXAMPLE 2: Pass by Value (decrement function)" << endl;
    cout << "🔍 Before calling decrement function: " << myNumber << endl;
    
    decrement(myNumber); // Pass a COPY of myNumber
    
    cout << "🔍 After calling decrement function: " << myNumber << endl;
    cout << "❗ Notice: The original number still didn't change!" << endl;
    cout << "   Again, the function only got a copy." << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 3: Pass by Reference - Original DOES change
    // =========================================================
    cout << "📊 EXAMPLE 3: Pass by Reference (incrementByReference function)" << endl;
    cout << "🔍 Before calling incrementByReference function: " << myNumber << endl;
    
    incrementByReference(myNumber); // Pass the ACTUAL variable (because of &)
    
    cout << "🔍 After calling incrementByReference function: " << myNumber << endl;
    cout << "✅ Success! The original number changed!" << endl;
    cout << "   This is because we used & in the function parameter." << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 4: Direct increment/decrement (no functions)
    // =========================================================
    cout << "📊 EXAMPLE 4: Direct Operations (no functions)" << endl;
    cout << "🔍 Current number: " << myNumber << endl;
    
    cout << "Applying ++ directly to the variable:" << endl;
    myNumber++; // Direct increment
    cout << "After ++: " << myNumber << endl;
    
    cout << "Applying -- directly to the variable:" << endl;
    myNumber--; // Direct decrement  
    cout << "After --: " << myNumber << endl;
    
    cout << "Applying ++ one more time:" << endl;
    ++myNumber; // This is also increment (slightly different timing, same result for basic use)
    cout << "Final value: " << myNumber << endl;
    cout << endl;
    
    // =========================================================
    // SUMMARY
    // =========================================================
    cout << "📚 SUMMARY - What You Learned:" << endl;
    cout << "1. ++ adds 1 to a number, -- subtracts 1 from a number" << endl;
    cout << "2. Pass by value (int x) = function gets a COPY" << endl;
    cout << "3. Pass by reference (int &x) = function gets the ACTUAL variable" << endl;
    cout << "4. To modify a variable in a function, use & in the parameter" << endl;
    cout << "5. You can use ++/-- directly on variables without functions" << endl;
    cout << endl;
    
    cout << "🎉 Great job! You now understand increment/decrement operators!" << endl;
    cout << "💡 Try changing the starting value and see what happens!" << endl;
    
    return 0; // Program completed successfully
}