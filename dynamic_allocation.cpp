/*
 * C++ Dynamic Memory Allocation
 * =============================
 * 
 * This file demonstrates:
 * - Dynamic memory allocation using 'new' operator
 * - The difference between stack and heap memory
 * - Proper memory management with 'delete' operator
 * - Working with dynamically allocated objects
 * 
 * Key Concepts:
 * - Stack memory: Automatic allocation/deallocation (local variables)
 * - Heap memory: Manual allocation/deallocation (dynamic allocation)
 * - Memory leaks: What happens when you forget to delete
 */

#include <string>    // For string class
#include <iostream>  // For input/output operations
using namespace std;

int main() {
    cout << "=== C++ Dynamic Memory Allocation Demo ===" << endl;
    cout << endl;
    
    /*
     * Step 1: Dynamic Memory Allocation
     * 
     * Syntax: new dataType(initial_value)
     * - 'new' allocates memory on the heap
     * - Returns a pointer to the allocated memory
     * - The memory persists until explicitly deleted
     * 
     * Compare with stack allocation:
     * Stack:  string normalString = "Hello";     (automatic cleanup)
     * Heap:   string* dynamicName = new string("Hello");  (manual cleanup required)
     */
    string* dynamicName = new string("Dynamic Memory Allocation");
    
    cout << "=== Memory Allocation Information ===" << endl;
    cout << "Allocated string content: " << *dynamicName << endl;
    cout << endl;
    
    /*
     * Step 2: Understanding Memory Addresses
     * The pointer stores the memory address where our string is located
     */
    cout << "=== Memory Address Information ===" << endl;
    cout << "Memory address (pointer value): " << dynamicName << endl;
    cout << "This address is on the heap (dynamic memory)" << endl;
    cout << endl;
    
    /*
     * Step 3: Accessing the Value (Dereferencing)
     * Use the dereference operator (*) to access the actual string value
     */
    cout << "=== Accessing the Dynamically Allocated Value ===" << endl;
    cout << "Dereferenced value: " << *dynamicName << endl;
    cout << "String length: " << (*dynamicName).length() << " characters" << endl;
    cout << "Alternative syntax: " << dynamicName->length() << " characters" << endl;
    cout << endl;
    
    /*
     * Step 4: Modifying the Dynamic String
     * We can modify the string through the pointer
     */
    cout << "=== Modifying Dynamic Memory ===" << endl;
    *dynamicName += " - Modified!";
    cout << "After modification: " << *dynamicName << endl;
    cout << endl;
    
    /*
     * Step 5: CRITICAL - Clean Up Dynamically Allocated Memory
     * 
     * This is the most important part!
     * - Every 'new' must have a corresponding 'delete'
     * - Failing to delete causes memory leaks
     * - Memory leaks waste system resources
     * - In large programs, memory leaks can crash your application
     */
    cout << "=== Memory Cleanup (IMPORTANT!) ===" << endl;
    cout << "About to delete dynamically allocated memory..." << endl;
    
    delete dynamicName;  // Free the memory allocated with 'new'
    
    cout << "Memory successfully deallocated!" << endl;
    
    /*
     * Step 6: Safety Note
     * After deletion, the pointer becomes a "dangling pointer"
     * It still holds the old address, but that memory is no longer ours
     * Accessing it would be undefined behavior (dangerous!)
     */
    cout << endl;
    cout << "=== Safety Information ===" << endl;
    cout << "Pointer after deletion (dangling pointer): " << dynamicName << endl;
    cout << "WARNING: Accessing *dynamicName now would be dangerous!" << endl;
    cout << "Good practice: Set pointer to nullptr after deletion" << endl;
    
    // Best practice: Set to nullptr after deletion
    dynamicName = nullptr;
    cout << "Pointer after setting to nullptr: " << dynamicName << endl;
    
    /*
     * Step 7: Demonstrate Multiple Allocations
     * Show that each 'new' gets a different memory address
     */
    cout << endl;
    cout << "=== Multiple Dynamic Allocations ===" << endl;
    string* str1 = new string("First string");
    string* str2 = new string("Second string");
    string* str3 = new string("Third string");
    
    cout << "str1 address: " << str1 << " -> " << *str1 << endl;
    cout << "str2 address: " << str2 << " -> " << *str2 << endl;
    cout << "str3 address: " << str3 << " -> " << *str3 << endl;
    
    // Clean up all allocations
    delete str1;
    delete str2;
    delete str3;
    
    cout << "All dynamic memory cleaned up!" << endl;
    
    /*
     * Key Learning Points:
     * 
     * 1. 'new' allocates memory on the heap and returns a pointer
     * 2. Heap memory persists until explicitly deleted
     * 3. Always pair 'new' with 'delete' to prevent memory leaks
     * 4. After 'delete', the pointer becomes dangling - set it to nullptr
     * 5. Use -> operator as shorthand for (*pointer).member
     * 
     * When to use dynamic allocation:
     * - When you don't know the size at compile time
     * - When you need objects to persist beyond their scope
     * - When working with large objects (avoid stack overflow)
     * - When implementing data structures like linked lists, trees
     * 
     * Modern C++ alternatives:
     * - Smart pointers (std::unique_ptr, std::shared_ptr) - automatic cleanup
     * - Standard containers (std::vector, std::string) - manage memory for you
     * - RAII (Resource Acquisition Is Initialization) - automatic resource management
     */
    
    return 0;
}