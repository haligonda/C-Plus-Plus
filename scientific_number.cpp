/*
 * C++ Scientific Notation Examples
 * ================================
 * 
 * This file demonstrates:
 * - Scientific notation (exponential notation) in C++
 * - Difference between float and double data types
 * - How to write very large numbers efficiently
 * 
 * Scientific Notation: A way to express very large or very small numbers
 * Format: number e/E power
 * Example: 32e3 means 32 × 10³ = 32 × 1000 = 32000
 */

#include <iostream>
using namespace std;

int main() {
    // Scientific Notation Examples
    
    /*
     * Float Example: 32e3
     * This means: 32 × 10³ = 32 × 1000 = 32,000
     * 'e3' means "times 10 to the power of 3"
     * 
     * float: Single precision floating-point (typically 32-bit)
     * - Can store about 7 decimal digits accurately
     * - Uses less memory than double
     */
    float f1 = 32e3;   // Same as writing 32000.0f
    
    /*
     * Double Example: 14E4  
     * This means: 14 × 10⁴ = 14 × 10000 = 140,000
     * 'E4' is the same as 'e4' (case doesn't matter)
     * 
     * double: Double precision floating-point (typically 64-bit)
     * - Can store about 15-17 decimal digits accurately
     * - More precise than float but uses more memory
     */
    double d = 14E4;   // Same as writing 140000.0
    
    // Display the results
    cout << "Scientific Notation Examples:" << endl;
    cout << "=============================" << endl;
    cout << "32e3 (float) = " << f1 << endl;     // Output: 32000
    cout << "14E4 (double) = " << d << endl;     // Output: 140000
    
    // Additional examples to demonstrate the concept
    cout << "\nMore Examples:" << endl;
    cout << "-------------" << endl;
    
    // Very large number
    double large = 1.5e6;     // 1.5 × 10⁶ = 1,500,000
    cout << "1.5e6 = " << large << endl;
    
    // Very small number (negative exponent)
    double small = 2.3e-4;    // 2.3 × 10⁻⁴ = 0.00023
    cout << "2.3e-4 = " << small << endl;
    
    /*
     * Why use scientific notation?
     * 1. Compact way to write very large or small numbers
     * 2. Easier to read than writing many zeros
     * 3. Standard in scientific and engineering applications
     * 4. Prevents errors when counting zeros
     * 
     * Common Uses:
     * - Physics constants (speed of light: 3e8 m/s)
     * - Astronomy (distances: 9.46e15 meters in a light-year)
     * - Chemistry (Avogadro's number: 6.022e23)
     * - Very small measurements (0.000001 = 1e-6)
     */
    
    return 0;
}