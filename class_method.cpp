/*
 * C++ Class Methods
 * =================
 * 
 * This file demonstrates class methods in C++:
 * - Defining methods inside a class
 * - Implementing methods outside the class definition
 * - Calling methods on objects
 * - Methods that take parameters and return values
 * - Difference between member variables and local variables
 * 
 * Key Concept: Methods are functions that belong to a class and can
 * access and modify the object's member variables.
 */

#include <iostream>  // For input/output operations
#include <string>    // For string class
using namespace std;

/*
 * Class Definition: Car
 * ====================
 * 
 * This class demonstrates various ways to work with class methods
 */
class Car {
    public:  // Public members - accessible from outside the class
        /*
         * Member Variables
         * ===============
         * These store the state/data of each car object
         */
        string brand;   // Car manufacturer
        string model;   // Model name
        int year;       // Manufacturing year
        
        /*
         * Method Declaration
         * =================
         * 
         * This method calculates and returns the maximum speed
         * It takes a parameter and returns an integer value
         */
        int speed(int maxSpeed);
        
        /*
         * Additional Method Declarations
         * =============================
         * 
         * Let's add more methods to demonstrate different concepts
         */
        void displayInfo();           // Method with no parameters, no return value
        int getAge();                // Method with no parameters, returns int
        bool isVintage();            // Method that returns boolean
        void updateModel(string newModel);  // Method that modifies object state
};

/*
 * Method Implementation: speed
 * ===========================
 * 
 * Car::speed means "the speed method of the Car class"
 * This method demonstrates parameter passing and return values
 */
int Car::speed(int maxSpeed) {
    /*
     * This method receives a parameter and returns it
     * In a real application, this might calculate the actual speed
     * based on car specifications, engine power, etc.
     */
    cout << "  Calculating max speed for " << brand << " " << model << endl;
    cout << "  Engine specifications allow max speed: " << maxSpeed << " mph" << endl;
    
    // In a real implementation, you might apply modifications based on car properties
    // For example: return maxSpeed * (year > 2020 ? 1.1 : 1.0);
    
    return maxSpeed;  // Return the calculated speed
}

/*
 * Method Implementation: displayInfo
 * =================================
 * 
 * This method accesses member variables and displays car information
 * It shows how methods can work with the object's data
 */
void Car::displayInfo() {
    cout << "=== Car Information ===" << endl;
    cout << "Brand: " << brand << endl;
    cout << "Model: " << (model.empty() ? "Not specified" : model) << endl;
    cout << "Year:  " << year << endl;
    cout << "======================" << endl;
}

/*
 * Method Implementation: getAge
 * ============================
 * 
 * This method performs a calculation using member variables
 * It demonstrates how methods can process object data
 */
int Car::getAge() {
    const int currentYear = 2024;  // In a real app, this would be dynamic
    int age = currentYear - year;
    
    cout << "  Calculating age: " << currentYear << " - " << year << " = " << age << " years" << endl;
    
    return age;
}

/*
 * Method Implementation: isVintage
 * ===============================
 * 
 * This method returns a boolean value based on object state
 * Shows how methods can make decisions about object properties
 */
bool Car::isVintage() {
    // Cars 25 years or older are considered vintage
    int age = getAge();  // Call another method from within this method!
    bool vintage = age >= 25;
    
    cout << "  Vintage check: " << age << " years old -> " 
         << (vintage ? "Yes, it's vintage!" : "No, not vintage yet") << endl;
    
    return vintage;
}

/*
 * Method Implementation: updateModel
 * =================================
 * 
 * This method modifies the object's state
 * Demonstrates how methods can change member variables
 */
void Car::updateModel(string newModel) {
    cout << "  Updating model from '" << model << "' to '" << newModel << "'" << endl;
    model = newModel;  // Modify the member variable
}

int main() {
    cout << "=== C++ Class Methods Demonstration ===" << endl;
    cout << endl;
    
    /*
     * Create a Car Object
     * ==================
     */
    cout << "=== Creating and Initializing Car Object ===" << endl;
    Car car1;
    car1.brand = "Range Rover";
    car1.model = "";  // Empty model to demonstrate method handling
    car1.year = 2025;
    
    cout << "Car object created and initialized!" << endl;
    cout << endl;
    
    /*
     * Call Methods on the Object
     * =========================
     */
    cout << "=== Calling Object Methods ===" << endl;
    
    // Method that displays information
    car1.displayInfo();
    cout << endl;
    
    // Method that takes parameter and returns value
    cout << "Speed calculation:" << endl;
    int maxSpeed = car1.speed(250);  // Call speed method with parameter 250
    cout << "Returned max speed: " << maxSpeed << " mph" << endl;
    cout << endl;
    
    // Method that calculates and returns age
    cout << "Age calculation:" << endl;
    int carAge = car1.getAge();
    cout << "Car age: " << carAge << " years" << endl;
    cout << endl;
    
    // Method that returns boolean
    cout << "Vintage status check:" << endl;
    bool vintage = car1.isVintage();
    cout << "Is vintage: " << (vintage ? "Yes" : "No") << endl;
    cout << endl;
    
    // Method that modifies object state
    cout << "Updating model:" << endl;
    car1.updateModel("Sport");
    car1.displayInfo();  // Show updated information
    cout << endl;
    
    /*
     * Demonstrate Multiple Objects
     * ===========================
     */
    cout << "=== Working with Multiple Objects ===" << endl;
    
    Car car2;
    car2.brand = "Ford";
    car2.model = "Mustang";
    car2.year = 1969;  // Vintage car
    
    Car car3;
    car3.brand = "Tesla";
    car3.model = "Model S";
    car3.year = 2023;  // Modern car
    
    cout << "Car 2:" << endl;
    car2.displayInfo();
    cout << "Max speed: " << car2.speed(180) << " mph" << endl;
    cout << "Age: " << car2.getAge() << " years" << endl;
    cout << "Vintage: " << (car2.isVintage() ? "Yes" : "No") << endl;
    cout << endl;
    
    cout << "Car 3:" << endl;
    car3.displayInfo();
    cout << "Max speed: " << car3.speed(200) << " mph" << endl;
    cout << "Age: " << car3.getAge() << " years" << endl;
    cout << "Vintage: " << (car3.isVintage() ? "Yes" : "No") << endl;
    
    /*
     * Key Learning Points:
     * 
     * 1. Method Types:
     *    - Methods with parameters: int speed(int maxSpeed)
     *    - Methods without parameters: int getAge()
     *    - Methods that return values: bool isVintage()
     *    - Methods that don't return values: void displayInfo()
     * 
     * 2. Method Implementation:
     *    - Can be inside class definition (inline methods)
     *    - Can be outside class definition using :: operator
     *    - Outside definition allows separation of interface and implementation
     * 
     * 3. Accessing Member Variables:
     *    - Methods can directly access all member variables of the object
     *    - No need for special syntax - just use the variable name
     *    - Each object has its own copy of member variables
     * 
     * 4. Method Calls:
     *    - Use dot operator: objectName.methodName(parameters)
     *    - Each method call operates on the specific object
     *    - Methods can call other methods of the same object
     * 
     * 5. Parameter Passing:
     *    - Methods can receive parameters like regular functions
     *    - Parameters are local to the method
     *    - Can pass by value or by reference
     * 
     * 6. Return Values:
     *    - Methods can return values like regular functions
     *    - Return type must be specified in method declaration
     *    - Use 'void' if method doesn't return anything
     * 
     * 7. Object Independence:
     *    - Each object maintains its own state
     *    - Method calls on one object don't affect other objects
     *    - Same method can behave differently based on object's data
     * 
     * 8. Best Practices:
     *    - Use meaningful method names that describe what they do
     *    - Keep methods focused on a single responsibility
     *    - Consider const methods for methods that don't modify state
     *    - Use appropriate parameter types and return types
     */
    
    return 0;
}