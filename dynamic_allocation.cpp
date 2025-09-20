/*
 * DYNAMIC MEMORY ALLOCATION IN C++ 🧠
 * 
 * This program teaches you:
 * 1. What dynamic memory allocation is and why it's important
 * 2. The difference between stack and heap memory
 * 3. How to use 'new' and 'delete' operators
 * 4. Why memory management matters
 * 5. Common mistakes and how to avoid them
 * 
 * Key Concepts:
 * - Stack memory: Automatic, limited, fast (local variables)
 * - Heap memory: Manual, large, flexible (dynamic allocation)
 * - new: Allocates memory on the heap
 * - delete: Frees memory from the heap
 * - Memory leak: When you forget to delete allocated memory
 * - Dangling pointer: Pointer to deleted memory
 * 
 * Think of it like this:
 * - Stack = Your desk (limited space, automatically organized)
 * - Heap = A warehouse (lots of space, you manage it yourself)
 */

#include <string>
#include <iostream>
using namespace std;

int main() {
    cout << "=== DYNAMIC MEMORY ALLOCATION IN C++ ===" << endl;
    cout << "Learn how to manage memory like a pro!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 1: Understanding Memory Types
    // =========================================================
    cout << "📊 EXAMPLE 1: Stack vs Heap Memory" << endl;
    cout << "Let's understand the two types of memory:" << endl;
    cout << endl;
    
    cout << "📚 STACK MEMORY:" << endl;
    cout << "• Automatic management (C++ handles it)" << endl;
    cout << "• Limited size (usually a few MB)" << endl;
    cout << "• Fast access" << endl;
    cout << "• Variables are automatically destroyed" << endl;
    cout << "• Used for local variables, function parameters" << endl;
    cout << endl;
    
    // Stack example
    string stackVariable = "I'm on the stack!";
    cout << "🔍 Stack variable example:" << endl;
    cout << "   string stackVariable = \"I'm on the stack!\";" << endl;
    cout << "   Value: " << stackVariable << endl;
    cout << "   💡 This will be automatically deleted when function ends" << endl;
    cout << endl;
    
    cout << "🏭 HEAP MEMORY:" << endl;
    cout << "• Manual management (you control it)" << endl;
    cout << "• Large size (limited by system RAM)" << endl;
    cout << "• Slightly slower access" << endl;
    cout << "• Variables persist until you delete them" << endl;
    cout << "• Used for dynamic allocation, large data" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 2: Basic Dynamic Allocation
    // =========================================================
    cout << "📊 EXAMPLE 2: Creating Dynamic Memory" << endl;
    cout << "Let's allocate memory on the heap:" << endl;
    cout << endl;
    
    // Allocate memory dynamically
    string* dynamicString = new string("Dynamic Memory Allocation");
    
    cout << "🔍 Dynamic allocation syntax:" << endl;
    cout << "   string* dynamicString = new string(\"Dynamic Memory Allocation\");" << endl;
    cout << "   💡 'new' allocates memory on the heap" << endl;
    cout << "   💡 Returns a pointer to the allocated memory" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 3: Accessing Dynamic Memory
    // =========================================================
    cout << "📊 EXAMPLE 3: Accessing Dynamic Memory" << endl;
    cout << "How to work with dynamically allocated memory:" << endl;
    cout << endl;
    
    cout << "🔍 Memory address (pointer value):" << endl;
    cout << "   dynamicString = " << dynamicString << endl;
    cout << "   💡 This is the hexadecimal address where the string is stored" << endl;
    cout << "   💡 Every time you run, this address will be different" << endl;
    cout << endl;
    
    cout << "🔍 Dereferencing (getting the actual value):" << endl;
    cout << "   *dynamicString = \"" << *dynamicString << "\"" << endl;
    cout << "   💡 The * operator gets the value at the memory address" << endl;
    cout << "   💡 This is called 'dereferencing' the pointer" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 4: Memory Management - The Critical Part!
    // =========================================================
    cout << "📊 EXAMPLE 4: Proper Memory Management" << endl;
    cout << "This is the most important part!" << endl;
    cout << endl;
    
    cout << "⚠️  CRITICAL: Always clean up dynamic memory!" << endl;
    cout << "   delete dynamicString;" << endl;
    cout << "   💡 'delete' frees the memory back to the system" << endl;
    cout << "   💡 Without this, you create a memory leak!" << endl;
    cout << endl;
    
    // Clean up the dynamically allocated memory
    delete dynamicString;
    
    cout << "✅ Memory successfully freed!" << endl;
    cout << "   The memory at address " << dynamicString << " is now available for reuse" << endl;
    cout << "   💡 The pointer still holds the address, but the memory is freed" << endl;
    cout << "   💡 Using the pointer now would be undefined behavior!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 5: Best Practices Demo
    // =========================================================
    cout << "📊 EXAMPLE 5: Best Practices in Action" << endl;
    cout << "Let's see proper dynamic memory usage:" << endl;
    cout << endl;
    
    cout << "🔧 Step 1: Allocate memory" << endl;
    int* dynamicInteger = new int(42);
    cout << "   int* dynamicInteger = new int(42);" << endl;
    cout << "   Memory address: " << dynamicInteger << endl;
    cout << "   Value stored: " << *dynamicInteger << endl;
    cout << endl;
    
    cout << "🔧 Step 2: Use the memory" << endl;
    cout << "   Original value: " << *dynamicInteger << endl;
    *dynamicInteger = 100; // Modify the value
    cout << "   Modified value: " << *dynamicInteger << endl;
    cout << "   💡 We can modify the value through the pointer" << endl;
    cout << endl;
    
    cout << "🔧 Step 3: Clean up (CRITICAL!)" << endl;
    delete dynamicInteger;
    cout << "   delete dynamicInteger;" << endl;
    cout << "   ✅ Memory freed successfully!" << endl;
    cout << endl;
    
    cout << "🔧 Step 4: Good practice - nullify pointer" << endl;
    dynamicInteger = nullptr;
    cout << "   dynamicInteger = nullptr;" << endl;
    cout << "   💡 This prevents accidental use of freed memory" << endl;
    cout << "   💡 nullptr is a special value meaning 'no address'" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 6: Common Mistakes and How to Avoid Them
    // =========================================================
    cout << "📊 EXAMPLE 6: Common Mistakes to Avoid" << endl;
    cout << "Learn from these common errors:" << endl;
    cout << endl;
    
    cout << "❌ MISTAKE 1: Memory Leak" << endl;
    cout << "   BAD:  int* ptr = new int(5);" << endl;
    cout << "         // Oops! Forgot to delete ptr" << endl;
    cout << "   GOOD: int* ptr = new int(5);" << endl;
    cout << "         delete ptr;" << endl;
    cout << "         ptr = nullptr;" << endl;
    cout << endl;
    
    cout << "❌ MISTAKE 2: Double Delete" << endl;
    cout << "   BAD:  delete ptr;" << endl;
    cout << "         delete ptr;  // Crash! Already deleted" << endl;
    cout << "   GOOD: delete ptr;" << endl;
    cout << "         ptr = nullptr;" << endl;
    cout << "         // Now safe from accidental double delete" << endl;
    cout << endl;
    
    cout << "❌ MISTAKE 3: Using After Delete" << endl;
    cout << "   BAD:  delete ptr;" << endl;
    cout << "         cout << *ptr;  // Undefined behavior!" << endl;
    cout << "   GOOD: delete ptr;" << endl;
    cout << "         ptr = nullptr;" << endl;
    cout << "         // Can't accidentally use ptr now" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 7: When to Use Dynamic Allocation
    // =========================================================
    cout << "📊 EXAMPLE 7: When to Use Dynamic Memory" << endl;
    cout << "Guidelines for when dynamic allocation is useful:" << endl;
    cout << endl;
    
    cout << "✅ USE DYNAMIC ALLOCATION WHEN:" << endl;
    cout << "• You don't know the size at compile time" << endl;
    cout << "• You need very large amounts of memory" << endl;
    cout << "• You want data to persist beyond current scope" << endl;
    cout << "• You're implementing data structures (lists, trees)" << endl;
    cout << "• You need to return large objects from functions" << endl;
    cout << endl;
    
    cout << "❌ DON'T USE DYNAMIC ALLOCATION WHEN:" << endl;
    cout << "• Stack allocation works fine" << endl;
    cout << "• You have small, fixed-size data" << endl;
    cout << "• Data only needs to exist in current scope" << endl;
    cout << "• You're a beginner (stick to stack until comfortable)" << endl;
    cout << endl;
    
    // =========================================================
    // SUMMARY SECTION
    // =========================================================
    cout << "===========================================" << endl;
    cout << "📚 SUMMARY - What You Learned:" << endl;
    cout << "1. Stack memory is automatic, heap memory is manual" << endl;
    cout << "2. Use 'new' to allocate, 'delete' to free memory" << endl;
    cout << "3. Always delete what you new - no exceptions!" << endl;
    cout << "4. Set pointers to nullptr after deleting" << endl;
    cout << "5. Dynamic allocation gives you more memory and control" << endl;
    cout << endl;
    
    cout << "🔑 ESSENTIAL SYNTAX:" << endl;
    cout << "• Allocate:    Type* ptr = new Type(value);" << endl;
    cout << "• Access:      *ptr or ptr->member" << endl;
    cout << "• Modify:      *ptr = newValue;" << endl;
    cout << "• Deallocate:  delete ptr;" << endl;
    cout << "• Nullify:     ptr = nullptr;" << endl;
    cout << endl;
    
    cout << "⚡ THE GOLDEN RULE:" << endl;
    cout << "For every 'new', there must be exactly one 'delete'!" << endl;
    cout << "💡 This prevents memory leaks and crashes" << endl;
    cout << endl;
    
    cout << "🛡️ SAFETY TIPS:" << endl;
    cout << "• Check if pointer is nullptr before using it" << endl;
    cout << "• Initialize pointers to nullptr when declaring" << endl;
    cout << "• Use smart pointers (std::unique_ptr) in modern C++" << endl;
    cout << "• Consider RAII (Resource Acquisition Is Initialization)" << endl;
    cout << endl;
    
    cout << "🎉 Excellent! You now understand dynamic memory allocation!" << endl;
    cout << "💡 Remember: With great power comes great responsibility!" << endl;
    cout << "🚀 Practice with small examples before using in big projects!" << endl;
    
    return 0; // Program completed successfully
}