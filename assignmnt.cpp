/*
 * ASSIGNMENT OPERATORS IN C++ ➕➖✖️➗
 * 
 * This program teaches you:
 * 1. Different types of assignment operators
 * 2. Arithmetic assignment operators (+=, -=, *=, /=, %=)
 * 3. Bitwise assignment operators (&=, |=, ^=, <<=, >>=)
 * 4. How assignment operators work as shortcuts
 * 5. The difference between regular assignment and compound assignment
 * 
 * Key Concepts:
 * - const: A value that never changes during program execution
 * - Assignment operators: Shortcuts for common operations
 * - Bitwise operations: Working with individual bits
 */

#include <iostream>
using namespace std;

// A constant value that we'll use in all our operations
// const means this value can NEVER be changed
const int OPERATION_VALUE = 2;

/*
 * FUNCTION 1: demonstrateAddAssign
 * Shows addition assignment operator (+=)
 */
void demonstrateAddAssign(int startingValue) {
    cout << "  🔍 Addition Assignment (+=)" << endl;
    cout << "     Starting value: " << startingValue << endl;
    
    // This is the traditional way:
    int traditionalWay = startingValue + OPERATION_VALUE;
    cout << "     Traditional way (x + " << OPERATION_VALUE << "): " << traditionalWay << endl;
    
    // This is the assignment operator shortcut:
    startingValue += OPERATION_VALUE; // Same as: startingValue = startingValue + OPERATION_VALUE
    cout << "     Using += operator: " << startingValue << endl;
    cout << "     ✅ Both methods give the same result!" << endl;
}

/*
 * FUNCTION 2: demonstrateSubAssign  
 * Shows subtraction assignment operator (-=)
 */
void demonstrateSubAssign(int startingValue) {
    cout << "  🔍 Subtraction Assignment (-=)" << endl;
    cout << "     Starting value: " << startingValue << endl;
    
    int traditionalWay = startingValue - OPERATION_VALUE;
    cout << "     Traditional way (x - " << OPERATION_VALUE << "): " << traditionalWay << endl;
    
    startingValue -= OPERATION_VALUE; // Same as: startingValue = startingValue - OPERATION_VALUE
    cout << "     Using -= operator: " << startingValue << endl;
    cout << "     ✅ Subtraction assignment works!" << endl;
}

/*
 * FUNCTION 3: demonstrateMulAssign
 * Shows multiplication assignment operator (*=)
 */
void demonstrateMulAssign(int startingValue) {
    cout << "  🔍 Multiplication Assignment (*=)" << endl;
    cout << "     Starting value: " << startingValue << endl;
    
    int traditionalWay = startingValue * OPERATION_VALUE;
    cout << "     Traditional way (x * " << OPERATION_VALUE << "): " << traditionalWay << endl;
    
    startingValue *= OPERATION_VALUE; // Same as: startingValue = startingValue * OPERATION_VALUE
    cout << "     Using *= operator: " << startingValue << endl;
    cout << "     ✅ Multiplication assignment works!" << endl;
}

/*
 * FUNCTION 4: demonstrateDivAssign
 * Shows division assignment operator (/=)
 */
void demonstrateDivAssign(int startingValue) {
    cout << "  🔍 Division Assignment (/=)" << endl;
    cout << "     Starting value: " << startingValue << endl;
    
    int traditionalWay = startingValue / OPERATION_VALUE;
    cout << "     Traditional way (x / " << OPERATION_VALUE << "): " << traditionalWay << endl;
    
    startingValue /= OPERATION_VALUE; // Same as: startingValue = startingValue / OPERATION_VALUE
    cout << "     Using /= operator: " << startingValue << endl;
    cout << "     ✅ Division assignment works!" << endl;
}

/*
 * FUNCTION 5: demonstrateModAssign
 * Shows modulus assignment operator (%=)
 * Modulus gives you the remainder after division
 */
void demonstrateModAssign(int startingValue) {
    cout << "  🔍 Modulus Assignment (%=)" << endl;
    cout << "     Starting value: " << startingValue << endl;
    cout << "     💡 Modulus gives the remainder after division" << endl;
    
    int traditionalWay = startingValue % OPERATION_VALUE;
    cout << "     Traditional way (x % " << OPERATION_VALUE << "): " << traditionalWay << endl;
    cout << "     (This means: " << startingValue << " divided by " << OPERATION_VALUE << " has remainder " << traditionalWay << ")" << endl;
    
    startingValue %= OPERATION_VALUE; // Same as: startingValue = startingValue % OPERATION_VALUE
    cout << "     Using %= operator: " << startingValue << endl;
    cout << "     ✅ Modulus assignment works!" << endl;
}

/*
 * FUNCTION 6: demonstrateBitwiseAnd
 * Shows bitwise AND assignment operator (&=)
 * This works with individual bits (0s and 1s)
 */
void demonstrateBitwiseAnd(int startingValue) {
    cout << "  🔍 Bitwise AND Assignment (&=)" << endl;
    cout << "     Starting value: " << startingValue << endl;
    cout << "     💡 Bitwise AND compares individual bits" << endl;
    cout << "     " << startingValue << " in binary: ";
    
    // Show binary representation (simplified explanation)
    if (startingValue >= 8) cout << "1"; else cout << "0";
    if (startingValue % 8 >= 4) cout << "1"; else cout << "0";  
    if (startingValue % 4 >= 2) cout << "1"; else cout << "0";
    if (startingValue % 2 >= 1) cout << "1"; else cout << "0";
    cout << endl;
    
    int traditionalWay = startingValue & OPERATION_VALUE;
    cout << "     Traditional way (x & " << OPERATION_VALUE << "): " << traditionalWay << endl;
    
    startingValue &= OPERATION_VALUE; // Same as: startingValue = startingValue & OPERATION_VALUE  
    cout << "     Using &= operator: " << startingValue << endl;
}

/*
 * FUNCTION 7: demonstrateBitwiseOr
 * Shows bitwise OR assignment operator (|=)
 */
void demonstrateBitwiseOr(int startingValue) {
    cout << "  🔍 Bitwise OR Assignment (|=)" << endl;
    cout << "     Starting value: " << startingValue << endl;
    cout << "     💡 Bitwise OR combines bits (1 if either bit is 1)" << endl;
    
    int traditionalWay = startingValue | OPERATION_VALUE;
    cout << "     Traditional way (x | " << OPERATION_VALUE << "): " << traditionalWay << endl;
    
    startingValue |= OPERATION_VALUE; // Same as: startingValue = startingValue | OPERATION_VALUE
    cout << "     Using |= operator: " << startingValue << endl;
}

/*
 * FUNCTION 8: demonstrateBitwiseXor  
 * Shows bitwise XOR assignment operator (^=)
 */
void demonstrateBitwiseXor(int startingValue) {
    cout << "  🔍 Bitwise XOR Assignment (^=)" << endl;
    cout << "     Starting value: " << startingValue << endl;
    cout << "     💡 XOR = 1 if bits are different, 0 if bits are same" << endl;
    
    int traditionalWay = startingValue ^ OPERATION_VALUE;
    cout << "     Traditional way (x ^ " << OPERATION_VALUE << "): " << traditionalWay << endl;
    
    startingValue ^= OPERATION_VALUE; // Same as: startingValue = startingValue ^ OPERATION_VALUE
    cout << "     Using ^= operator: " << startingValue << endl;
}

/*
 * FUNCTION 9: demonstrateLeftShift
 * Shows left shift assignment operator (<<=)
 * Left shift moves bits to the left (multiplies by 2 for each position)
 */
void demonstrateLeftShift(int startingValue) {
    cout << "  🔍 Left Shift Assignment (<<=)" << endl;
    cout << "     Starting value: " << startingValue << endl;
    cout << "     💡 Left shift by " << OPERATION_VALUE << " = multiply by " << (1 << OPERATION_VALUE) << endl;
    
    int traditionalWay = startingValue << OPERATION_VALUE;
    cout << "     Traditional way (x << " << OPERATION_VALUE << "): " << traditionalWay << endl;
    
    startingValue <<= OPERATION_VALUE; // Same as: startingValue = startingValue << OPERATION_VALUE
    cout << "     Using <<= operator: " << startingValue << endl;
}

/*
 * FUNCTION 10: demonstrateRightShift
 * Shows right shift assignment operator (>>=)  
 * Right shift moves bits to the right (divides by 2 for each position)
 */
void demonstrateRightShift(int startingValue) {
    cout << "  🔍 Right Shift Assignment (>>=)" << endl;
    cout << "     Starting value: " << startingValue << endl;
    cout << "     💡 Right shift by " << OPERATION_VALUE << " = divide by " << (1 << OPERATION_VALUE) << endl;
    
    int traditionalWay = startingValue >> OPERATION_VALUE;
    cout << "     Traditional way (x >> " << OPERATION_VALUE << "): " << traditionalWay << endl;
    
    startingValue >>= OPERATION_VALUE; // Same as: startingValue = startingValue >> OPERATION_VALUE
    cout << "     Using >>= operator: " << startingValue << endl;
}

/*
 * MAIN FUNCTION - The program starts here!
 */
int main() {
    cout << "=== ASSIGNMENT OPERATORS IN C++ ===" << endl;
    cout << "Learn all the different ways to assign and modify values!" << endl;
    cout << endl;
    
    // Our test value
    int testValue = 10;
    
    cout << "🎯 Starting value: " << testValue << endl;
    cout << "🔢 Operation value (constant): " << OPERATION_VALUE << endl;
    cout << endl;
    
    cout << "📚 PART 1: ARITHMETIC ASSIGNMENT OPERATORS" << endl;
    cout << "These work with basic math operations:" << endl;
    cout << endl;
    
    // Arithmetic operators
    demonstrateAddAssign(testValue);
    cout << endl;
    demonstrateSubAssign(testValue);  
    cout << endl;
    demonstrateMulAssign(testValue);
    cout << endl;
    demonstrateDivAssign(testValue);
    cout << endl;
    demonstrateModAssign(testValue);
    cout << endl;
    
    cout << "📚 PART 2: BITWISE ASSIGNMENT OPERATORS" << endl;
    cout << "These work with individual bits (advanced topic):" << endl;
    cout << endl;
    
    // Bitwise operators  
    demonstrateBitwiseAnd(testValue);
    cout << endl;
    demonstrateBitwiseOr(testValue);
    cout << endl;
    demonstrateBitwiseXor(testValue);
    cout << endl;
    demonstrateLeftShift(testValue);
    cout << endl;
    demonstrateRightShift(testValue);
    cout << endl;
    
    cout << "📚 SUMMARY - What You Learned:" << endl;
    cout << "1. Assignment operators are shortcuts for common operations" << endl;
    cout << "2. += is the same as: variable = variable + value" << endl;
    cout << "3. All arithmetic operators have assignment versions" << endl;
    cout << "4. Bitwise operators work with individual bits (advanced)" << endl;
    cout << "5. Assignment operators make code shorter and easier to read" << endl;
    cout << endl;
    
    cout << "🎉 Congratulations! You now understand assignment operators!" << endl;
    cout << "💡 Try changing the starting value and operation value to experiment!" << endl;
    
    return 0; // Program completed successfully
}