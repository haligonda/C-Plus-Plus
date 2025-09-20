/*
 * C++ Protected Access Specifier and Inheritance
 * ==============================================
 * 
 * This file demonstrates:
 * - Protected access specifier: accessible in class and derived classes
 * - Class inheritance: creating new classes based on existing classes
 * - Base class and derived class relationships
 * - Constructor inheritance and initialization lists
 * - Method overriding and specialization
 * 
 * Key Concept: Protected members are like private members but with one
 * important difference - they can be accessed by derived (child) classes.
 * This enables inheritance while maintaining encapsulation.
 */

#include <iostream>  // For input/output operations
#include <string>    // For string class
using namespace std;

/*
 * Base Class: Car
 * ==============
 * 
 * This class demonstrates the protected access specifier.
 * Protected members are accessible within the class and its derived classes,
 * but not from outside code (like private members).
 */
class Car {
    /*
     * PROTECTED Section
     * ================
     * 
     * Protected members are:
     * - NOT accessible from outside the class (like private)
     * - ACCESSIBLE from derived classes (unlike private)
     * - Used when you want to share data with child classes
     *   but hide it from the outside world
     * 
     * This is perfect for inheritance scenarios where derived
     * classes need access to base class data.
     */
    protected:
        string brand;   // Protected: accessible in derived classes
        string model;   // Protected: accessible in derived classes
        int year;       // Protected: accessible in derived classes

    /*
     * PUBLIC Section
     * =============
     * 
     * Public members are accessible from anywhere
     */
    public:
        /*
         * Constructor
         */
        Car(string x, string y, int z);

        /*
         * Public Methods
         */
        void print();

        /*
         * Getter Methods - Provide controlled access to protected data
         */
        string getBrand();
        string getModel();
        int getYear();
        
        /*
         * Setter Methods - Provide controlled modification of protected data
         */
        void setBrand(string x);
        void setModel(string y);
        void setYear(int z);
};

/*
 * Base Class Implementation
 * ========================
 */

Car::Car(string x, string y, int z) {
    cout << "Base Car constructor called" << endl;
    brand = x;  // Can access protected members within the class
    model = y;  // Can access protected members within the class
    year = z;   // Can access protected members within the class
    cout << "Created base car: " << brand << " " << model << " (" << year << ")" << endl;
}

void Car::print() {
    cout << "=========================" << endl;
    cout << "       Car Details       " << endl;
    cout << "=========================" << endl;
    cout << "    Brand: " << brand << endl;  // Can access protected members
    cout << "    Model: " << model << endl;  // Can access protected members
    cout << "    Year:  " << year << endl;   // Can access protected members
    cout << "=========================" << endl << endl;
}

// Getter Methods Implementation
string Car::getBrand() {
    return brand;  // Can access protected member
}

string Car::getModel() {
    return model;  // Can access protected member
}

int Car::getYear() {
    return year;   // Can access protected member
}

// Setter Methods Implementation
void Car::setBrand(string x) {
    brand = x;     // Can access protected member
}

void Car::setModel(string y) {
    model = y;     // Can access protected member
}

void Car::setYear(int z) {
    year = z;      // Can access protected member
}

/*
 * Derived Class: SportsCar
 * =======================
 * 
 * This class inherits from Car using public inheritance.
 * It demonstrates how derived classes can access protected members
 * of the base class.
 * 
 * Syntax: class DerivedClass : public BaseClass
 * - "public" inheritance means public members of base class remain public
 * - protected members of base class remain protected
 * - private members of base class are NOT accessible (even in derived classes)
 */
class SportsCar : public Car {
    private:
        int horsepower;    // Additional member specific to sports cars
        double topSpeed;   // Additional member specific to sports cars

    public:
        /*
         * Derived Class Constructor
         * ========================
         * 
         * Syntax: DerivedConstructor(...) : BaseConstructor(...)
         * This is called "constructor initialization list"
         * It calls the base class constructor first, then the derived constructor
         */
        SportsCar(string x, string y, int z, int hp = 500, double speed = 180.0) : Car(x, y, z) {
            cout << "SportsCar constructor called" << endl;
            horsepower = hp;
            topSpeed = speed;
            cout << "Added sports car features: " << horsepower << " HP, " 
                 << topSpeed << " mph top speed" << endl;
        }

        /*
         * Method that accesses protected members
         * =====================================
         * 
         * This method demonstrates that derived classes CAN access
         * protected members of the base class directly.
         */
        void printSportsCarDetails() {
            cout << "=========================" << endl;
            cout << "   Sports Car Details    " << endl;
            cout << "=========================" << endl;
            
            // Direct access to protected members from base class!
            // This would NOT be possible if they were private
            cout << "    Brand: " << brand << endl;      // Accessing protected member
            cout << "    Model: " << model << endl;      // Accessing protected member
            cout << "    Year:  " << year << endl;       // Accessing protected member
            
            // Access to own private members
            cout << "    Power: " << horsepower << " HP" << endl;
            cout << "    Top Speed: " << topSpeed << " mph" << endl;
            cout << "=========================" << endl << endl;
        }

        /*
         * Method that modifies protected members
         * =====================================
         * 
         * Shows that derived classes can modify protected members
         */
        void upgrade(int newHorsepower, double newTopSpeed) {
            cout << "Upgrading sports car..." << endl;
            
            // Can modify protected members directly
            cout << "Previous specs: " << horsepower << " HP, " << topSpeed << " mph" << endl;
            
            horsepower = newHorsepower;
            topSpeed = newTopSpeed;
            
            cout << "New specs: " << horsepower << " HP, " << topSpeed << " mph" << endl;
        }

        /*
         * Getter methods for sports car specific data
         */
        int getHorsepower() { return horsepower; }
        double getTopSpeed() { return topSpeed; }
};

/*
 * Another Derived Class: ElectricCar
 * ==================================
 * 
 * This demonstrates that multiple classes can inherit from the same base class
 */
class ElectricCar : public Car {
    private:
        int batteryCapacity;  // Battery capacity in kWh
        int range;           // Range in miles

    public:
        ElectricCar(string x, string y, int z, int battery = 75, int r = 300) : Car(x, y, z) {
            cout << "ElectricCar constructor called" << endl;
            batteryCapacity = battery;
            range = r;
            cout << "Added electric features: " << batteryCapacity 
                 << " kWh battery, " << range << " mile range" << endl;
        }

        void printElectricDetails() {
            cout << "=========================" << endl;
            cout << "   Electric Car Details  " << endl;
            cout << "=========================" << endl;
            
            // Access protected members from base class
            cout << "    Brand: " << brand << endl;
            cout << "    Model: " << model << endl;
            cout << "    Year:  " << year << endl;
            cout << "    Battery: " << batteryCapacity << " kWh" << endl;
            cout << "    Range: " << range << " miles" << endl;
            cout << "=========================" << endl << endl;
        }
};

int main() {
    cout << "=== C++ Protected Access and Inheritance Demo ===" << endl;
    cout << endl;
    
    /*
     * Create Base Class Objects
     * ========================
     */
    cout << "=== Creating Base Class Objects ===" << endl;
    Car carObj1("Ford", "Mustang", 2013);
    carObj1.print();
    
    Car carObj2("BMW", "M5", 2020);
    carObj2.print();
    
    /*
     * Modify Base Class Object
     */
    cout << "=== Modifying Base Class Object ===" << endl;
    carObj1.setBrand("Chevrolet");
    carObj1.setModel("Camaro");
    carObj1.setYear(2021);
    carObj1.print();
    
    /*
     * Create Derived Class Objects
     * ===========================
     */
    cout << "=== Creating SportsCar (Derived Class) ===" << endl;
    SportsCar sportsCarObj("Ferrari", "488", 2022, 661, 205.0);
    
    // Call derived class method (accesses protected members)
    sportsCarObj.printSportsCarDetails();
    
    // Call inherited base class method
    cout << "Calling inherited print() method:" << endl;
    sportsCarObj.print();  // This works because SportsCar inherits from Car!
    
    /*
     * Demonstrate Protected vs Private Access
     */
    cout << "=== Demonstrating Protected vs Private Access ===" << endl;
    
    // This would cause a COMPILER ERROR (protected members not accessible from outside):
    // cout << sportsCarObj.brand;    // ERROR: 'brand' is protected
    // cout << sportsCarObj.model;    // ERROR: 'model' is protected
    // sportsCarObj.year = 2023;      // ERROR: 'year' is protected
    
    // But we CAN access through public methods:
    cout << "Accessing through public getter: " << sportsCarObj.getBrand() << endl;
    
    /*
     * Demonstrate Derived Class Features
     */
    cout << "=== Sports Car Specific Features ===" << endl;
    cout << "Horsepower: " << sportsCarObj.getHorsepower() << " HP" << endl;
    cout << "Top Speed: " << sportsCarObj.getTopSpeed() << " mph" << endl;
    cout << endl;
    
    // Upgrade the sports car
    sportsCarObj.upgrade(700, 220.0);
    sportsCarObj.printSportsCarDetails();
    
    /*
     * Create Another Type of Derived Class
     */
    cout << "=== Creating ElectricCar (Another Derived Class) ===" << endl;
    ElectricCar electricCar("Tesla", "Model S", 2023, 100, 405);
    electricCar.printElectricDetails();
    
    // Electric car also inherits base class methods
    cout << "Electric car can also use base class methods:" << endl;
    electricCar.print();
    
    /*
     * Key Learning Points:
     * 
     * 1. Protected Access Specifier:
     *    - Not accessible from outside the class (like private)
     *    - Accessible from derived classes (unlike private)
     *    - Perfect for data that should be shared with child classes
     * 
     * 2. Inheritance Basics:
     *    - Derived classes inherit public and protected members
     *    - Private members are NOT inherited (not accessible in derived classes)
     *    - Use : public BaseClass syntax for public inheritance
     * 
     * 3. Constructor Inheritance:
     *    - Base class constructor is called first
     *    - Use initialization list: DerivedConstructor(...) : BaseConstructor(...)
     *    - Derived constructor runs after base constructor
     * 
     * 4. Method Inheritance:
     *    - Derived classes inherit all public methods from base class
     *    - Can call inherited methods on derived objects
     *    - Can add new methods specific to derived class
     * 
     * 5. Access Comparison:
     *    - Private: Only within the same class
     *    - Protected: Within class and derived classes
     *    - Public: Accessible from anywhere
     * 
     * 6. Benefits of Protected Access:
     *    - Enables inheritance while maintaining encapsulation
     *    - Allows derived classes to work directly with base class data
     *    - Provides flexibility for specialized behavior in derived classes
     * 
     * 7. Real-world Applications:
     *    - Vehicle hierarchy (Car -> SportsCar, ElectricCar, Truck)
     *    - Shape hierarchy (Shape -> Circle, Rectangle, Triangle)
     *    - Employee hierarchy (Employee -> Manager, Developer, Designer)
     *    - Game objects (GameObject -> Player, Enemy, Item)
     * 
     * 8. Best Practices:
     *    - Use protected for data that derived classes need to access
     *    - Keep the base class interface stable
     *    - Prefer composition over inheritance when appropriate
     *    - Use virtual functions for polymorphism (advanced topic)
     */
    
    return 0;
}