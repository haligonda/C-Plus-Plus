/*
 * C++ String Manipulation Examples
 * ================================
 * 
 * This file demonstrates fundamental string operations in C++:
 * - String concatenation using append()
 * - Getting string length using length() and size()
 * - Working with escape characters (\")
 * 
 * Concept: Strings are objects in C++ (not just arrays like in C)
 * They come with built-in methods to manipulate text data.
 */

#include <iostream>  // For input/output operations (cout, endl)
#include <string>    // For string class and its methods
using namespace std; // Allows us to use cout instead of std::cout

// Function to demonstrate string concatenation
void name() {
    // Create two string variables with names (escaped quotes for demonstration)
    string fname = "\"Pravin\"";     // First name with quotes
    string lname = "\"Haligonda\"";  // Last name with quotes
    
    // Concatenate (join) strings using append() method
    // append() modifies the original string (fname) and returns it
    string fullname = fname.append(lname);
    
    // Display the result
    cout << fullname << endl;
    
    // Note: We could also use the + operator: fullname = fname + lname
}

int main() {
    // This is where program execution begins
    
    // Call our string concatenation function
    name();
    
    // Create a string containing the alphabet
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    // Both length() and size() return the number of characters
    // They do exactly the same thing - just different names for historical reasons
    cout << txt.length() << endl;  // Returns: 26
    cout << txt.size() << endl;    // Returns: 26 (same as length())
    
    /* 
     * Key Learning Points:
     * 1. Strings are objects with built-in methods
     * 2. append() modifies the original string
     * 3. length() and size() are equivalent
     * 4. Use escape character \" to include quotes in strings
     */
    
    return 0; // Indicates successful program completion
}