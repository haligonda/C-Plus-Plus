/*
 * C++ Recursion Examples
 * ======================
 * 
 * This file demonstrates recursion concepts in C++:
 * - What recursion is and how it works
 * - Base cases and recursive cases
 * - How the call stack works with recursive functions
 * - Common recursive problems and their solutions
 * 
 * Key Concept: Recursion is when a function calls itself to solve
 * a smaller version of the same problem. It's like mathematical induction -
 * solve the base case, then show how to get from one step to the next.
 */

#include <iostream>
using namespace std;

/*
 * Function: sum (Recursive)
 * Purpose: Calculate the sum of all integers from 1 to x
 * Parameter: int x - The number to sum up to
 * Returns: int - The sum of all numbers from 1 to x
 * 
 * Mathematical formula: sum(x) = x + (x-1) + (x-2) + ... + 2 + 1
 * Recursive formula: sum(x) = x + sum(x-1)
 * 
 * Example: sum(5) = 5 + sum(4) = 5 + 4 + sum(3) = 5 + 4 + 3 + sum(2) = ...
 *          = 5 + 4 + 3 + 2 + 1 = 15
 */
int sum(int x) {
    /*
     * Step 1: Base Case
     * ================
     * 
     * Every recursive function MUST have a base case - a condition
     * where the function stops calling itself and returns a value.
     * Without a base case, the function would call itself infinitely
     * and cause a stack overflow.
     * 
     * Base case: When x <= 0, return 0 (sum of nothing is 0)
     */
    if (x <= 0) {
        cout << "  Base case reached: sum(" << x << ") = 0" << endl;
        return 0;  // Stop the recursion here
    }
    
    /*
     * Step 2: Recursive Case
     * =====================
     * 
     * This is where the function calls itself with a "smaller" problem.
     * The problem must get smaller each time to eventually reach the base case.
     * 
     * Recursive case: sum(x) = x + sum(x-1)
     * We add the current number (x) to the sum of all smaller numbers
     */
    cout << "  Calculating: sum(" << x << ") = " << x << " + sum(" << (x-1) << ")" << endl;
    
    int result = x + sum(x - 1);  // Recursive call with smaller problem
    
    cout << "  Returning: sum(" << x << ") = " << result << endl;
    return result;
}

/*
 * Function: factorial (Another Recursive Example)
 * Purpose: Calculate the factorial of a number (n!)
 * Formula: n! = n × (n-1) × (n-2) × ... × 2 × 1
 * Recursive: n! = n × (n-1)!
 */
long factorial(int n) {
    cout << "  Computing factorial(" << n << ")" << endl;
    
    // Base case: 0! = 1 and 1! = 1
    if (n <= 1) {
        cout << "  Base case: factorial(" << n << ") = 1" << endl;
        return 1;
    }
    
    // Recursive case: n! = n × (n-1)!
    long result = n * factorial(n - 1);
    cout << "  factorial(" << n << ") = " << result << endl;
    return result;
}

/*
 * Function: fibonacci (Classic Recursive Example)
 * Purpose: Calculate the nth Fibonacci number
 * Sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
 * Formula: fib(n) = fib(n-1) + fib(n-2)
 */
int fibonacci(int n) {
    // Base cases
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/*
 * Function: countdown (Simple Recursive Example)
 * Purpose: Count down from a number to 0
 * Shows how recursion can replace loops in some cases
 */
void countdown(int n) {
    // Base case
    if (n <= 0) {
        cout << "Blast off! 🚀" << endl;
        return;
    }
    
    // Print current number
    cout << n << "... ";
    
    // Recursive call with smaller number
    countdown(n - 1);
}

int main() {
    cout << "=== C++ Recursion Demonstration ===" << endl;
    cout << endl;
    
    /*
     * Example 1: Sum of Numbers
     * ========================
     */
    cout << "=== Example 1: Sum of Numbers ===" << endl;
    int x = 10;
    cout << "Calculating sum from 1 to " << x << ":" << endl;
    cout << "Call trace:" << endl;
    int result = sum(x);
    cout << "\nFinal result: sum(" << x << ") = " << result << endl;
    cout << "Verification: 1+2+3+4+5+6+7+8+9+10 = " << result << endl;
    cout << endl;
    
    /*
     * Example 2: Factorial
     * ===================
     */
    cout << "=== Example 2: Factorial ===" << endl;
    int n = 5;
    cout << "Calculating " << n << "! (5 factorial):" << endl;
    long factResult = factorial(n);
    cout << "\nFinal result: " << n << "! = " << factResult << endl;
    cout << "Verification: 5 × 4 × 3 × 2 × 1 = " << factResult << endl;
    cout << endl;
    
    /*
     * Example 3: Fibonacci Sequence
     * ============================
     */
    cout << "=== Example 3: Fibonacci Sequence ===" << endl;
    cout << "First 10 Fibonacci numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "fib(" << i << ") = " << fibonacci(i) << endl;
    }
    cout << endl;
    
    /*
     * Example 4: Countdown
     * ===================
     */
    cout << "=== Example 4: Recursive Countdown ===" << endl;
    cout << "Rocket launch countdown:" << endl;
    countdown(5);
    cout << endl;
    
    /*
     * Understanding the Call Stack
     * ===========================
     */
    cout << "=== Understanding the Call Stack ===" << endl;
    cout << "When sum(3) is called:" << endl;
    cout << "1. sum(3) calls sum(2)" << endl;
    cout << "2. sum(2) calls sum(1)" << endl;
    cout << "3. sum(1) calls sum(0)" << endl;
    cout << "4. sum(0) returns 0 (base case)" << endl;
    cout << "5. sum(1) returns 1 + 0 = 1" << endl;
    cout << "6. sum(2) returns 2 + 1 = 3" << endl;
    cout << "7. sum(3) returns 3 + 3 = 6" << endl;
    cout << "\nVerification with sum(3):" << endl;
    cout << "sum(3) = " << sum(3) << endl;
    
    /*
     * Key Learning Points:
     * 
     * 1. Components of Recursion:
     *    - Base case: Condition where recursion stops
     *    - Recursive case: Function calls itself with smaller problem
     *    - Progress toward base case: Problem must get "smaller" each time
     * 
     * 2. How Recursion Works:
     *    - Each function call is added to the call stack
     *    - When base case is reached, functions start returning
     *    - Results bubble back up through the stack
     * 
     * 3. Advantages of Recursion:
     *    - Clean, readable code for naturally recursive problems
     *    - Mirrors mathematical definitions (factorial, Fibonacci)
     *    - Elegant solutions for tree/graph traversal
     *    - Natural fit for divide-and-conquer algorithms
     * 
     * 4. Disadvantages of Recursion:
     *    - Can be slower than iterative solutions (function call overhead)
     *    - Uses more memory (call stack grows)
     *    - Risk of stack overflow with deep recursion
     *    - Can be harder to debug
     * 
     * 5. When to Use Recursion:
     *    - Problem has recursive structure (trees, graphs)
     *    - Mathematical sequences (factorial, Fibonacci)
     *    - Divide-and-conquer algorithms (merge sort, quick sort)
     *    - Parsing nested structures (JSON, XML)
     *    - Backtracking problems (maze solving, N-queens)
     * 
     * 6. Common Pitfalls:
     *    - Forgetting the base case (infinite recursion)
     *    - Base case that's never reached
     *    - Not making progress toward base case
     *    - Inefficient recursion (like naive Fibonacci)
     * 
     * 7. Optimization Tips:
     *    - Use memoization to cache results
     *    - Consider iterative alternatives for simple cases
     *    - Tail recursion optimization (where supported)
     *    - Set reasonable recursion depth limits
     */
    
    return 0;
}