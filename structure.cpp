/*
 * C++ Structures (structs)
 * ========================
 * 
 * This file demonstrates structures in C++:
 * - What structures are and why they're useful
 * - Creating and using anonymous structures
 * - Creating and using named structures
 * - Accessing structure members with dot operator
 * - Difference between structures and classes
 * 
 * Key Concept: A structure groups related variables of different types
 * into a single unit. Think of it as a custom data type that can hold
 * multiple pieces of related information.
 */

#include <iostream>  // For input/output operations
#include <string>    // For string class
using namespace std;

/*
 * Function: named_struct
 * Purpose: Demonstrates named structures - reusable structure definitions
 * 
 * Named structures allow you to create multiple instances of the same
 * structure type, making them more flexible than anonymous structures.
 */
void named_struct() {
    cout << "=== Named Structure Example ===" << endl;
    
    /*
     * Step 1: Define a named structure called 'car'
     * 
     * This creates a new data type called 'car' that contains:
     * - brand: a string for the car manufacturer
     * - model: a string for the car model name  
     * - year: an integer for the manufacturing year
     */
    struct car {
        string brand;   // Car manufacturer (e.g., "Ford", "BMW")
        string model;   // Model name (e.g., "Mustang", "M3")
        int year;       // Manufacturing year (e.g., 2020, 2023)
    };
    
    /*
     * Step 2: Create instances (objects) of the car structure
     * Each instance can hold different car information
     */
    
    // Create first car instance
    car car1;                    // Declare variable of type 'car'
    car1.brand = "Shelby";       // Set brand using dot operator
    car1.model = "Mustang";      // Set model using dot operator
    car1.year = 2013;            // Set year using dot operator
    
    // Display first car's information
    cout << "Car 1 Details:" << endl;
    cout << "Brand: " << car1.brand << endl;
    cout << "Model: " << car1.model << endl;
    cout << "Year: " << car1.year << endl;
    cout << "Complete: " << car1.brand << " " << car1.model << " " << car1.year << endl;
    cout << endl;
    
    // Create second car instance with different data
    car car2;
    car2.brand = "Range Rover";
    car2.model = "Sport";
    car2.year = 2025;
    
    // Display second car's information
    cout << "Car 2 Details:" << endl;
    cout << "Brand: " << car2.brand << endl;
    cout << "Model: " << car2.model << endl;
    cout << "Year: " << car2.year << endl;
    cout << "Complete: " << car2.brand << " " << car2.model << " " << car2.year << endl;
    cout << endl;
}

int main() {
    cout << "=== C++ Structures Demonstration ===" << endl;
    cout << endl;
    
    /*
     * Anonymous Structure Example
     * ===========================
     * 
     * Anonymous structures are defined and used immediately.
     * They're useful when you only need one instance of a structure.
     */
    cout << "=== Anonymous Structure Example ===" << endl;
    
    /*
     * Create an anonymous structure for a person
     * Note: No name is given to the struct type, and we immediately
     * create a variable called 'person' of this anonymous struct type
     */
    struct {
        string name;    // Person's name
        int age;        // Person's age
    } person;           // Variable name for this anonymous struct instance
    
    // Initialize the structure members
    person.name = "Pravin";
    person.age = 23;
    
    // Display person information
    cout << "Person Details:" << endl;
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << " years old" << endl;
    cout << endl;
    
    /*
     * Demonstrate that we can modify structure values
     */
    cout << "=== Modifying Structure Values ===" << endl;
    person.name = "Updated Name";
    person.age = 25;
    
    cout << "After modification:" << endl;
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << " years old" << endl;
    cout << endl;
    
    // Call the named structure function
    named_struct();
    
    /*
     * Additional Examples: Structure Initialization
     */
    cout << "=== Advanced Structure Usage ===" << endl;
    
    // Define another named structure
    struct student {
        string name;
        int id;
        double gpa;
    };
    
    // Multiple ways to initialize structures:
    
    // Method 1: Declare then assign
    student student1;
    student1.name = "Alice";
    student1.id = 12345;
    student1.gpa = 3.8;
    
    // Method 2: Initialize at declaration (C++11 and later)
    student student2 = {"Bob", 67890, 3.9};
    
    cout << "Student 1: " << student1.name << " (ID: " << student1.id 
         << ", GPA: " << student1.gpa << ")" << endl;
    cout << "Student 2: " << student2.name << " (ID: " << student2.id 
         << ", GPA: " << student2.gpa << ")" << endl;
    
    /*
     * Key Learning Points:
     * 
     * 1. Structure Definition:
     *    - Groups related variables of different types
     *    - Creates a custom data type
     *    - Members accessed with dot operator (.)
     * 
     * 2. Anonymous vs Named Structures:
     *    - Anonymous: Use immediately, can't create more instances
     *    - Named: Can create multiple instances of the same structure type
     * 
     * 3. Structure vs Class:
     *    - In C++, structs are almost identical to classes
     *    - Main difference: struct members are public by default
     *    - Classes have private members by default
     * 
     * 4. Common Uses:
     *    - Representing real-world entities (Person, Car, Product)
     *    - Grouping related data (Point with x,y coordinates)
     *    - Function parameters (passing multiple related values)
     *    - Database records, configuration settings
     * 
     * 5. Memory Layout:
     *    - Structure members are stored contiguously in memory
     *    - Total size might be larger due to padding/alignment
     *    - Order of members can affect memory usage
     * 
     * 6. Best Practices:
     *    - Use meaningful names for structures and members
     *    - Group logically related data together
     *    - Consider using classes for more complex behavior
     *    - Initialize all members to avoid undefined values
     */
    
    return 0;
}