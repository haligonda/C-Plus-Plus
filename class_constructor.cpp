/*
 * CLASS CONSTRUCTORS IN C++ 🏗️
 * 
 * This program teaches you:
 * 1. What classes are and how they differ from structs
 * 2. What constructors are and why they're important
 * 3. How to create and use constructors
 * 4. Public vs private access in classes
 * 5. How to create objects using constructors
 * 
 * Key Concepts:
 * - class: A blueprint for creating objects (like a template)
 * - Constructor: A special function that runs when an object is created
 * - Object: An instance of a class (like a car made from car blueprint)
 * - public: Members accessible from outside the class
 * - private: Members only accessible from inside the class
 * - Member variables: Variables that belong to the class
 * - Member functions: Functions that belong to the class
 * 
 * Think of a class like a cookie cutter:
 * - The class is the cookie cutter (template)
 * - Objects are the cookies (individual instances)
 * - Constructor is the process of cutting the cookie
 */

#include <iostream>
#include <string>
using namespace std;

/*
 * CLASS DEFINITION: Car
 * 
 * This class demonstrates basic object-oriented programming concepts
 */
class Car {
    public:
        // Public member variables - accessible from outside the class
        string brand;
        string model;
        int year;
        
        /*
         * CONSTRUCTOR: Car
         * 
         * This special function runs automatically when a Car object is created
         * It initializes the object's member variables
         * 
         * Parameters:
         * - carBrand: The brand of the car
         * - carModel: The model of the car  
         * - carYear: The year of the car
         */
        Car(string carBrand, string carModel, int carYear) {
            cout << "  🏗️ Car constructor called!" << endl;
            cout << "     Creating car: " << carBrand << " " << carModel << " " << carYear << endl;
            
            // Initialize member variables with the provided values
            brand = carBrand;
            model = carModel;
            year = carYear;
            
            cout << "     ✅ Car object successfully constructed!" << endl;
        }

        /*
         * MEMBER FUNCTION: print
         * 
         * This function displays the car's information in a nice format
         */
        void print() {
            cout << "==================" << endl;
            cout << "    Car Details    " << endl;
            cout << "==================" << endl;
            cout << "Brand:  " << brand << endl;
            cout << "Model:  " << model << endl;
            cout << "Year:   " << year << endl;
            cout << "==================" << endl;
            cout << endl;
        }
};

/*
 * FUNCTION: demonstrateClassConcepts
 * Explains the basic concepts of classes and objects
 */
void demonstrateClassConcepts() {
    cout << "📊 UNDERSTANDING CLASSES AND OBJECTS" << endl;
    cout << "Let's break down the key concepts:" << endl;
    cout << endl;
    
    cout << "🏭 CLASS:" << endl;
    cout << "• A blueprint or template for creating objects" << endl;
    cout << "• Defines what properties (variables) objects will have" << endl;
    cout << "• Defines what actions (functions) objects can perform" << endl;
    cout << "• Like a cookie cutter - shapes what objects look like" << endl;
    cout << endl;
    
    cout << "🍪 OBJECT:" << endl;
    cout << "• An instance (specific example) of a class" << endl;
    cout << "• Has its own copy of the class's variables" << endl;
    cout << "• Can use all the class's functions" << endl;
    cout << "• Like a cookie made from the cookie cutter" << endl;
    cout << endl;
    
    cout << "🏗️ CONSTRUCTOR:" << endl;
    cout << "• A special function that runs when an object is created" << endl;
    cout << "• Sets up the object with initial values" << endl;
    cout << "• Has the same name as the class" << endl;
    cout << "• Ensures objects start in a valid state" << endl;
    cout << endl;
}

/*
 * FUNCTION: demonstrateConstructorProcess
 * Shows step-by-step what happens when an object is created
 */
void demonstrateConstructorProcess() {
    cout << "📊 HOW CONSTRUCTORS WORK" << endl;
    cout << "Let's see the object creation process step by step:" << endl;
    cout << endl;
    
    cout << "🔄 Object Creation Process:" << endl;
    cout << "1. 📝 Declare object with parameters" << endl;
    cout << "2. 🧠 C++ allocates memory for the object" << endl;
    cout << "3. 🏗️ Constructor function is called automatically" << endl;
    cout << "4. ⚙️ Constructor initializes member variables" << endl;
    cout << "5. ✅ Object is ready to use!" << endl;
    cout << endl;
}

/*
 * MAIN FUNCTION - The program starts here!
 */
int main() {
    cout << "=== CLASS CONSTRUCTORS IN C++ ===" << endl;
    cout << "Learn the fundamentals of object-oriented programming!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 1: Understanding concepts
    // =========================================================
    demonstrateClassConcepts();
    cout << "===========================================" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 2: Constructor process explanation
    // =========================================================
    demonstrateConstructorProcess();
    cout << "===========================================" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 3: Creating objects with constructors
    // =========================================================
    cout << "📊 EXAMPLE 1: Creating Objects" << endl;
    cout << "Let's create our first car objects!" << endl;
    cout << endl;
    
    cout << "🚗 Creating first car object:" << endl;
    cout << "   Car firstCar(\"Range Rover\", \"Sport\", 2025);" << endl;
    // Constructor will be called automatically here
    Car firstCar("Range Rover", "Sport", 2025);
    cout << endl;
    
    cout << "🎉 Object creation complete! Let's display it:" << endl;
    firstCar.print();
    
    cout << "🚙 Creating second car object:" << endl;
    cout << "   Car secondCar(\"Ford\", \"Mustang\", 1969);" << endl;
    // Constructor will be called automatically here too
    Car secondCar("Ford", "Mustang", 1969);
    cout << endl;
    
    cout << "🎉 Second object creation complete! Let's display it:" << endl;
    secondCar.print();
    
    // =========================================================
    // EXAMPLE 4: Accessing object members
    // =========================================================
    cout << "📊 EXAMPLE 2: Accessing Object Members" << endl;
    cout << "Objects can access their member variables and functions:" << endl;
    cout << endl;
    
    cout << "🔍 Accessing member variables directly:" << endl;
    cout << "   firstCar.brand = \"" << firstCar.brand << "\"" << endl;
    cout << "   firstCar.model = \"" << firstCar.model << "\"" << endl;
    cout << "   firstCar.year = " << firstCar.year << endl;
    cout << "   💡 Use dot (.) notation to access public members" << endl;
    cout << endl;
    
    cout << "🔄 Modifying member variables:" << endl;
    cout << "   Before: " << firstCar.brand << endl;
    firstCar.brand = "Land Rover";
    cout << "   After modification: " << firstCar.brand << endl;
    cout << "   💡 Public members can be changed directly" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 5: Multiple objects are independent
    // =========================================================
    cout << "📊 EXAMPLE 3: Object Independence" << endl;
    cout << "Each object has its own copy of member variables:" << endl;
    cout << endl;
    
    cout << "🔍 Comparing two different objects:" << endl;
    cout << "   First car brand: " << firstCar.brand << endl;
    cout << "   Second car brand: " << secondCar.brand << endl;
    cout << "   💡 Notice: They have different values!" << endl;
    cout << "   💡 Each object is completely independent" << endl;
    cout << endl;
    
    // Create a third car to demonstrate more
    cout << "🚕 Creating a third car to show independence:" << endl;
    Car thirdCar("Tesla", "Model S", 2023);
    cout << endl;
    
    cout << "🔍 All three cars are different:" << endl;
    cout << "   Car 1: " << firstCar.brand << " " << firstCar.model << endl;
    cout << "   Car 2: " << secondCar.brand << " " << secondCar.model << endl;
    cout << "   Car 3: " << thirdCar.brand << " " << thirdCar.model << endl;
    cout << "   💡 Same class, different objects, different data!" << endl;
    cout << endl;
    
    // =========================================================
    // SUMMARY SECTION
    // =========================================================
    cout << "===========================================" << endl;
    cout << "📚 SUMMARY - What You Learned:" << endl;
    cout << "1. Classes are blueprints for creating objects" << endl;
    cout << "2. Constructors initialize objects when they're created" << endl;
    cout << "3. Objects are independent instances of a class" << endl;
    cout << "4. Public members can be accessed from outside the class" << endl;
    cout << "5. Each object has its own copy of member variables" << endl;
    cout << endl;
    
    cout << "🔑 CLASS SYNTAX:" << endl;
    cout << "   class ClassName {" << endl;
    cout << "   public:" << endl;
    cout << "       // Member variables" << endl;
    cout << "       type memberVariable;" << endl;
    cout << "       // Constructor" << endl;
    cout << "       ClassName(parameters) { /* initialization */ }" << endl;
    cout << "       // Member functions" << endl;
    cout << "       void memberFunction() { /* code */ }" << endl;
    cout << "   };" << endl;
    cout << endl;
    
    cout << "🔑 OBJECT CREATION SYNTAX:" << endl;
    cout << "   ClassName objectName(constructorArguments);" << endl;
    cout << "   objectName.memberVariable = value;" << endl;
    cout << "   objectName.memberFunction();" << endl;
    cout << endl;
    
    cout << "💡 WHY USE CLASSES?" << endl;
    cout << "• Group related data and functions together" << endl;
    cout << "• Create reusable code templates" << endl;
    cout << "• Model real-world concepts in your programs" << endl;
    cout << "• Ensure objects start in a valid state (constructors)" << endl;
    cout << "• Foundation of object-oriented programming" << endl;
    cout << endl;
    
    cout << "🎯 NEXT STEPS:" << endl;
    cout << "• Learn about private members and encapsulation" << endl;
    cout << "• Explore getter and setter functions" << endl;
    cout << "• Understand inheritance and polymorphism" << endl;
    cout << "• Practice creating your own classes" << endl;
    cout << endl;
    
    cout << "🎉 Congratulations! You now understand class constructors!" << endl;
    cout << "💡 Try creating your own class with a constructor!" << endl;
    
    return 0; // Program completed successfully
}