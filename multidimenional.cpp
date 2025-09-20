/*
 * MULTI-DIMENSIONAL ARRAYS IN C++ 📐
 * 
 * This program teaches you:
 * 1. What multi-dimensional arrays are and why they're useful
 * 2. How to create and use 1D, 2D, and 3D arrays
 * 3. How to access elements in multi-dimensional arrays
 * 4. Different ways to loop through multi-dimensional arrays
 * 5. Practical applications of multi-dimensional arrays
 * 
 * Key Concepts:
 * - 1D Array: Like a list [A, B, C]
 * - 2D Array: Like a table (rows and columns)
 * - 3D Array: Like a cube (depth, rows, columns)
 * - Nested loops: Loops inside loops for multi-dimensional access
 */

#include <iostream>
#include <string>
using namespace std;

/*
 * FUNCTION 1: oneDimensionalDemo
 * Demonstrates 1D arrays - the simplest form
 */
void oneDimensionalDemo() {
    cout << "📊 1D ARRAY DEMONSTRATION" << endl;
    cout << "Think of this like a simple list:" << endl;
    cout << endl;
    
    // Create a 1D array - just a simple list
    string letters[2] = {"A", "B"};
    
    cout << "🔍 Array structure: [A] [B]" << endl;
    cout << "   Index positions:  0   1" << endl;
    cout << endl;
    
    cout << "📝 Using range-based for loop to display:" << endl;
    int position = 0;
    for (string letter : letters) {
        cout << "   Position " << position << ": " << letter << endl;
        position++;
    }
    cout << "✅ 1D array demonstration complete!" << endl;
    cout << endl;
}

/*
 * FUNCTION 2: twoDimensionalDemo  
 * Demonstrates 2D arrays - like a table with rows and columns
 */
void twoDimensionalDemo() {
    cout << "📊 2D ARRAY DEMONSTRATION" << endl;
    cout << "Think of this like a table with rows and columns:" << endl;
    cout << endl;
    
    // Create a 2D array - like a table
    string letters[2][2] = {
        {"A", "B"},  // Row 0: A in column 0, B in column 1
        {"C", "D"},  // Row 1: C in column 0, D in column 1
    };
    
    cout << "🔍 Array structure (2x2 table):" << endl;
    cout << "     Column 0  Column 1" << endl;
    cout << "Row 0:   A        B" << endl;
    cout << "Row 1:   C        D" << endl;
    cout << endl;
    
    cout << "📝 Using nested for loops to display:" << endl;
    cout << "💡 We need two loops: one for rows, one for columns" << endl;
    cout << endl;
    
    for (int row = 0; row < 2; row++) {
        cout << "Row " << row << ": ";
        for (int column = 0; column < 2; column++) {
            cout << letters[row][column] << "\t";
            cout << "(position [" << row << "][" << column << "])\t";
        }
        cout << endl;
    }
    
    cout << "✅ 2D array demonstration complete!" << endl;
    cout << endl;
    
    // Show individual element access
    cout << "🎯 Individual element access examples:" << endl;
    cout << "   letters[0][0] = " << letters[0][0] << " (top-left)" << endl;
    cout << "   letters[0][1] = " << letters[0][1] << " (top-right)" << endl;
    cout << "   letters[1][0] = " << letters[1][0] << " (bottom-left)" << endl;
    cout << "   letters[1][1] = " << letters[1][1] << " (bottom-right)" << endl;
    cout << endl;
}

/*
 * FUNCTION 3: threeDimensionalDemo
 * Demonstrates 3D arrays - like multiple tables stacked together
 */
void threeDimensionalDemo() {
    cout << "📊 3D ARRAY DEMONSTRATION" << endl;
    cout << "Think of this like multiple tables stacked on top of each other:" << endl;
    cout << endl;
    
    // Create a 3D array - like stacked tables
    string letters[2][2][2] = {
        {                    // First "layer" (depth 0)
            {"A", "B"},      // Row 0 of layer 0
            {"C", "D"},      // Row 1 of layer 0
        },
        {                    // Second "layer" (depth 1)  
            {"E", "F"},      // Row 0 of layer 1
            {"J", "K"},      // Row 1 of layer 1
        }
    };
    
    cout << "🔍 Array structure (2 layers, each 2x2):" << endl;
    cout << "Layer 0:     Layer 1:" << endl;
    cout << " A  B         E  F" << endl;
    cout << " C  D         J  K" << endl;
    cout << endl;
    
    cout << "📝 Using triple nested for loops to display:" << endl;
    cout << "💡 We need three loops: depth, rows, and columns" << endl;
    cout << endl;
    
    for (int depth = 0; depth < 2; depth++) {
        cout << "=== LAYER " << depth << " ===" << endl;
        for (int row = 0; row < 2; row++) {
            cout << "Row " << row << ": ";
            for (int column = 0; column < 2; column++) {
                cout << letters[depth][row][column];
                cout << "[" << depth << "][" << row << "][" << column << "]";
                cout << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
    
    cout << "✅ 3D array demonstration complete!" << endl;
    cout << endl;
    
    // Show the pattern of access
    cout << "🎯 3D Array Access Pattern:" << endl;
    cout << "   array[depth][row][column]" << endl;
    cout << "   Example: letters[1][0][1] = " << letters[1][0][1] << endl;
    cout << "   This means: Layer 1, Row 0, Column 1" << endl;
    cout << endl;
}

/*
 * FUNCTION 4: practicalExample
 * Shows a practical use of multi-dimensional arrays
 */
void practicalExample() {
    cout << "📊 PRACTICAL EXAMPLE: Student Grades" << endl;
    cout << "Let's see how 2D arrays can store real-world data:" << endl;
    cout << endl;
    
    // 2D array representing student grades
    // Each row is a student, each column is a test score
    int studentGrades[3][4] = {
        {85, 90, 78, 92},  // Student 0's grades
        {88, 85, 91, 87},  // Student 1's grades  
        {92, 89, 95, 90}   // Student 2's grades
    };
    
    string studentNames[3] = {"Alice", "Bob", "Charlie"};
    string testNames[4] = {"Math", "Science", "English", "History"};
    
    cout << "🎓 Grade Report:" << endl;
    cout << "Student\t\tMath\tScience\tEnglish\tHistory\tAverage" << endl;
    cout << "---------------------------------------------------------------" << endl;
    
    for (int student = 0; student < 3; student++) {
        cout << studentNames[student] << "\t\t";
        int totalGrades = 0;
        
        // Display grades for this student
        for (int test = 0; test < 4; test++) {
            cout << studentGrades[student][test] << "\t";
            totalGrades += studentGrades[student][test];
        }
        
        // Calculate and display average
        double average = totalGrades / 4.0;
        cout << average << endl;
    }
    
    cout << endl;
    cout << "💡 This shows how 2D arrays can organize real data!" << endl;
    cout << endl;
}

/*
 * MAIN FUNCTION - The program starts here!
 */
int main() {
    cout << "=== MULTI-DIMENSIONAL ARRAYS IN C++ ===" << endl;
    cout << "From simple lists to complex data structures!" << endl;
    cout << endl;
    
    // Demonstrate each dimension level
    oneDimensionalDemo();
    cout << "===========================================" << endl;
    cout << endl;
    
    twoDimensionalDemo();
    cout << "===========================================" << endl;
    cout << endl;
    
    threeDimensionalDemo();
    cout << "===========================================" << endl;
    cout << endl;
    
    practicalExample();
    cout << "===========================================" << endl;
    cout << endl;
    
    // Summary section
    cout << "📚 SUMMARY - What You Learned:" << endl;
    cout << "1. 1D arrays: Simple lists (like [A, B, C])" << endl;
    cout << "2. 2D arrays: Tables with rows and columns" << endl;
    cout << "3. 3D arrays: Multiple layers of 2D arrays" << endl;
    cout << "4. Nested loops: Required for multi-dimensional access" << endl;
    cout << "5. Practical uses: Storing structured data like grades, images, etc." << endl;
    cout << endl;
    
    cout << "🔑 KEY ACCESS PATTERNS:" << endl;
    cout << "• 1D: array[index]" << endl;
    cout << "• 2D: array[row][column]" << endl;  
    cout << "• 3D: array[depth][row][column]" << endl;
    cout << endl;
    
    cout << "💭 THINK ABOUT:" << endl;
    cout << "• 1D: A list of names" << endl;
    cout << "• 2D: A spreadsheet or chess board" << endl;
    cout << "• 3D: Multiple floors of a building, each with rooms" << endl;
    cout << endl;
    
    cout << "🎉 Congratulations! You now understand multi-dimensional arrays!" << endl;
    cout << "💡 Try creating your own 2D array with different data!" << endl;
    
    return 0; // Program completed successfully
}