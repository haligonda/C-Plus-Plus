/*
 * C++ Classes and Constructors
 * ============================
 * 
 * This file demonstrates fundamental Object-Oriented Programming concepts:
 * - Class definition and declaration
 * - Constructor functions for object initialization
 * - Public member variables and methods
 * - Creating and using objects (instances of classes)
 * - Method implementation outside class definition
 * 
 * Key Concept: A class is a blueprint for creating objects. A constructor
 * is a special method that initializes objects when they are created.
 */

#include <iostream>  // For input/output operations
#include <string>    // For string class
using namespace std;

/*
 * Class Definition: Car
 * ====================
 * 
 * This class represents a car with basic properties and behaviors.
 * It demonstrates the basic structure of a C++ class.
 */
class Car {
    public:  // Access specifier - these members are accessible from outside the class
        /*
         * Member Variables (Attributes)
         * ============================
         * These store the data/state of each car object
         */
        string brand;   // Car manufacturer (e.g., "Ford", "BMW")
        string model;   // Model name (e.g., "Mustang", "X5")
        int year;       // Manufacturing year (e.g., 2020, 2023)
        
        /*
         * Constructor Declaration
         * ======================
         * 
         * A constructor is a special method that:
         * - Has the same name as the class
         * - Has no return type (not even void)
         * - Is automatically called when an object is created
         * - Used to initialize the object's member variables
         */
        Car(string x, string y, int z);  // Constructor declaration
        
        /*
         * Method Declaration
         * =================
         * 
         * This method will display the car's information
         */
        void print();  // Method to display car details
};

/*
 * Constructor Implementation
 * =========================
 * 
 * The :: operator is called the "scope resolution operator"
 * Car::Car means "the constructor of the Car class"
 * 
 * This constructor takes three parameters and uses them to initialize
 * the member variables of the object being created.
 */
Car::Car(string x, string y, int z) {
    /*
     * Initialize member variables with the provided values
     * 
     * When an object is created like: Car myCar("Ford", "Mustang", 1969);
     * - x will contain "Ford"
     * - y will contain "Mustang" 
     * - z will contain 1969
     */
    brand = x;  // Set the car's brand
    model = y;  // Set the car's model
    year = z;   // Set the car's year
    
    cout << "Constructor called: Creating " << brand << " " << model 
         << " (" << year << ")" << endl;
}

/*
 * Method Implementation
 * ====================
 * 
 * Car::print means "the print method of the Car class"
 * This method displays the car's information in a formatted way
 */
void Car::print() {
    cout << "====================" << endl;
    cout << "Car Details: " << endl;
    cout << "Brand:  " << brand << endl;
    cout << "Model:  " << model << endl;
    cout << "Year:   " << year << endl;
    cout << "====================" << endl << endl;
}

int main() {
    cout << "=== C++ Classes and Constructors Demo ===" << endl;
    cout << endl;
    
    /*
     * Creating Objects (Class Instances)
     * ==================================
     * 
     * When you create an object, the constructor is automatically called
     * with the parameters you provide.
     */
    
    cout << "=== Creating First Car Object ===" << endl;
    // Create first car object - constructor is called automatically
    Car firstCar("Range Rover", "Sport", 2025);
    
    cout << "Object created successfully!" << endl;
    cout << "Calling print method:" << endl;
    firstCar.print();  // Call the print method on this specific object
    
    cout << "=== Creating Second Car Object ===" << endl;
    // Create second car object - constructor called again
    Car carObj2("Ford", "Mustang", 1969);
    
    cout << "Object created successfully!" << endl;
    cout << "Calling print method:" << endl;
    carObj2.print();   // Call print method on the second object
    
    /*
     * Demonstrate Object Independence
     * ==============================
     * 
     * Each object has its own copy of the member variables
     * Modifying one object doesn't affect the other
     */
    cout << "=== Demonstrating Object Independence ===" << endl;
    cout << "Modifying first car's year..." << endl;
    firstCar.year = 2026;  // Change only the first car's year
    
    cout << "After modification:" << endl;
    cout << "First car:" << endl;
    firstCar.print();
    
    cout << "Second car (unchanged):" << endl;
    carObj2.print();
    
    /*
     * Creating Multiple Objects
     * ========================
     */
    cout << "=== Creating More Car Objects ===" << endl;
    Car car3("BMW", "M3", 2022);
    Car car4("Tesla", "Model S", 2023);
    Car car5("Porsche", "911", 2021);
    
    cout << "\nAll cars created. Displaying inventory:" << endl;
    cout << "Car 3:" << endl;
    car3.print();
    cout << "Car 4:" << endl;
    car4.print();
    cout << "Car 5:" << endl;
    car5.print();
    
    /*
     * Key Learning Points:
     * 
     * 1. Class Structure:
     *    - Class definition contains member variables and method declarations
     *    - Implementation can be inside the class or outside (using ::)
     *    - Public members are accessible from outside the class
     * 
     * 2. Constructor Basics:
     *    - Same name as the class, no return type
     *    - Automatically called when object is created
     *    - Used to initialize member variables
     *    - Can accept parameters to customize initialization
     * 
     * 3. Object Creation:
     *    - ClassName objectName(parameters); creates an object
     *    - Each object has its own copy of member variables
     *    - Objects are independent of each other
     * 
     * 4. Method Calls:
     *    - Use dot operator (.) to access object members
     *    - objectName.methodName() calls a method on that specific object
     * 
     * 5. Scope Resolution Operator (::):
     *    - Used to define methods outside the class
     *    - ClassName::methodName identifies which class the method belongs to
     * 
     * 6. Benefits of Classes:
     *    - Encapsulation: Group related data and functions together
     *    - Reusability: Create multiple objects from the same class
     *    - Organization: Better code structure and maintenance
     *    - Abstraction: Hide complex implementation details
     * 
     * 7. Real-world Applications:
     *    - Game objects (Player, Enemy, Weapon)
     *    - GUI components (Button, Window, Menu)
     *    - Data models (User, Product, Order)
     *    - System resources (File, Database, Network)
     */
    
    return 0;
}