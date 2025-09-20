/*
 * C++ Assignment Operators Examples
 * =================================
 * 
 * This file demonstrates various assignment operators in C++:
 * - Arithmetic assignment operators (+=, -=, *=, /=, %=)
 * - Bitwise assignment operators (&=, |=, ^=, <<=, >>=)
 * 
 * Key Concept: Assignment operators modify a variable and assign the result
 * back to the same variable. For example: x += 5 is equivalent to x = x + 5
 */

#include <iostream>
using namespace std;

// Global constant used in all operations
const int A = 2;

/*
 * Addition Assignment (+=)
 * x += A is equivalent to x = x + A
 */
void add_assign(int x) {
    cout << "Before: x = " << x << ", A = " << A << endl;
    x = x + A;  // Could also write as: x += A;
    cout << "Add Assign (x = x + A): " << x << endl;
    cout << endl;
}

/*
 * Subtraction Assignment (-=)
 * x -= A is equivalent to x = x - A
 */
void sub_assign(int x) {
    cout << "Before: x = " << x << ", A = " << A << endl;
    x = x - A;  // Could also write as: x -= A;
    cout << "Sub Assign (x = x - A): " << x << endl;
    cout << endl;
}

/*
 * Division Assignment (/=)
 * x /= A is equivalent to x = x / A
 */
void div_assign(int x) {
    cout << "Before: x = " << x << ", A = " << A << endl;
    x = x / A;  // Could also write as: x /= A;
    cout << "Div Assign (x = x / A): " << x << endl;
    cout << endl;
}

/*
 * Multiplication Assignment (*=)
 * x *= A is equivalent to x = x * A
 */
void mul_assign(int x) {
    cout << "Before: x = " << x << ", A = " << A << endl;
    x = x * A;  // Could also write as: x *= A;
    cout << "Mul Assign (x = x * A): " << x << endl;
    cout << endl;
}

/*
 * Modulus Assignment (%=)
 * x %= A is equivalent to x = x % A
 * Modulus returns the remainder after division
 */
void mod_assign(int x) {
    cout << "Before: x = " << x << ", A = " << A << endl;
    x = x % A;  // Could also write as: x %= A;
    cout << "Mod Assign (x = x % A): " << x << " (remainder when " << (x*A + x) << " ÷ " << A << ")" << endl;
    cout << endl;
}

/*
 * Bitwise AND Assignment (&=)
 * x &= A is equivalent to x = x & A
 * Performs bitwise AND operation on binary representations
 */
void and_assign(int x) {
    cout << "Before: x = " << x << ", A = " << A << endl;
    cout << "Binary: x = " << x << " (binary), A = " << A << " (binary)" << endl;
    x = x & A;  // Could also write as: x &= A;
    cout << "And Assign (x = x & A): " << x << " (bitwise AND result)" << endl;
    cout << endl;
}

/*
 * Bitwise OR Assignment (|=)
 * x |= A is equivalent to x = x | A
 * Performs bitwise OR operation on binary representations
 */
void or_assign(int x) {
    cout << "Before: x = " << x << ", A = " << A << endl;
    x = x | A;  // Could also write as: x |= A;
    cout << "Or Assign (x = x | A): " << x << " (bitwise OR result)" << endl;
    cout << endl;
}

/*
 * Bitwise XOR Assignment (^=)
 * x ^= A is equivalent to x = x ^ A
 * Performs bitwise XOR (exclusive OR) operation
 */
void xor_assign(int x) {
    cout << "Before: x = " << x << ", A = " << A << endl;
    x = x ^ A;  // Could also write as: x ^= A;
    cout << "XOR Assign (x = x ^ A): " << x << " (bitwise XOR result)" << endl;
    cout << endl;
}

/*
 * Right Shift Assignment (>>=)
 * x >>= A is equivalent to x = x >> A
 * Shifts bits to the right by A positions (divides by 2^A)
 */
void right_assign(int x) {
    cout << "Before: x = " << x << ", A = " << A << endl;
    x = x >> A;  // Could also write as: x >>= A;
    cout << "Right Shift Assign (x = x >> A): " << x << " (shifted right by " << A << " bits)" << endl;
    cout << endl;
}

/*
 * Left Shift Assignment (<<=)
 * x <<= A is equivalent to x = x << A
 * Shifts bits to the left by A positions (multiplies by 2^A)
 */
void left_assign(int x) {
    cout << "Before: x = " << x << ", A = " << A << endl;
    x = x << A;  // Could also write as: x <<= A;
    cout << "Left Shift Assign (x = x << A): " << x << " (shifted left by " << A << " bits)" << endl;
    cout << endl;
}

int main() {
    // Initial value for our variable
    int x = 10;
    cout << "=== C++ Assignment Operators Demo ===" << endl;
    cout << "Initial value x: " << x << endl;
    cout << "Constant A: " << A << endl;
    cout << "=====================================\n" << endl;

    // Demonstrate each assignment operator
    cout << "1. ARITHMETIC ASSIGNMENT OPERATORS:" << endl;
    cout << "-----------------------------------" << endl;
    add_assign(x);  // 10 + 2 = 12
    sub_assign(x);  // 10 - 2 = 8
    mul_assign(x);  // 10 * 2 = 20
    div_assign(x);  // 10 / 2 = 5
    mod_assign(x);  // 10 % 2 = 0 (no remainder)
    
    cout << "2. BITWISE ASSIGNMENT OPERATORS:" << endl;
    cout << "--------------------------------" << endl;
    and_assign(x);   // Bitwise AND
    or_assign(x);    // Bitwise OR
    xor_assign(x);   // Bitwise XOR
    right_assign(x); // Right bit shift
    left_assign(x);  // Left bit shift

    /*
     * Key Learning Points:
     * 
     * 1. Assignment operators provide shorthand for common operations
     * 2. x += 5 is more concise than x = x + 5
     * 3. Arithmetic operators: +=, -=, *=, /=, %= work with numbers
     * 4. Bitwise operators: &=, |=, ^=, <<=, >>= work with binary bits
     * 5. Shift operators are efficient ways to multiply/divide by powers of 2
     * 6. All these operators modify the original variable
     * 
     * Note: In this example, functions use pass-by-value, so the original
     * variable 'x' in main() doesn't change. To modify the original,
     * we'd need pass-by-reference (int &x).
     */

    return 0;
}