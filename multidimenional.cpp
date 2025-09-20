/*
 * C++ Multi-dimensional Arrays
 * ============================
 * 
 * This file demonstrates different types of arrays in C++:
 * - One-dimensional arrays (1D) - like a list
 * - Two-dimensional arrays (2D) - like a table/grid
 * - Three-dimensional arrays (3D) - like a cube of data
 * 
 * Key Concepts:
 * - Multi-dimensional arrays are arrays of arrays
 * - Nested loops are used to iterate through them
 * - Array dimensions are specified at declaration time
 */

#include <iostream>  // For input/output operations
#include <string>    // For string class
using namespace std;

/*
 * Function: one_dim
 * Purpose: Demonstrates basic one-dimensional arrays
 * 
 * 1D Array Structure: [element0, element1, element2, ...]
 * Think of it as a simple list of items
 */
void one_dim() {
    cout << "=== One-Dimensional Array ===" << endl;
    
    // Create a 1D array with 2 elements
    string letters[2] = {"A", "B"};
    
    cout << "Array contents:" << endl;
    // Range-based for loop - iterates through each element
    for (string letter : letters) {
        cout << "Element: " << letter << endl;
    }
    cout << endl;
}

/*
 * Function: two_dim  
 * Purpose: Demonstrates two-dimensional arrays (like a table/matrix)
 * 
 * 2D Array Structure:
 * [row0][col0]  [row0][col1]
 * [row1][col0]  [row1][col1]
 * 
 * Think of it as a grid or spreadsheet
 */
void two_dim() {
    cout << "=== Two-Dimensional Array ===" << endl;
    
    /*
     * Create a 2x2 array (2 rows, 2 columns)
     * Visualization:
     * Row 0: ["A", "B"]
     * Row 1: ["C", "D"]
     */
    string letters[2][2] = {
        {"A", "B"},  // Row 0
        {"C", "D"},  // Row 1
    };
    
    cout << "2D Array as a grid:" << endl;
    cout << "Row\\Col   0    1" << endl;
    cout << "       ----------" << endl;
    
    // Nested loops: outer loop for rows, inner loop for columns
    for (int i = 0; i < 2; i++) {          // i represents row index
        cout << "   " << i << "  |";
        for (int j = 0; j < 2; j++) {      // j represents column index
            cout << "  " << letters[i][j] << " ";  // Access element at [row][column]
        }
        cout << endl;
    }
    cout << endl;
}

/*
 * Function: three_dim
 * Purpose: Demonstrates three-dimensional arrays (like a cube of data)
 * 
 * 3D Array Structure:
 * Think of it as multiple 2D arrays stacked on top of each other
 * [layer][row][column]
 * 
 * Layer 0:     Layer 1:
 * [A][B]       [E][F]
 * [C][D]       [J][K]
 */
void three_dim() {
    cout << "=== Three-Dimensional Array ===" << endl;
    
    /*
     * Create a 2x2x2 array (2 layers, 2 rows per layer, 2 columns per row)
     * 
     * Structure breakdown:
     * - First dimension (2): Number of "layers" or "levels"
     * - Second dimension (2): Number of rows in each layer  
     * - Third dimension (2): Number of columns in each row
     */
    string letters[2][2][2] = {
        {                    // Layer 0
            {"A", "B"},      // Row 0 of layer 0
            {"C", "D"},      // Row 1 of layer 0
        },
        {                    // Layer 1  
            {"E", "F"},      // Row 0 of layer 1
            {"J", "K"},      // Row 1 of layer 1
        }
    };
    
    cout << "3D Array structure (2 layers of 2x2 grids):" << endl;
    
    // Triple nested loops: layer, row, column
    for (int i = 0; i < 2; i++) {          // i = layer index
        cout << "Layer " << i << ":" << endl;
        cout << "--------" << endl;
        
        for (int j = 0; j < 2; j++) {      // j = row index within layer
            cout << "Row " << j << ": ";
            for (int k = 0; k < 2; k++) {  // k = column index within row
                cout << letters[i][j][k] << "\t";  // Access [layer][row][column]
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main() {
    cout << "=== C++ Multi-Dimensional Arrays Demo ===" << endl;
    cout << endl;
    
    // Demonstrate each type of array
    cout << "1D Arrays - Simple Lists:" << endl;
    cout << "=========================" << endl;
    one_dim();
    
    cout << "2D Arrays - Tables/Grids:" << endl;
    cout << "=========================" << endl;
    two_dim();
    
    cout << "3D Arrays - Cubes of Data:" << endl;
    cout << "==========================" << endl;
    three_dim();
    
    /*
     * Key Learning Points:
     * 
     * 1. Array Dimensions:
     *    - 1D: array[size] - like a list
     *    - 2D: array[rows][columns] - like a table
     *    - 3D: array[layers][rows][columns] - like stacked tables
     * 
     * 2. Nested Loops:
     *    - 1D arrays: 1 loop (for each element)
     *    - 2D arrays: 2 loops (for each row, then each column)
     *    - 3D arrays: 3 loops (for each layer, row, then column)
     * 
     * 3. Memory Layout:
     *    - Arrays are stored contiguously in memory
     *    - 2D arrays are stored row by row
     *    - 3D arrays are stored layer by layer, row by row
     * 
     * 4. Common Uses:
     *    - 1D: Lists, sequences, arrays of data
     *    - 2D: Matrices, images, game boards, spreadsheets
     *    - 3D: 3D graphics, volumetric data, time series of 2D data
     * 
     * 5. Index Access:
     *    - Always starts from 0
     *    - For 2D: first index is row, second is column
     *    - For 3D: first is layer, second is row, third is column
     */
    
    return 0;
}