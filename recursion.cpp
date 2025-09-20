/*
 * RECURSION IN C++ 🔄
 * 
 * This program teaches you:
 * 1. What recursion is and how it works
 * 2. How functions can call themselves
 * 3. The importance of base cases
 * 4. How recursive calls build up and resolve
 * 5. Practical applications of recursion
 * 
 * Key Concepts:
 * - Recursion: A function that calls itself
 * - Base case: The condition that stops recursion
 * - Recursive case: The part where function calls itself
 * - Stack: How the computer keeps track of function calls
 * 
 * Think of recursion like Russian nesting dolls (Matryoshka):
 * - Each doll contains a smaller version of itself
 * - Eventually you reach the smallest doll (base case)
 * - Then you put them all back together in reverse order
 */

#include <iostream>
using namespace std;

/*
 * FUNCTION 1: sum (Recursive Function)
 * Calculates the sum of all numbers from 1 to x
 * 
 * Example: sum(5) = 5 + 4 + 3 + 2 + 1 = 15
 * 
 * Parameter: int x - The number to sum down from
 * Return: int - The total sum
 */
int sum(int x) {
    cout << "  📞 sum(" << x << ") called" << endl;
    
    // BASE CASE: This stops the recursion
    if (x <= 0) {
        cout << "  🛑 Base case reached! x = " << x << ", returning 0" << endl;
        return 0;
    }
    
    // RECURSIVE CASE: Function calls itself with a smaller value
    cout << "  🔄 Recursive case: " << x << " + sum(" << (x-1) << ")" << endl;
    
    int result = x + sum(x - 1);
    
    cout << "  ✅ sum(" << x << ") returning " << result << endl;
    return result;
}

/*
 * FUNCTION 2: factorial (Another Recursive Function)
 * Calculates the factorial of a number (n! = n × (n-1) × ... × 1)
 * 
 * Example: factorial(5) = 5 × 4 × 3 × 2 × 1 = 120
 * 
 * Parameter: int n - The number to calculate factorial for
 * Return: int - The factorial result
 */
int factorial(int n) {
    cout << "  📞 factorial(" << n << ") called" << endl;
    
    // BASE CASE: 0! = 1 and 1! = 1
    if (n <= 1) {
        cout << "  🛑 Base case reached! factorial(" << n << ") = 1" << endl;
        return 1;
    }
    
    // RECURSIVE CASE: n! = n × (n-1)!
    cout << "  🔄 Recursive case: " << n << " × factorial(" << (n-1) << ")" << endl;
    
    int result = n * factorial(n - 1);
    
    cout << "  ✅ factorial(" << n << ") returning " << result << endl;
    return result;
}

/*
 * FUNCTION 3: countdown (Simple Recursive Function)
 * Demonstrates recursion with a countdown
 * 
 * Parameter: int n - The number to count down from
 * Return: void (nothing)
 */
void countdown(int n) {
    cout << "  📞 countdown(" << n << ") called" << endl;
    
    // BASE CASE: Stop when we reach 0
    if (n <= 0) {
        cout << "  🚀 Blast off! 🚀" << endl;
        return;
    }
    
    // Print current number
    cout << "  " << n << "..." << endl;
    
    // RECURSIVE CASE: Call countdown with n-1
    countdown(n - 1);
    
    cout << "  📤 Returning from countdown(" << n << ")" << endl;
}

/*
 * FUNCTION 4: demonstrateRecursionConcept
 * Explains how recursion works conceptually
 */
void demonstrateRecursionConcept() {
    cout << "📊 EXAMPLE: Understanding Recursion Concept" << endl;
    cout << "Let's break down how sum(3) works step by step:" << endl;
    cout << endl;
    
    cout << "🧠 Mental model of sum(3):" << endl;
    cout << "   sum(3) = 3 + sum(2)" << endl;
    cout << "   sum(2) = 2 + sum(1)" << endl;
    cout << "   sum(1) = 1 + sum(0)" << endl;
    cout << "   sum(0) = 0 (base case)" << endl;
    cout << endl;
    
    cout << "🔄 Now working backwards (resolving):" << endl;
    cout << "   sum(0) returns 0" << endl;
    cout << "   sum(1) returns 1 + 0 = 1" << endl;
    cout << "   sum(2) returns 2 + 1 = 3" << endl;  
    cout << "   sum(3) returns 3 + 3 = 6" << endl;
    cout << endl;
    
    cout << "💡 This is exactly how the computer processes it!" << endl;
    cout << endl;
}

/*
 * FUNCTION 5: demonstrateStackConcept  
 * Shows how the call stack works with recursion
 */
void demonstrateStackConcept() {
    cout << "📊 EXAMPLE: The Call Stack" << endl;
    cout << "Think of recursive calls like a stack of plates:" << endl;
    cout << endl;
    
    cout << "📚 Call Stack for sum(3):" << endl;
    cout << "   ┌─────────────┐" << endl;
    cout << "   │   sum(0)    │ ← Top of stack (executes first on return)" << endl;
    cout << "   ├─────────────┤" << endl;
    cout << "   │   sum(1)    │" << endl;
    cout << "   ├─────────────┤" << endl;
    cout << "   │   sum(2)    │" << endl;
    cout << "   ├─────────────┤" << endl;
    cout << "   │   sum(3)    │ ← Bottom of stack (called first)" << endl;
    cout << "   └─────────────┘" << endl;
    cout << endl;
    
    cout << "🔄 Execution order:" << endl;
    cout << "   1. sum(3) calls sum(2) → adds sum(2) to stack" << endl;
    cout << "   2. sum(2) calls sum(1) → adds sum(1) to stack" << endl;
    cout << "   3. sum(1) calls sum(0) → adds sum(0) to stack" << endl;
    cout << "   4. sum(0) returns 0 → removes sum(0) from stack" << endl;
    cout << "   5. sum(1) gets 0, returns 1 → removes sum(1) from stack" << endl;
    cout << "   6. sum(2) gets 1, returns 3 → removes sum(2) from stack" << endl;
    cout << "   7. sum(3) gets 3, returns 6 → removes sum(3) from stack" << endl;
    cout << endl;
}

/*
 * MAIN FUNCTION - The program starts here!
 */
int main() {
    cout << "=== RECURSION IN C++ ===" << endl;
    cout << "Learn how functions can call themselves!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 1: Basic recursion concept
    // =========================================================
    demonstrateRecursionConcept();
    cout << "===========================================" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 2: Call stack explanation
    // =========================================================
    demonstrateStackConcept();
    cout << "===========================================" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 3: Sum function in action
    // =========================================================
    cout << "📊 EXAMPLE 3: Sum Function Live Demo" << endl;
    cout << "Let's see the actual sum function working:" << endl;
    cout << endl;
    
    int testNumber = 4;
    cout << "🧮 Calculating sum of numbers from 1 to " << testNumber << ":" << endl;
    cout << "Expected result: 4 + 3 + 2 + 1 = 10" << endl;
    cout << endl;
    
    cout << "📞 Starting sum(" << testNumber << "):" << endl;
    int result = sum(testNumber);
    
    cout << endl;
    cout << "🎯 Final result: sum(" << testNumber << ") = " << result << endl;
    cout << "✅ Recursion completed successfully!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 4: Factorial function
    // =========================================================
    cout << "===========================================" << endl;
    cout << "📊 EXAMPLE 4: Factorial Function Demo" << endl;
    cout << "Another classic recursion example:" << endl;
    cout << endl;
    
    int factNumber = 5;
    cout << "🧮 Calculating " << factNumber << "! (factorial):" << endl;
    cout << "Expected result: 5 × 4 × 3 × 2 × 1 = 120" << endl;
    cout << endl;
    
    cout << "📞 Starting factorial(" << factNumber << "):" << endl;
    int factResult = factorial(factNumber);
    
    cout << endl;
    cout << "🎯 Final result: " << factNumber << "! = " << factResult << endl;
    cout << "✅ Factorial recursion completed!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 5: Countdown function
    // =========================================================
    cout << "===========================================" << endl;
    cout << "📊 EXAMPLE 5: Countdown Demo" << endl;
    cout << "A fun recursion example:" << endl;
    cout << endl;
    
    cout << "🚀 Rocket launch countdown from 5:" << endl;
    countdown(5);
    cout << endl;
    
    // =========================================================
    // SUMMARY SECTION
    // =========================================================
    cout << "===========================================" << endl;
    cout << "📚 SUMMARY - What You Learned:" << endl;
    cout << "1. Recursion is when a function calls itself" << endl;
    cout << "2. Base case prevents infinite recursion" << endl;
    cout << "3. Recursive case reduces the problem size" << endl;  
    cout << "4. Call stack keeps track of all function calls" << endl;
    cout << "5. Recursion is useful for mathematical calculations" << endl;
    cout << endl;
    
    cout << "🔑 RECURSION PATTERN:" << endl;
    cout << "   int recursiveFunction(int n) {" << endl;
    cout << "       // BASE CASE" << endl;
    cout << "       if (n meets stopping condition) {" << endl;
    cout << "           return simple_value;" << endl;
    cout << "       }" << endl;
    cout << "       // RECURSIVE CASE" << endl;
    cout << "       return n + recursiveFunction(n - 1);" << endl;
    cout << "   }" << endl;
    cout << endl;
    
    cout << "💡 WHEN TO USE RECURSION:" << endl;
    cout << "• Mathematical sequences (factorial, fibonacci)" << endl;
    cout << "• Tree traversal (file systems, decision trees)" << endl;
    cout << "• Divide-and-conquer algorithms" << endl;
    cout << "• Problems that can be broken into smaller versions" << endl;
    cout << endl;
    
    cout << "⚠️  RECURSION WARNINGS:" << endl;
    cout << "• Always include a base case to prevent infinite loops" << endl;
    cout << "• Each recursive call should get closer to the base case" << endl;
    cout << "• Too much recursion can cause stack overflow" << endl;
    cout << "• Sometimes iteration (loops) is more efficient" << endl;
    cout << endl;
    
    cout << "🎉 Amazing! You now understand recursion!" << endl;
    cout << "💡 Try writing a recursive function to calculate Fibonacci numbers!" << endl;
    
    return 0; // Program completed successfully
}