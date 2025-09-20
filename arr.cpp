/*
 * ARRAYS IN C++ 📋
 * 
 * This program teaches you:
 * 1. How to create and use arrays
 * 2. Different ways to loop through arrays
 * 3. Range-based for loops (modern C++ feature)
 * 4. How to work with different data types in arrays
 * 5. How to calculate array size
 * 
 * Key Concepts:
 * - Array: A collection of elements of the same type
 * - Index: Position of an element in an array (starts at 0)
 * - Range-based for loop: Easy way to go through all elements
 * - sizeof(): Function to get the size in bytes
 */

#include <iostream>
using namespace std;

int main() {
    cout << "=== ARRAYS IN C++ ===" << endl;
    cout << "Learn how to store and work with multiple values!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 1: Integer Array with Range-Based For Loop
    // =========================================================
    cout << "📊 EXAMPLE 1: Integer Array" << endl;
    
    // Create an array of 10 integers
    // Arrays in C++ have fixed size and all elements are the same type
    int numbers[10] = {0, 1, 2, 3, 4, 5, 5, 6, 6, 9};
    //              [0][1][2][3][4][5][6][7][8][9] <- these are the index positions
    
    cout << "Created an array of integers: {0, 1, 2, 3, 4, 5, 5, 6, 6, 9}" << endl;
    cout << "💡 Notice: Arrays start counting at position 0, not 1!" << endl;
    cout << endl;
    
    cout << "🔍 Method 1: Range-based for loop (modern C++)" << endl;
    cout << "This is the easiest way to go through all elements:" << endl;
    cout << "Array contents: ";
    
    // Range-based for loop - goes through each element automatically
    for (int currentNumber : numbers) {
        cout << currentNumber << " ";
    }
    cout << endl;
    cout << "✅ Range-based for loop completed!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 2: String Array with Range-Based For Loop  
    // =========================================================
    cout << "📊 EXAMPLE 2: String Array" << endl;
    
    // Create an array of 5 strings (car brands)
    string carBrands[5] = {"Shelby", "Ford", "BMW", "Range Rover", "Volvo"};
    
    cout << "Created an array of car brands:" << endl;
    cout << "🔍 Using range-based for loop to display each brand:" << endl;
    
    int brandNumber = 1; // Counter to show position
    for (string currentBrand : carBrands) {
        cout << "   " << brandNumber << ". " << currentBrand << endl;
        brandNumber++; // Move to next position
    }
    cout << "✅ String array processing completed!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 3: Traditional For Loop (Alternative Method)
    // =========================================================
    cout << "📊 EXAMPLE 3: Traditional For Loop" << endl;
    cout << "This is another way to loop through arrays:" << endl;
    
    cout << "🔍 Accessing array elements by index position:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "   Position " << i << ": " << carBrands[i] << endl;
    }
    cout << "✅ Traditional for loop completed!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 4: Array Size Calculation
    // =========================================================
    cout << "📊 EXAMPLE 4: Array Size Information" << endl;
    
    // Calculate the number of elements in the array
    // sizeof(numbers) gives total bytes, sizeof(int) gives bytes per element
    int arraySize = sizeof(numbers) / sizeof(int);
    
    cout << "🔍 Array size calculations:" << endl;
    cout << "   Total bytes used by array: " << sizeof(numbers) << " bytes" << endl;
    cout << "   Bytes per integer: " << sizeof(int) << " bytes" << endl;
    cout << "   Number of elements: " << arraySize << " elements" << endl;
    cout << "   Formula: sizeof(array) / sizeof(element_type)" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 5: Accessing Individual Elements
    // =========================================================
    cout << "📊 EXAMPLE 5: Individual Element Access" << endl;
    cout << "🔍 Accessing specific elements by index:" << endl;
    
    cout << "   First element (index 0): " << numbers[0] << endl;
    cout << "   Second element (index 1): " << numbers[1] << endl;  
    cout << "   Last element (index " << (arraySize-1) << "): " << numbers[arraySize-1] << endl;
    cout << "   💡 Remember: Last index is always (size - 1)!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 6: Modifying Array Elements
    // =========================================================
    cout << "📊 EXAMPLE 6: Modifying Array Elements" << endl;
    cout << "Arrays are mutable - we can change their values!" << endl;
    
    cout << "🔍 Before modification:" << endl;
    cout << "   Element at index 0: " << numbers[0] << endl;
    
    // Change the first element
    numbers[0] = 99;
    
    cout << "🔄 After changing numbers[0] to 99:" << endl;
    cout << "   Element at index 0: " << numbers[0] << endl;
    cout << "✅ Array element successfully modified!" << endl;
    cout << endl;
    
    // =========================================================
    // SUMMARY AND KEY POINTS
    // =========================================================
    cout << "📚 SUMMARY - What You Learned:" << endl;
    cout << "1. Arrays store multiple values of the same type" << endl;
    cout << "2. Array indices start at 0, not 1" << endl;
    cout << "3. Range-based for loops: for (type element : array)" << endl;
    cout << "4. Traditional for loops: for (int i = 0; i < size; i++)" << endl;
    cout << "5. Array size: sizeof(array) / sizeof(element_type)" << endl;
    cout << "6. Access elements: arrayName[index]" << endl;
    cout << "7. Arrays are mutable (can be changed)" << endl;
    cout << endl;
    
    cout << "🔑 IMPORTANT TIPS:" << endl;
    cout << "• Always ensure array indices are within bounds" << endl;
    cout << "• Use range-based for loops when possible (cleaner code)" << endl;
    cout << "• Arrays have fixed size once created" << endl;
    cout << "• All elements in an array must be the same data type" << endl;
    cout << endl;
    
    cout << "🎉 Excellent! You now understand arrays in C++!" << endl;
    cout << "💡 Try creating your own arrays with different data types!" << endl;
    
    return 0; // Program completed successfully
}