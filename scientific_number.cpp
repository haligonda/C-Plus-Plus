/*
 * SCIENTIFIC NOTATION IN C++ 🔬
 * 
 * This program teaches you:
 * 1. What scientific notation is and why it's used
 * 2. How to write numbers in scientific notation
 * 3. The difference between float and double
 * 4. When to use scientific notation in programming
 * 5. How C++ handles very large and very small numbers
 * 
 * Key Concepts:
 * - Scientific notation: A way to write very large or small numbers
 * - Mantissa: The main part of the number (3.2 in 3.2e4)
 * - Exponent: The power of 10 (4 in 3.2e4, meaning × 10^4)
 * - float: Single precision floating-point (32 bits)
 * - double: Double precision floating-point (64 bits)
 * - 'e' or 'E': Means "times 10 to the power of"
 * 
 * Think of scientific notation like this:
 * 32000 = 3.2 × 10^4 = 3.2e4
 * 0.00032 = 3.2 × 10^-4 = 3.2e-4
 */

#include <iostream>
using namespace std;

int main() {
    cout << "=== SCIENTIFIC NOTATION IN C++ ===" << endl;
    cout << "Learn how to work with very large and very small numbers!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 1: Basic Scientific Notation
    // =========================================================
    cout << "📊 EXAMPLE 1: Understanding Scientific Notation" << endl;
    cout << "Let's see how scientific notation works:" << endl;
    cout << endl;
    
    cout << "🔍 Scientific notation format: [number]e[power]" << endl;
    cout << "   • 'e' means 'times 10 to the power of'" << endl;
    cout << "   • 3.2e4 means 3.2 × 10^4 = 3.2 × 10000 = 32000" << endl;
    cout << "   • 1.5e-3 means 1.5 × 10^-3 = 1.5 × 0.001 = 0.0015" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 2: Float Examples
    // =========================================================
    cout << "📊 EXAMPLE 2: Float with Scientific Notation" << endl;
    cout << "Float is a 32-bit floating-point number:" << endl;
    cout << endl;
    
    // Create float with scientific notation
    float largeFloatNumber = 32e3;  // 32 × 10^3 = 32 × 1000 = 32000
    
    cout << "🔢 Creating a large number:" << endl;
    cout << "   float largeFloatNumber = 32e3;" << endl;
    cout << "   💡 This means: 32 × 10^3 = 32 × 1000" << endl;
    cout << "   Result: " << largeFloatNumber << endl;
    cout << endl;
    
    // Show the calculation step by step
    cout << "🧮 Step-by-step calculation:" << endl;
    cout << "   32e3 = 32 × 10^3" << endl;
    cout << "        = 32 × 1000" << endl;
    cout << "        = " << largeFloatNumber << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 3: Double Examples
    // =========================================================
    cout << "📊 EXAMPLE 3: Double with Scientific Notation" << endl;
    cout << "Double is a 64-bit floating-point number (more precise):" << endl;
    cout << endl;
    
    // Create double with scientific notation
    double largeDoubleNumber = 14E4;  // 14 × 10^4 = 14 × 10000 = 140000
    
    cout << "🔢 Creating a large double:" << endl;
    cout << "   double largeDoubleNumber = 14E4;" << endl;
    cout << "   💡 This means: 14 × 10^4 = 14 × 10000" << endl;
    cout << "   💡 Notice: You can use 'e' or 'E' - both work the same" << endl;
    cout << "   Result: " << largeDoubleNumber << endl;
    cout << endl;
    
    // Show the calculation
    cout << "🧮 Step-by-step calculation:" << endl;
    cout << "   14E4 = 14 × 10^4" << endl;
    cout << "        = 14 × 10000" << endl;
    cout << "        = " << largeDoubleNumber << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 4: More Scientific Notation Examples
    // =========================================================
    cout << "📊 EXAMPLE 4: Various Scientific Notation Examples" << endl;
    cout << "Let's explore different ways to use scientific notation:" << endl;
    cout << endl;
    
    // Positive exponents (large numbers)
    float speed_of_light = 3.0e8;        // 300,000,000 m/s
    float earth_distance = 1.496e8;      // 149,600,000 km (distance to sun)
    
    // Negative exponents (small numbers)
    float electron_mass = 9.11e-31;      // Very tiny mass in kg
    float planck_constant = 6.626e-34;   // Very small physics constant
    
    cout << "🌌 Large numbers (positive exponents):" << endl;
    cout << "   Speed of light: " << speed_of_light << " m/s" << endl;
    cout << "   Distance to sun: " << earth_distance << " km" << endl;
    cout << endl;
    
    cout << "🔬 Small numbers (negative exponents):" << endl;
    cout << "   Electron mass: " << electron_mass << " kg" << endl;
    cout << "   Planck constant: " << planck_constant << " J⋅s" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 5: Float vs Double Comparison
    // =========================================================
    cout << "📊 EXAMPLE 5: Float vs Double Precision" << endl;
    cout << "Let's see the difference in precision:" << endl;
    cout << endl;
    
    float precisionTestFloat = 1.23456789e2;
    double precisionTestDouble = 1.23456789e2;
    
    cout << "🔍 Same number stored as float and double:" << endl;
    cout << "   Original: 1.23456789e2 (123.456789)" << endl;
    cout << "   Float:  " << precisionTestFloat << " (less precision)" << endl;
    cout << "   Double: " << precisionTestDouble << " (more precision)" << endl;
    cout << "   💡 Double can store more decimal places accurately" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 6: Practical Applications
    // =========================================================
    cout << "📊 EXAMPLE 6: When to Use Scientific Notation" << endl;
    cout << "Real-world examples where scientific notation is useful:" << endl;
    cout << endl;
    
    cout << "🧪 Physics & Science:" << endl;
    cout << "   Avogadro's number: 6.022e23 molecules/mol" << endl;
    cout << "   Proton mass: 1.673e-27 kg" << endl;
    cout << "   Speed of light: 2.998e8 m/s" << endl;
    cout << endl;
    
    cout << "💰 Finance & Economics:" << endl;
    cout << "   National debt: 3.1e13 dollars (31 trillion)" << endl;
    cout << "   Stock price precision: 123.45e0 dollars" << endl;
    cout << endl;
    
    cout << "💻 Computer Science:" << endl;
    cout << "   Nanosecond timing: 1.5e-9 seconds" << endl;
    cout << "   Large dataset sizes: 2.5e6 records (2.5 million)" << endl;
    cout << endl;
    
    // =========================================================
    // SUMMARY SECTION
    // =========================================================
    cout << "===========================================" << endl;
    cout << "📚 SUMMARY - What You Learned:" << endl;
    cout << "1. Scientific notation represents very large/small numbers efficiently" << endl;
    cout << "2. Format: [number]e[exponent] where e means '× 10^'" << endl;
    cout << "3. Positive exponent = large number (3e4 = 30000)" << endl;
    cout << "4. Negative exponent = small number (3e-4 = 0.0003)" << endl;
    cout << "5. Both 'e' and 'E' work the same way" << endl;
    cout << "6. float = 32-bit precision, double = 64-bit precision" << endl;
    cout << endl;
    
    cout << "🔑 SCIENTIFIC NOTATION RULES:" << endl;
    cout << "• 1e3 = 1 × 10^3 = 1000" << endl;
    cout << "• 2.5e4 = 2.5 × 10^4 = 25000" << endl;
    cout << "• 1e-3 = 1 × 10^-3 = 0.001" << endl;
    cout << "• 3.14e0 = 3.14 × 10^0 = 3.14" << endl;
    cout << endl;
    
    cout << "💡 WHEN TO USE SCIENTIFIC NOTATION:" << endl;
    cout << "• Very large numbers (population, distances, money)" << endl;
    cout << "• Very small numbers (atomic scales, precision measurements)" << endl;
    cout << "• Scientific calculations and physics simulations" << endl;
    cout << "• When you need to avoid typing many zeros" << endl;
    cout << endl;
    
    cout << "🎯 DATA TYPE RECOMMENDATIONS:" << endl;
    cout << "• Use float for basic calculations (saves memory)" << endl;
    cout << "• Use double for precise scientific calculations" << endl;
    cout << "• Double is often the default choice for real numbers" << endl;
    cout << "• Consider precision needs vs memory usage" << endl;
    cout << endl;
    
    cout << "⚡ PERFORMANCE TIPS:" << endl;
    cout << "• Scientific notation has no performance cost" << endl;
    cout << "• It's just a way to write numbers, not a different type" << endl;
    cout << "• Modern computers handle floating-point efficiently" << endl;
    cout << "• Choose precision based on your actual needs" << endl;
    cout << endl;
    
    cout << "🎉 Excellent! You now understand scientific notation!" << endl;
    cout << "💡 Try using scientific notation in your own calculations!" << endl;
    
    return 0; // Program completed successfully
}