/*
 * STRINGS IN C++ 📝
 * 
 * This program teaches you:
 * 1. How to work with strings in C++
 * 2. String concatenation (joining strings together)
 * 3. String length and size operations
 * 4. Escape characters and special formatting
 * 5. Different ways to combine and manipulate strings
 * 
 * Key Concepts:
 * - string: A sequence of characters
 * - Concatenation: Joining strings together
 * - .append(): Method to add text to a string
 * - .length() and .size(): Get the number of characters
 * - Escape characters: Special characters like \"
 */

#include <iostream>
#include <string>
using namespace std;

/*
 * FUNCTION: demonstrateNames
 * Shows how to work with string concatenation and formatting
 */
void demonstrateNames() {
    cout << "📊 EXAMPLE 1: Name Concatenation" << endl;
    cout << "Let's learn how to join strings together!" << endl;
    cout << endl;
    
    // Create first name with escaped quotes
    // The \" means we want actual quote marks in the string
    string firstName = "\"Pravin\"";
    string lastName = "\"Haligonda\"";
    
    cout << "🔍 Original strings:" << endl;
    cout << "   First name: " << firstName << endl;
    cout << "   Last name:  " << lastName << endl;
    cout << "   💡 The \\\" creates actual quote marks in the output" << endl;
    cout << endl;
    
    // Method 1: Using .append() to join strings
    cout << "🔗 Method 1: Using .append() function" << endl;
    string fullNameAppend = firstName; // Start with first name
    fullNameAppend.append(" "); // Add a space
    fullNameAppend.append(lastName); // Add last name
    cout << "   Result: " << fullNameAppend << endl;
    cout << endl;
    
    // Method 2: Using + operator
    cout << "🔗 Method 2: Using + operator" << endl;
    string fullNamePlus = firstName + " " + lastName;
    cout << "   Result: " << fullNamePlus << endl;
    cout << endl;
    
    // Method 3: Using += operator  
    cout << "🔗 Method 3: Using += operator" << endl;
    string fullNamePlusEqual = firstName;
    fullNamePlusEqual += " "; // Add space
    fullNamePlusEqual += lastName; // Add last name
    cout << "   Result: " << fullNamePlusEqual << endl;
    cout << endl;
    
    cout << "✅ All three methods produce the same result!" << endl;
    cout << endl;
}

/*
 * FUNCTION: demonstrateStringProperties
 * Shows how to get information about strings
 */
void demonstrateStringProperties() {
    cout << "📊 EXAMPLE 2: String Properties" << endl;
    cout << "Let's explore string length and size!" << endl;
    cout << endl;
    
    // Create a test string - the alphabet
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    cout << "🔍 Test string: \"" << alphabet << "\"" << endl;
    cout << endl;
    
    // Check string length using .length()
    cout << "📏 Using .length() method:" << endl;
    int lengthResult = alphabet.length();
    cout << "   alphabet.length() = " << lengthResult << " characters" << endl;
    cout << endl;
    
    // Check string size using .size()  
    cout << "📏 Using .size() method:" << endl;
    int sizeResult = alphabet.size();
    cout << "   alphabet.size() = " << sizeResult << " characters" << endl;
    cout << endl;
    
    cout << "💡 IMPORTANT: .length() and .size() do the exact same thing!" << endl;
    cout << "   Both return the number of characters in the string." << endl;
    cout << "   You can use either one - they're identical." << endl;
    cout << endl;
    
    // Demonstrate with different strings
    cout << "🧪 Testing with different strings:" << endl;
    
    string shortString = "Hi";
    string emptyString = "";
    string numberString = "12345";
    
    cout << "   \"" << shortString << "\" has " << shortString.length() << " characters" << endl;
    cout << "   \"" << emptyString << "\" has " << emptyString.length() << " characters (empty string)" << endl;
    cout << "   \"" << numberString << "\" has " << numberString.length() << " characters" << endl;
    cout << endl;
}

/*
 * FUNCTION: demonstrateEscapeCharacters
 * Shows how to use special characters in strings
 */
void demonstrateEscapeCharacters() {
    cout << "📊 EXAMPLE 3: Escape Characters" << endl;
    cout << "Learn how to include special characters in strings!" << endl;
    cout << endl;
    
    cout << "🔤 Common escape characters:" << endl;
    cout << "   \\\" = quotation mark" << endl;
    cout << "   \\\\ = backslash" << endl;
    cout << "   \\n = new line" << endl;
    cout << "   \\t = tab" << endl;
    cout << endl;
    
    cout << "🔍 Examples in action:" << endl;
    
    // Quotes example
    string withQuotes = "He said \"Hello World!\"";
    cout << "   With quotes: " << withQuotes << endl;
    
    // Backslash example
    string withBackslash = "File path: C:\\Users\\Documents\\";
    cout << "   With backslash: " << withBackslash << endl;
    
    // Newline example  
    string withNewline = "Line 1\\nLine 2\\nLine 3";
    cout << "   With newline: " << withNewline << endl;
    cout << "   Actual output:" << endl;
    cout << "Line 1\nLine 2\nLine 3" << endl;
    
    // Tab example
    string withTabs = "Name:\\tJohn\\tDoe";
    cout << "   With tabs: " << withTabs << endl;
    cout << "   Actual output:" << endl;
    cout << "Name:\tJohn\tDoe" << endl;
    cout << endl;
}

/*
 * FUNCTION: demonstrateStringBuilding
 * Shows different ways to build strings
 */
void demonstrateStringBuilding() {
    cout << "📊 EXAMPLE 4: Building Strings Step by Step" << endl;
    cout << "Watch how we can build complex strings!" << endl;
    cout << endl;
    
    // Start with an empty string
    string message = "";
    
    cout << "🏗️ Building a message step by step:" << endl;
    cout << "   Starting with empty string: \"" << message << "\"" << endl;
    
    // Add parts one by one
    message += "Hello";
    cout << "   After adding 'Hello': \"" << message << "\"" << endl;
    
    message += " ";  
    cout << "   After adding space: \"" << message << "\"" << endl;
    
    message += "from";
    cout << "   After adding 'from': \"" << message << "\"" << endl;
    
    message += " C++";
    cout << "   After adding ' C++': \"" << message << "\"" << endl;
    
    message += " programming!";
    cout << "   Final message: \"" << message << "\"" << endl;
    cout << "   Length: " << message.length() << " characters" << endl;
    cout << endl;
    
    cout << "✅ String building complete!" << endl;
    cout << endl;
}

/*
 * MAIN FUNCTION - The program starts here!
 */
int main() {
    cout << "=== STRINGS IN C++ ===" << endl;
    cout << "Master the art of working with text!" << endl;
    cout << endl;
    
    // Run all demonstrations
    demonstrateNames();
    cout << "===========================================" << endl;
    cout << endl;
    
    demonstrateStringProperties();
    cout << "===========================================" << endl;
    cout << endl;
    
    demonstrateEscapeCharacters();
    cout << "===========================================" << endl;
    cout << endl;
    
    demonstrateStringBuilding();
    cout << "===========================================" << endl;
    cout << endl;
    
    // Summary section
    cout << "📚 SUMMARY - What You Learned:" << endl;
    cout << "1. Strings store sequences of characters" << endl;
    cout << "2. Concatenation: .append(), +, and += operators" << endl;
    cout << "3. String length: .length() and .size() (identical functions)" << endl;
    cout << "4. Escape characters: \\\", \\\\, \\n, \\t for special formatting" << endl;
    cout << "5. Strings can be built step by step" << endl;
    cout << endl;
    
    cout << "🔑 COMMON STRING OPERATIONS:" << endl;
    cout << "• Joining: string1 + string2" << endl;
    cout << "• Adding: string1 += \"more text\"" << endl;
    cout << "• Length: string1.length() or string1.size()" << endl;
    cout << "• Quotes: \"He said \\\"hello\\\"\"" << endl;
    cout << endl;
    
    cout << "💡 PRACTICAL TIPS:" << endl;
    cout << "• Use + for simple concatenation" << endl;
    cout << "• Use += when building strings in steps" << endl;
    cout << "• Use .append() for more complex operations" << endl;
    cout << "• Remember escape characters for special formatting" << endl;
    cout << endl;
    
    cout << "🎉 Excellent! You now understand strings in C++!" << endl;
    cout << "💡 Try creating your own string combinations!" << endl;
    
    return 0; // Program completed successfully
}