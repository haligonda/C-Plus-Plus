/*
 * C++ Array Examples
 * ==================
 * 
 * This file demonstrates fundamental array operations in C++:
 * - Array declaration and initialization
 * - Range-based for loops (C++11 feature)
 * - Working with different data types (int, string)
 * - Array sizing calculations
 * 
 * Concept: Arrays store multiple values of the same type in a single variable.
 */

#include <iostream>  // For input/output operations
using namespace std; // Standard namespace

int main() {
    // Integer Array Declaration and Initialization
    // Arrays can be initialized with values in curly braces
    int arr[10] = {0, 1, 2, 3, 4, 5, 5, 6, 6, 9};
    
    // Range-based for loop (C++11 feature) - cleaner than traditional for loops
    // This automatically iterates through each element
    // 'i' represents each element in the array, not the index
    cout << "Integer Array Elements:" << endl;
    for (int i : arr) {
        cout << i << "\n";  // Print each element on a new line
    }
    
    cout << "\n"; // Add spacing between outputs
    
    // String Array Example
    // Create an array of 5 car brand names
    string cars[5] = {"Shelby", "Ford", "BMW", "Range Rover", "Volvo"};
    
    // Another range-based for loop for strings
    // 'car' is each string element in the array
    cout << "Car Brands:" << endl;
    for (string car : cars) {
        cout << car << "\n";  // Print each car brand
    }
    
    cout << "\n";
    
    // Calculate Array Size
    // sizeof() returns total memory used by array in bytes
    // Dividing by 4 gives number of elements (since each int is typically 4 bytes)
    cout << "Number of elements in arr: " << sizeof(arr)/sizeof(int) << endl;
    
    // Note: sizeof(arr)/4 works but is less portable than sizeof(arr)/sizeof(int)
    // Different systems might use different sizes for integers
    
    /*
     * Key Learning Points:
     * 1. Arrays hold multiple values of the same type
     * 2. Array size must be known at compile time
     * 3. Range-based for loops make iteration cleaner
     * 4. sizeof() helps calculate array dimensions
     * 5. Array indexing starts at 0 (first element is arr[0])
     */
    
    return 0;
}