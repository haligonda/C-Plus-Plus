/*
 * C++ Access Specifiers - Private vs Public
 * =========================================
 * 
 * This file demonstrates access specifiers in C++:
 * - Private members: Only accessible within the class
 * - Public members: Accessible from outside the class
 * - Encapsulation: Hiding internal data and providing controlled access
 * - Getter and Setter methods: Safe ways to access/modify private data
 * 
 * Key Concept: Access specifiers control who can access class members.
 * This is a fundamental principle of Object-Oriented Programming called encapsulation.
 */

#include <iostream>  // For input/output operations
#include <string>    // For string class
using namespace std;

/*
 * Class Definition with Access Specifiers
 * =======================================
 * 
 * This class demonstrates the difference between private and public members
 */
class Car {
    /*
     * PRIVATE Section
     * ==============
     * 
     * Private members can only be accessed from within the class itself.
     * They are hidden from the outside world, protecting the internal
     * state of the object from unauthorized or incorrect modifications.
     * 
     * Benefits of private members:
     * - Data protection: Prevents invalid values from being set
     * - Implementation hiding: Internal details can change without affecting outside code
     * - Controlled access: All access goes through public methods that can validate data
     */
    private:
        string brand;   // Private: Can only be accessed by class methods
        string model;   // Private: Hidden from outside code
        int year;       // Private: Protected from direct modification

    /*
     * PUBLIC Section
     * =============
     * 
     * Public members can be accessed from anywhere in the program.
     * This includes constructors, regular methods, and any code that
     * has access to an object of this class.
     */
    public:
        /*
         * Constructor - Must be public to create objects
         */
        Car(string x, string y, int z);

        /*
         * Public Methods
         * =============
         * 
         * These methods provide controlled access to the private data
         */
        void print();  // Display car information

        /*
         * Getter Methods (Accessors)
         * ==========================
         * 
         * These methods provide read-only access to private member variables.
         * They allow outside code to retrieve values without direct access
         * to the private variables themselves.
         */
        string getBrand();  // Returns the brand value
        string getModel();  // Returns the model value
        int getYear();      // Returns the year value

        /*
         * Setter Methods (Mutators)
         * =========================
         * 
         * These methods provide controlled write access to private member variables.
         * They can include validation logic to ensure only valid values are set.
         */
        void setBrand(string x);  // Sets the brand with validation
        void setModel(string y);  // Sets the model with validation
        void setYear(int z);      // Sets the year with validation
};

/*
 * Constructor Implementation
 * =========================
 */
Car::Car(string x, string y, int z) {
    cout << "Creating car with constructor..." << endl;
    
    // Constructor can access private members directly
    // It's part of the class, so it has access to everything
    brand = x;
    model = y;
    year = z;
    
    cout << "Car created: " << brand << " " << model << " (" << year << ")" << endl;
}

/*
 * Print Method Implementation
 * ==========================
 */
void Car::print() {
    cout << "==========================" << endl;
    cout << "|      Car Details       |" << endl;
    cout << "==========================" << endl;
    cout << "     Brand:  " << brand << endl;  // Can access private brand
    cout << "     Model:  " << model << endl;  // Can access private model
    cout << "     Year:   " << year << endl;   // Can access private year
    cout << "==========================" << endl << endl;
}

/*
 * GETTER METHODS IMPLEMENTATION
 * =============================
 * 
 * These methods provide safe, read-only access to private member variables.
 * Outside code can get the values but cannot modify them directly.
 */

string Car::getBrand() {
    cout << "  Accessing brand through getter method" << endl;
    return brand;  // Return copy of private member
}

string Car::getModel() {
    cout << "  Accessing model through getter method" << endl;
    return model;  // Return copy of private member
}

int Car::getYear() {
    cout << "  Accessing year through getter method" << endl;
    return year;   // Return copy of private member
}

/*
 * SETTER METHODS IMPLEMENTATION
 * =============================
 * 
 * These methods provide controlled write access to private member variables.
 * They can include validation logic to ensure data integrity.
 */

void Car::setBrand(string x) {
    cout << "  Setting brand through setter method" << endl;
    
    // Validation: Ensure brand is not empty
    if (x.empty()) {
        cout << "  ERROR: Brand cannot be empty! Using 'Unknown' instead." << endl;
        brand = "Unknown";
    } else {
        cout << "  Validating brand: '" << x << "' - Valid!" << endl;
        brand = x;
    }
}

void Car::setModel(string y) {
    cout << "  Setting model through setter method" << endl;
    
    // Validation: Ensure model is not empty
    if (y.empty()) {
        cout << "  ERROR: Model cannot be empty! Using 'Unspecified' instead." << endl;
        model = "Unspecified";
    } else {
        cout << "  Validating model: '" << y << "' - Valid!" << endl;
        model = y;
    }
}

void Car::setYear(int z) {
    cout << "  Setting year through setter method" << endl;
    
    // Validation: Ensure year is reasonable
    if (z < 1900 || z > 2030) {
        cout << "  ERROR: Year " << z << " is invalid! Must be between 1900-2030." << endl;
        cout << "  Using 2000 as default." << endl;
        year = 2000;
    } else {
        cout << "  Validating year: " << z << " - Valid!" << endl;
        year = z;
    }
}

int main() {
    cout << "=== C++ Access Specifiers Demonstration ===" << endl;
    cout << endl;
    
    /*
     * Creating Objects and Testing Access
     * ===================================
     */
    cout << "=== Creating Car Objects ===" << endl;
    Car carObj1("Ford", "Mustang", 2013);
    cout << endl;
    
    Car carObj2("BMW", "M5", 2020);
    cout << endl;
    
    /*
     * Display Initial Car Information
     */
    cout << "=== Initial Car Information ===" << endl;
    cout << "Car 1:" << endl;
    carObj1.print();
    
    cout << "Car 2:" << endl;
    carObj2.print();
    
    /*
     * Demonstrate Private Access Restriction
     * =====================================
     * 
     * The following lines would cause COMPILER ERRORS if uncommented:
     * 
     * cout << carObj1.brand;     // ERROR: 'brand' is private
     * cout << carObj1.model;     // ERROR: 'model' is private  
     * cout << carObj1.year;      // ERROR: 'year' is private
     * carObj1.brand = "Toyota";  // ERROR: Cannot access private member
     * 
     * This is the power of encapsulation - the compiler prevents
     * unauthorized access to private members!
     */
    
    /*
     * Using Getter Methods (Safe Access)
     * =================================
     */
    cout << "=== Using Getter Methods ===" << endl;
    cout << "Car 1 information retrieved safely:" << endl;
    string brand1 = carObj1.getBrand();
    string model1 = carObj1.getModel();
    int year1 = carObj1.getYear();
    
    cout << "Retrieved: " << brand1 << " " << model1 << " (" << year1 << ")" << endl;
    cout << endl;
    
    /*
     * Using Setter Methods with Validation
     * ====================================
     */
    cout << "=== Using Setter Methods with Validation ===" << endl;
    
    // Test valid changes
    cout << "Making valid changes to Car 1:" << endl;
    carObj1.setBrand("Chevrolet");
    carObj1.setModel("Camaro");
    carObj1.setYear(2021);
    cout << endl;
    
    cout << "Car 1 after valid changes:" << endl;
    carObj1.print();
    
    // Test invalid changes (demonstrate validation)
    cout << "Testing invalid changes (validation will catch these):" << endl;
    carObj2.setBrand("");        // Empty brand - should be rejected
    carObj2.setModel("");        // Empty model - should be rejected
    carObj2.setYear(1800);       // Invalid year - should be rejected
    cout << endl;
    
    cout << "Car 2 after invalid change attempts:" << endl;
    carObj2.print();
    
    /*
     * Demonstrate Benefits of Encapsulation
     * ====================================
     */
    cout << "=== Benefits of Access Control ===" << endl;
    cout << "1. Data Protection: Private members cannot be accessed directly" << endl;
    cout << "2. Validation: Setter methods can validate input before storing" << endl;
    cout << "3. Consistency: All access goes through controlled methods" << endl;
    cout << "4. Maintainability: Internal implementation can change without affecting outside code" << endl;
    cout << "5. Error Prevention: Compiler prevents unauthorized access attempts" << endl;
    
    /*
     * Key Learning Points:
     * 
     * 1. Access Specifiers:
     *    - private: Only accessible within the class
     *    - public: Accessible from anywhere
     *    - protected: Accessible within class and derived classes (inheritance)
     * 
     * 2. Encapsulation Benefits:
     *    - Data hiding: Internal implementation is hidden
     *    - Controlled access: All access goes through public methods
     *    - Validation: Setter methods can validate input
     *    - Consistency: Prevents invalid states
     * 
     * 3. Getter Methods (Accessors):
     *    - Provide read-only access to private data
     *    - Return copies of private members
     *    - Can include additional logic (logging, validation, etc.)
     * 
     * 4. Setter Methods (Mutators):
     *    - Provide controlled write access to private data
     *    - Can validate input before storing
     *    - Can maintain object invariants
     *    - Can perform side effects (logging, notifications, etc.)
     * 
     * 5. Best Practices:
     *    - Make member variables private by default
     *    - Provide public methods only when needed
     *    - Use getters for read access, setters for write access
     *    - Include validation in setter methods
     *    - Keep the public interface minimal and stable
     * 
     * 6. Real-world Applications:
     *    - Bank account: Balance is private, accessed through deposit/withdraw methods
     *    - User account: Password is private, accessed through authentication methods
     *    - Game character: Health/stats are private, modified through game mechanics
     *    - File system: File handles are private, accessed through read/write methods
     */
    
    return 0;
}