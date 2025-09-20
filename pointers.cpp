/*
 * C++ Pointers Introduction
 * =========================
 * 
 * This file demonstrates fundamental pointer concepts in C++:
 * - What pointers are and why they're useful
 * - Memory addresses and the address-of operator (&)
 * - Pointer declaration and initialization
 * - Dereferencing pointers with the dereference operator (*)
 * - Multiple ways to access pointer values
 * 
 * Key Concept: A pointer is a variable that stores the memory address
 * of another variable, rather than storing the value directly.
 */

#include <string>    // For string class
#include <iostream>  // For input/output operations
using namespace std;

int main() {
    /*
     * Step 1: Create a regular string variable
     * This stores the actual string value in memory
     */
    string name = "Pravin";
    cout << "=== C++ Pointers Demonstration ===" << endl;
    cout << "Original string value: " << name << endl;
    cout << endl;
    
    /*
     * Step 2: Create a pointer to the string
     * 
     * Syntax breakdown:
     * - string* : This declares a pointer that can point to string objects
     * - myName  : This is the name of our pointer variable
     * - &name   : The address-of operator (&) gets the memory address of 'name'
     * 
     * So myName now contains the memory address where 'name' is stored
     */
    string* myName = &name;
    
    cout << "=== Understanding Memory Addresses ===" << endl;
    /*
     * Step 3: Display the memory address
     * When you print a pointer directly, it shows the memory address
     */
    cout << "Memory address of 'name' variable: " << myName << endl;
    cout << "Same address using &name directly: " << &name << endl;
    cout << endl;
    
    /*
     * Step 4: Access the value through the pointer (Dereferencing)
     * 
     * The * operator is used to "dereference" the pointer
     * This means: "go to the address stored in the pointer and get the value there"
     */
    cout << "=== Accessing Values Through Pointers ===" << endl;
    cout << "Value accessed through pointer (*myName): " << *myName << endl;
    
    /*
     * Step 5: Alternative dereferencing syntax
     * Parentheses for clarity - same as above but more explicit
     */
    cout << "Same value with explicit parentheses: " << *(myName) << endl;
    
    /*
     * Step 6: Direct dereferencing of address
     * This combines getting the address (&name) and immediately dereferencing it (*)
     * The * and & operations cancel each other out, giving us the original value
     */
    cout << "Direct address-and-dereference: " << *(&name) << endl;
    cout << endl;
    
    /*
     * Step 7: Demonstrate that all methods give the same result
     */
    cout << "=== Verification - All Should Be The Same ===" << endl;
    cout << "Original variable:           " << name << endl;
    cout << "Through pointer:             " << *myName << endl;
    cout << "Through explicit dereference: " << *(myName) << endl;
    cout << "Through address dereference:  " << *(&name) << endl;
    cout << endl;
    
    /*
     * Step 8: Modify value through pointer to show they're connected
     */
    cout << "=== Modifying Through Pointer ===" << endl;
    *myName = "Modified through pointer!";
    cout << "After modifying through pointer:" << endl;
    cout << "Original variable 'name': " << name << endl;
    cout << "Through pointer '*myName': " << *myName << endl;
    
    /*
     * Key Learning Points:
     * 
     * 1. Pointers store memory addresses, not values
     * 2. & operator gets the address of a variable
     * 3. * operator dereferences a pointer (gets the value at that address)
     * 4. string* declares a pointer to string
     * 5. Pointers and the original variable refer to the same memory location
     * 6. Modifying through a pointer changes the original variable
     * 
     * Why use pointers?
     * - Efficient memory usage (don't copy large objects)
     * - Allow functions to modify original variables
     * - Enable dynamic memory allocation
     * - Required for certain data structures (linked lists, trees)
     * 
     * Common Pointer Operations:
     * - Declaration: type* pointerName;
     * - Assignment: pointerName = &variable;
     * - Dereferencing: *pointerName
     * - Address access: pointerName (shows address)
     */
    
    return 0;
}