/*
 * CLASS METHODS IN C++ ⚙️
 * 
 * This program teaches you:
 * 1. What class methods (member functions) are
 * 2. How to define methods inside and outside the class
 * 3. How methods can access and modify member variables
 * 4. The difference between data and behavior in classes
 * 5. How to call methods on objects
 * 
 * Key Concepts:
 * - Method: A function that belongs to a class (also called member function)
 * - Member variables: Data that belongs to each object
 * - Member functions: Behavior/actions that objects can perform
 * - this: An implicit pointer to the current object
 * - Encapsulation: Combining data and methods that work on that data
 * 
 * Think of methods like this:
 * - A car (object) has properties: brand, model, speed
 * - A car can also DO things: start(), accelerate(), brake()
 * - Methods are the actions an object can perform
 */

#include <iostream>
#include <string>
using namespace std;

/*
 * CLASS DEFINITION: Car
 * 
 * This class demonstrates how to combine data (member variables)
 * with behavior (member methods)
 */
class Car {
    public:
        // Member variables (data) - what a car HAS
        string brand;
        string model;
        int year;
        int maxSpeed;
        int currentSpeed;
        bool isRunning;
        
        /*
         * CONSTRUCTOR
         * Initializes a new car object
         */
        Car(string carBrand, string carModel, int carYear, int maximumSpeed) {
            cout << "  🏗️ Creating new car: " << carBrand << " " << carModel << endl;
            
            // Initialize member variables
            brand = carBrand;
            model = carModel;
            year = carYear;
            maxSpeed = maximumSpeed;
            currentSpeed = 0;        // Cars start at rest
            isRunning = false;       // Cars start turned off
            
            cout << "  ✅ Car created successfully!" << endl;
        }
        
        /*
         * METHOD 1: startEngine
         * This method starts the car's engine
         */
        void startEngine() {
            cout << "  🔑 Starting engine of " << brand << " " << model << "..." << endl;
            
            if (isRunning) {
                cout << "  ⚠️ Engine is already running!" << endl;
            } else {
                isRunning = true;
                cout << "  ✅ Engine started! Ready to drive." << endl;
            }
            cout << endl;
        }
        
        /*
         * METHOD 2: stopEngine
         * This method stops the car's engine
         */
        void stopEngine() {
            cout << "  🛑 Stopping engine of " << brand << " " << model << "..." << endl;
            
            if (!isRunning) {
                cout << "  ⚠️ Engine is already off!" << endl;
            } else {
                isRunning = false;
                currentSpeed = 0; // Car stops when engine is off
                cout << "  ✅ Engine stopped. Car is at rest." << endl;
            }
            cout << endl;
        }
        
        /*
         * METHOD 3: accelerate
         * This method increases the car's speed
         */
        void accelerate(int speedIncrease) {
            cout << "  🚀 Accelerating " << brand << " " << model << " by " << speedIncrease << " km/h..." << endl;
            
            if (!isRunning) {
                cout << "  ❌ Cannot accelerate! Engine is not running." << endl;
                cout << "     💡 Hint: Call startEngine() first!" << endl;
            } else {
                int newSpeed = currentSpeed + speedIncrease;
                
                if (newSpeed > maxSpeed) {
                    cout << "  ⚠️ Cannot exceed maximum speed of " << maxSpeed << " km/h!" << endl;
                    currentSpeed = maxSpeed;
                    cout << "  🏁 Speed set to maximum: " << currentSpeed << " km/h" << endl;
                } else {
                    currentSpeed = newSpeed;
                    cout << "  📈 Speed increased to: " << currentSpeed << " km/h" << endl;
                }
            }
            cout << endl;
        }
        
        /*
         * METHOD 4: brake
         * This method decreases the car's speed
         */
        void brake(int speedDecrease) {
            cout << "  🛑 Braking " << brand << " " << model << " by " << speedDecrease << " km/h..." << endl;
            
            int newSpeed = currentSpeed - speedDecrease;
            
            if (newSpeed < 0) {
                currentSpeed = 0;
                cout << "  🏁 Car has come to a complete stop." << endl;
            } else {
                currentSpeed = newSpeed;
                cout << "  📉 Speed decreased to: " << currentSpeed << " km/h" << endl;
            }
            cout << endl;
        }
        
        /*
         * METHOD 5: getStatus
         * This method returns information about the car's current state
         */
        void getStatus() {
            cout << "  📊 Status of " << brand << " " << model << ":" << endl;
            cout << "     Year: " << year << endl;
            cout << "     Max Speed: " << maxSpeed << " km/h" << endl;
            cout << "     Current Speed: " << currentSpeed << " km/h" << endl;
            cout << "     Engine Status: " << (isRunning ? "Running" : "Off") << endl;
            
            // Provide helpful status messages
            if (!isRunning) {
                cout << "     💡 The car is parked and ready to start." << endl;
            } else if (currentSpeed == 0) {
                cout << "     💡 The car is idling (engine on, but not moving)." << endl;
            } else {
                cout << "     💡 The car is currently driving." << endl;
            }
            cout << endl;
        }
        
        /*
         * METHOD 6: calculateSpeed
         * This method demonstrates methods that return values
         */
        int calculateSpeed(int targetSpeed) {
            cout << "  🧮 Calculating if we can reach " << targetSpeed << " km/h..." << endl;
            
            if (targetSpeed > maxSpeed) {
                cout << "  ❌ Target speed exceeds maximum speed!" << endl;
                return maxSpeed; // Return the maximum possible speed
            } else {
                cout << "  ✅ Target speed is achievable!" << endl;
                return targetSpeed; // Return the target speed
            }
        }
};

/*
 * FUNCTION: demonstrateMethodConcepts
 * Explains what methods are and why they're useful
 */
void demonstrateMethodConcepts() {
    cout << "📊 UNDERSTANDING CLASS METHODS" << endl;
    cout << "Let's explore what methods are and why they matter:" << endl;
    cout << endl;
    
    cout << "⚙️ WHAT ARE METHODS?" << endl;
    cout << "• Functions that belong to a class" << endl;
    cout << "• Define what objects can DO (their behavior)" << endl;
    cout << "• Can access and modify the object's member variables" << endl;
    cout << "• Represent actions or operations the object can perform" << endl;
    cout << endl;
    
    cout << "📊 DATA vs BEHAVIOR:" << endl;
    cout << "• Member variables = WHAT an object IS (data/properties)" << endl;
    cout << "  Example: brand, model, year, speed" << endl;
    cout << "• Member methods = WHAT an object DOES (behavior/actions)" << endl;
    cout << "  Example: start(), stop(), accelerate(), brake()" << endl;
    cout << endl;
    
    cout << "🔗 HOW METHODS ACCESS DATA:" << endl;
    cout << "• Methods can directly access member variables" << endl;
    cout << "• No need to pass member variables as parameters" << endl;
    cout << "• Each object's methods work on that object's data" << endl;
    cout << "• Methods can modify the object's state" << endl;
    cout << endl;
}

/*
 * MAIN FUNCTION - The program starts here!
 */
int main() {
    cout << "=== CLASS METHODS IN C++ ===" << endl;
    cout << "Learn how to add behavior to your objects!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 1: Understanding method concepts
    // =========================================================
    demonstrateMethodConcepts();
    cout << "===========================================" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 2: Creating an object and using its methods
    // =========================================================
    cout << "📊 EXAMPLE 1: Creating and Using Objects" << endl;
    cout << "Let's create a car and interact with it using methods:" << endl;
    cout << endl;
    
    // Create a car object
    cout << "🚗 Creating a sports car:" << endl;
    Car sportsCar("Ferrari", "488 GTB", 2022, 330);
    cout << endl;
    
    // Check initial status
    cout << "🔍 Initial status:" << endl;
    sportsCar.getStatus();
    
    // =========================================================
    // EXAMPLE 3: Method interactions and state changes
    // =========================================================
    cout << "📊 EXAMPLE 2: Methods Changing Object State" << endl;
    cout << "Watch how methods modify the object's member variables:" << endl;
    cout << endl;
    
    // Try to accelerate without starting engine
    cout << "🚀 Trying to accelerate without starting engine:" << endl;
    sportsCar.accelerate(50);
    
    // Start the engine
    cout << "🔑 Let's start the engine first:" << endl;
    sportsCar.startEngine();
    
    // Now accelerate
    cout << "🚀 Now let's accelerate:" << endl;
    sportsCar.accelerate(100);
    sportsCar.getStatus();
    
    // Accelerate more
    cout << "🚀 Accelerating more:" << endl;
    sportsCar.accelerate(150);
    sportsCar.getStatus();
    
    // Try to exceed maximum speed
    cout << "🚀 Trying to go beyond maximum speed:" << endl;
    sportsCar.accelerate(200);
    sportsCar.getStatus();
    
    // =========================================================
    // EXAMPLE 4: More method interactions
    // =========================================================
    cout << "📊 EXAMPLE 3: Braking and Stopping" << endl;
    cout << "Let's slow down and stop the car:" << endl;
    cout << endl;
    
    // Brake
    cout << "🛑 Applying brakes:" << endl;
    sportsCar.brake(100);
    sportsCar.getStatus();
    
    // Brake more to stop completely
    cout << "🛑 Braking harder to stop completely:" << endl;
    sportsCar.brake(250); // More than current speed - should stop at 0
    sportsCar.getStatus();
    
    // Stop engine
    cout << "🔑 Turning off the engine:" << endl;
    sportsCar.stopEngine();
    sportsCar.getStatus();
    
    // =========================================================
    // EXAMPLE 5: Methods that return values
    // =========================================================
    cout << "📊 EXAMPLE 4: Methods That Return Values" << endl;
    cout << "Some methods can calculate and return values:" << endl;
    cout << endl;
    
    cout << "🧮 Testing the calculateSpeed method:" << endl;
    int achievableSpeed1 = sportsCar.calculateSpeed(200);
    cout << "   Returned value: " << achievableSpeed1 << " km/h" << endl;
    cout << endl;
    
    int achievableSpeed2 = sportsCar.calculateSpeed(400); // Beyond max speed
    cout << "   Returned value: " << achievableSpeed2 << " km/h" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 6: Multiple objects with independent methods
    // =========================================================
    cout << "📊 EXAMPLE 5: Independent Objects" << endl;
    cout << "Each object has its own state and methods work independently:" << endl;
    cout << endl;
    
    // Create another car
    cout << "🚙 Creating a family car:" << endl;
    Car familyCar("Toyota", "Camry", 2023, 180);
    cout << endl;
    
    // Start both cars and set different speeds
    cout << "🔑 Starting both cars:" << endl;
    sportsCar.startEngine();
    familyCar.startEngine();
    
    cout << "🚀 Setting different speeds:" << endl;
    sportsCar.accelerate(150);
    familyCar.accelerate(80);
    
    cout << "📊 Comparing car states:" << endl;
    cout << "Sports car status:" << endl;
    sportsCar.getStatus();
    cout << "Family car status:" << endl;
    familyCar.getStatus();
    
    // =========================================================
    // SUMMARY SECTION
    // =========================================================
    cout << "===========================================" << endl;
    cout << "📚 SUMMARY - What You Learned:" << endl;
    cout << "1. Methods are functions that belong to classes" << endl;
    cout << "2. Methods define what objects can do (behavior)" << endl;
    cout << "3. Methods can access and modify member variables" << endl;
    cout << "4. Each object's methods work independently" << endl;
    cout << "5. Methods can return values and take parameters" << endl;
    cout << endl;
    
    cout << "🔑 METHOD SYNTAX:" << endl;
    cout << "   class ClassName {" << endl;
    cout << "   public:" << endl;
    cout << "       returnType methodName(parameters) {" << endl;
    cout << "           // Method body" << endl;
    cout << "           // Can access member variables directly" << endl;
    cout << "           return value; // if returnType is not void" << endl;
    cout << "       }" << endl;
    cout << "   };" << endl;
    cout << endl;
    
    cout << "🔑 CALLING METHODS:" << endl;
    cout << "   ClassName objectName;" << endl;
    cout << "   objectName.methodName(arguments);" << endl;
    cout << "   returnType result = objectName.methodName(arguments);" << endl;
    cout << endl;
    
    cout << "💡 METHOD DESIGN PRINCIPLES:" << endl;
    cout << "• Methods should have clear, descriptive names" << endl;
    cout << "• Each method should do one thing well" << endl;
    cout << "• Methods should validate their inputs when necessary" << endl;
    cout << "• Use void for methods that don't return values" << endl;
    cout << "• Methods can call other methods in the same class" << endl;
    cout << endl;
    
    cout << "🎯 REAL-WORLD EXAMPLES:" << endl;
    cout << "• BankAccount: deposit(), withdraw(), getBalance()" << endl;
    cout << "• Student: enroll(), submitAssignment(), getGrade()" << endl;
    cout << "• Game Player: move(), attack(), heal(), levelUp()" << endl;
    cout << "• File: open(), read(), write(), close()" << endl;
    cout << endl;
    
    cout << "🎉 Outstanding! You now understand class methods!" << endl;
    cout << "💡 Try creating a class with methods that model real-world behavior!" << endl;
    
    return 0; // Program completed successfully
}