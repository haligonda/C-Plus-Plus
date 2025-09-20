/*
 * PROTECTED ACCESS SPECIFIER AND INHERITANCE IN C++ 🏗️👨‍👩‍👧‍👦
 * 
 * This program teaches you:
 * 1. What the protected access specifier means
 * 2. How inheritance works in C++ (creating child classes)
 * 3. The difference between private, protected, and public access
 * 4. How to create base classes and derived classes
 * 5. How to use constructor initialization lists
 * 
 * Key Concepts:
 * - protected: Accessible within the class and its subclasses (children)
 * - Inheritance: Creating new classes based on existing classes
 * - Base class: The parent class that other classes inherit from
 * - Derived class: The child class that inherits from a base class
 * - "is-a" relationship: SportsCar IS-A Car, Dog IS-A Animal
 * - Constructor initialization list: Efficient way to initialize base class
 * 
 * Think of inheritance like a family tree:
 * - Parent (Car) has certain traits
 * - Child (SportsCar) inherits parent's traits
 * - Child can also have additional unique traits
 */

#include <iostream>
#include <string>
using namespace std;

/*
 * BASE CLASS: Car
 * 
 * This is the parent class that other car types will inherit from.
 * We use 'protected' to allow child classes to access these members
 * while still preventing direct external access.
 */
class Car {
    protected:
        // Protected member variables - accessible by this class and its children
        string brand;
        string model;
        int year;
        int topSpeed;
        
        /*
         * PROTECTED HELPER METHOD: displayBasicInfo
         * Child classes can use this method, but external code cannot
         */
        void displayBasicInfo() {
            cout << "    Brand: " << brand << endl;
            cout << "    Model: " << model << endl;
            cout << "    Year:  " << year << endl;
            cout << "    Top Speed: " << topSpeed << " km/h" << endl;
        }

    public:
        /*
         * CONSTRUCTOR: Car
         * Initializes the basic car properties
         */
        Car(string carBrand, string carModel, int carYear, int maxSpeed = 200) {
            cout << "  🏗️ Car base constructor called" << endl;
            cout << "     Creating base car: " << carBrand << " " << carModel << endl;
            
            brand = carBrand;
            model = carModel;
            year = carYear;
            topSpeed = maxSpeed;
            
            cout << "     ✅ Base car created successfully!" << endl;
        }

        /*
         * PUBLIC METHOD: print
         * Displays general car information
         */
        virtual void print() {
            cout << "=========================" << endl;
            cout << "       Car Details       " << endl;
            cout << "=========================" << endl;
            displayBasicInfo(); // Using protected method
            cout << "    Type: Regular Car" << endl;
            cout << "=========================" << endl;
            cout << endl;
        }

        // Getter methods (public interface)
        string getBrand() { return brand; }
        string getModel() { return model; }
        int getYear() { return year; }
        int getTopSpeed() { return topSpeed; }
        
        // Setter methods (public interface)
        void setBrand(string newBrand) { brand = newBrand; }
        void setModel(string newModel) { model = newModel; }
        void setYear(int newYear) { year = newYear; }
        void setTopSpeed(int newSpeed) { topSpeed = newSpeed; }
        
        /*
         * VIRTUAL DESTRUCTOR
         * Good practice for base classes that will be inherited
         */
        virtual ~Car() {
            cout << "  🔧 Car destructor called for " << brand << " " << model << endl;
        }
};

/*
 * DERIVED CLASS: SportsCar
 * 
 * This class inherits from Car and adds sports car-specific features.
 * It demonstrates how protected members can be accessed by child classes.
 */
class SportsCar : public Car {
    private:
        // Private members specific to sports cars
        int horsePower;
        bool hasTurbo;
        
    public:
        /*
         * CONSTRUCTOR: SportsCar
         * Uses initialization list to call the base class constructor
         */
        SportsCar(string carBrand, string carModel, int carYear, int maxSpeed, int hp, bool turbo) 
            : Car(carBrand, carModel, carYear, maxSpeed) // Call base constructor
        {
            cout << "  🏁 SportsCar constructor called" << endl;
            cout << "     Adding sports car features..." << endl;
            
            horsePower = hp;
            hasTurbo = turbo;
            
            cout << "     🏎️ Sports car created with " << horsePower << " HP" << endl;
            cout << "     ✅ SportsCar construction complete!" << endl;
        }

        /*
         * OVERRIDDEN METHOD: print
         * Overrides the base class print method with sports car-specific details
         */
        void print() override {
            cout << "=========================" << endl;
            cout << "   Sports Car Details    " << endl;
            cout << "=========================" << endl;
            
            // Can access protected members from base class
            displayBasicInfo(); // This is a protected method from Car
            
            // Add sports car-specific information
            cout << "    Type: Sports Car" << endl;
            cout << "    Horsepower: " << horsePower << " HP" << endl;
            cout << "    Turbo: " << (hasTurbo ? "Yes" : "No") << endl;
            cout << "=========================" << endl;
            cout << endl;
        }
        
        /*
         * SPORTS CAR SPECIFIC METHODS
         */
        void accelerate() {
            cout << "  🚀 " << brand << " " << model << " accelerating with " << horsePower << " HP!" << endl;
            if (hasTurbo) {
                cout << "  💨 Turbo boost activated!" << endl;
            }
            cout << endl;
        }
        
        void drift() {
            cout << "  🌪️ " << brand << " " << model << " performing a drift maneuver!" << endl;
            cout << "     💨 Tires screaming, crowd cheering!" << endl;
            cout << endl;
        }
        
        // Getters for sports car-specific data
        int getHorsePower() { return horsePower; }
        bool getHasTurbo() { return hasTurbo; }
};

/*
 * DERIVED CLASS: FamilyCar
 * 
 * Another child class showing different characteristics
 */
class FamilyCar : public Car {
    private:
        int seatingCapacity;
        bool hasAirBags;
        
    public:
        FamilyCar(string carBrand, string carModel, int carYear, int seats, bool airBags) 
            : Car(carBrand, carModel, carYear, 160) // Family cars have lower top speed
        {
            cout << "  👨‍👩‍👧‍👦 FamilyCar constructor called" << endl;
            
            seatingCapacity = seats;
            hasAirBags = airBags;
            
            cout << "     🚙 Family car created with " << seats << " seats" << endl;
            cout << "     ✅ FamilyCar construction complete!" << endl;
        }
        
        void print() override {
            cout << "=========================" << endl;
            cout << "    Family Car Details   " << endl;
            cout << "=========================" << endl;
            
            // Access protected members from base class
            displayBasicInfo();
            
            cout << "    Type: Family Car" << endl;
            cout << "    Seating: " << seatingCapacity << " people" << endl;
            cout << "    Air Bags: " << (hasAirBags ? "Yes" : "No") << endl;
            cout << "=========================" << endl;
            cout << endl;
        }
        
        void loadFamily() {
            cout << "  👨‍👩‍👧‍👦 Loading family into " << brand << " " << model << endl;
            cout << "     🎒 Packing bags, car seats, and snacks!" << endl;
            cout << "     ✅ Ready for a family trip!" << endl;
            cout << endl;
        }
};

/*
 * FUNCTION: demonstrateAccessLevels
 * Explains the three access levels and their differences
 */
void demonstrateAccessLevels() {
    cout << "📊 UNDERSTANDING ACCESS LEVELS" << endl;
    cout << "Let's explore private, protected, and public access:" << endl;
    cout << endl;
    
    cout << "🔒 PRIVATE:" << endl;
    cout << "• Only accessible within the same class" << endl;
    cout << "• NOT accessible by child classes" << endl;
    cout << "• NOT accessible from external code" << endl;
    cout << "• Used for internal implementation details" << endl;
    cout << endl;
    
    cout << "🛡️ PROTECTED:" << endl;
    cout << "• Accessible within the same class" << endl;
    cout << "• ACCESSIBLE by child classes (inheritance)" << endl;
    cout << "• NOT accessible from external code" << endl;
    cout << "• Used for data that children should access" << endl;
    cout << endl;
    
    cout << "🌍 PUBLIC:" << endl;
    cout << "• Accessible from anywhere" << endl;
    cout << "• Accessible by child classes" << endl;
    cout << "• Accessible from external code" << endl;
    cout << "• Used for the class's public interface" << endl;
    cout << endl;
}

/*
 * FUNCTION: demonstrateInheritanceConcepts
 * Explains inheritance and its benefits
 */
void demonstrateInheritanceConcepts() {
    cout << "📊 UNDERSTANDING INHERITANCE" << endl;
    cout << "Let's explore how inheritance works:" << endl;
    cout << endl;
    
    cout << "👨‍👩‍👧‍👦 INHERITANCE RELATIONSHIP:" << endl;
    cout << "• Base class (Parent): Contains common properties and methods" << endl;
    cout << "• Derived class (Child): Inherits from base + adds specific features" << endl;
    cout << "• 'IS-A' relationship: SportsCar IS-A Car, FamilyCar IS-A Car" << endl;
    cout << endl;
    
    cout << "✅ BENEFITS OF INHERITANCE:" << endl;
    cout << "• Code reusability: Don't repeat common functionality" << endl;
    cout << "• Hierarchical organization: Models real-world relationships" << endl;
    cout << "• Polymorphism: Treat different objects uniformly" << endl;
    cout << "• Maintainability: Changes to base affect all children" << endl;
    cout << endl;
    
    cout << "🏗️ CONSTRUCTOR CHAIN:" << endl;
    cout << "1. When child object is created, base constructor runs first" << endl;
    cout << "2. Then child constructor runs and adds specific features" << endl;
    cout << "3. Initialization list syntax: Child() : Base(params) { }" << endl;
    cout << endl;
}

/*
 * MAIN FUNCTION - The program starts here!
 */
int main() {
    cout << "=== PROTECTED ACCESS AND INHERITANCE ===" << endl;
    cout << "Learn how classes can inherit from other classes!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 1: Understanding access levels
    // =========================================================
    demonstrateAccessLevels();
    cout << "===========================================" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 2: Understanding inheritance
    // =========================================================
    demonstrateInheritanceConcepts();
    cout << "===========================================" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 3: Creating base class objects
    // =========================================================
    cout << "📊 EXAMPLE 1: Creating Base Class Objects" << endl;
    cout << "Let's create regular Car objects first:" << endl;
    cout << endl;
    
    cout << "🚗 Creating regular cars:" << endl;
    Car regularCar1("Ford", "Focus", 2020, 180);
    cout << endl;
    
    Car regularCar2("Toyota", "Camry", 2023, 190);
    cout << endl;
    
    cout << "📋 Displaying regular car details:" << endl;
    regularCar1.print();
    regularCar2.print();
    
    // =========================================================
    // EXAMPLE 4: Creating derived class objects
    // =========================================================
    cout << "📊 EXAMPLE 2: Creating Derived Class Objects" << endl;
    cout << "Now let's create specialized car types:" << endl;
    cout << endl;
    
    cout << "🏁 Creating a sports car:" << endl;
    SportsCar ferrari("Ferrari", "488 GTB", 2022, 330, 661, true);
    cout << endl;
    
    cout << "👨‍👩‍👧‍👦 Creating a family car:" << endl;
    FamilyCar minivan("Honda", "Odyssey", 2023, 8, true);
    cout << endl;
    
    // =========================================================
    // EXAMPLE 5: Demonstrating inherited and specific behaviors
    // =========================================================
    cout << "📊 EXAMPLE 3: Polymorphic Behavior" << endl;
    cout << "Each class has its own version of print():" << endl;
    cout << endl;
    
    cout << "🖨️ Calling print() on different types:" << endl;
    ferrari.print();        // SportsCar version
    minivan.print();        // FamilyCar version
    
    // =========================================================
    // EXAMPLE 6: Using specific methods
    // =========================================================
    cout << "📊 EXAMPLE 4: Type-Specific Methods" << endl;
    cout << "Derived classes have unique capabilities:" << endl;
    cout << endl;
    
    cout << "🏁 Sports car specific actions:" << endl;
    ferrari.accelerate();
    ferrari.drift();
    
    cout << "👨‍👩‍👧‍👦 Family car specific actions:" << endl;
    minivan.loadFamily();
    
    // =========================================================
    // EXAMPLE 7: Accessing inherited methods
    // =========================================================
    cout << "📊 EXAMPLE 5: Inherited Methods and Data" << endl;
    cout << "Child classes can use parent's public methods:" << endl;
    cout << endl;
    
    cout << "🔍 Accessing inherited getters:" << endl;
    cout << "   Ferrari brand: " << ferrari.getBrand() << endl;
    cout << "   Ferrari top speed: " << ferrari.getTopSpeed() << " km/h" << endl;
    cout << "   Minivan seating: " << minivan.getBrand() << " seats " << 8 << " people" << endl;
    cout << endl;
    
    cout << "✏️ Using inherited setters:" << endl;
    ferrari.setYear(2024);
    cout << "   Updated Ferrari year to: " << ferrari.getYear() << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 8: Demonstrating protected access
    // =========================================================
    cout << "📊 EXAMPLE 6: Protected Member Access" << endl;
    cout << "Let's see how protected members work:" << endl;
    cout << endl;
    
    cout << "✅ WHAT WORKS:" << endl;
    cout << "   • Child classes CAN access protected members" << endl;
    cout << "   • Child classes CAN use protected methods" << endl;
    cout << "   • Both SportsCar and FamilyCar use displayBasicInfo()" << endl;
    cout << endl;
    
    cout << "❌ WHAT DOESN'T WORK:" << endl;
    cout << "   // ferrari.brand = \"McLaren\";          // ❌ Cannot access protected directly" << endl;
    cout << "   // ferrari.displayBasicInfo();          // ❌ Cannot call protected method" << endl;
    cout << "   💡 Protected members are hidden from external code!" << endl;
    cout << endl;
    
    // =========================================================
    // SUMMARY SECTION
    // =========================================================
    cout << "===========================================" << endl;
    cout << "📚 SUMMARY - What You Learned:" << endl;
    cout << "1. protected allows access within class and its children" << endl;
    cout << "2. Inheritance creates 'IS-A' relationships between classes" << endl;
    cout << "3. Derived classes inherit all non-private members from base" << endl;
    cout << "4. Constructor initialization lists efficiently call base constructors" << endl;
    cout << "5. Override keyword ensures proper method overriding" << endl;
    cout << "6. Each object type can have specialized behavior" << endl;
    cout << endl;
    
    cout << "🔑 INHERITANCE SYNTAX:" << endl;
    cout << "   class Base {" << endl;
    cout << "   protected:" << endl;
    cout << "       // Accessible by children" << endl;
    cout << "   public:" << endl;
    cout << "       // Public interface" << endl;
    cout << "   };" << endl;
    cout << "   class Child : public Base {" << endl;
    cout << "   public:" << endl;
    cout << "       Child(params) : Base(baseParams) { }" << endl;
    cout << "       void method() override { }" << endl;
    cout << "   };" << endl;
    cout << endl;
    
    cout << "🔑 ACCESS LEVEL COMPARISON:" << endl;
    cout << "                │ Same Class │ Child Class │ External Code │" << endl;
    cout << "   private      │     ✅     │      ❌      │       ❌       │" << endl;
    cout << "   protected    │     ✅     │      ✅      │       ❌       │" << endl;
    cout << "   public       │     ✅     │      ✅      │       ✅       │" << endl;
    cout << endl;
    
    cout << "💡 WHEN TO USE PROTECTED:" << endl;
    cout << "• Data that child classes need to access directly" << endl;
    cout << "• Helper methods that children should be able to use" << endl;
    cout << "• Common functionality shared among related classes" << endl;
    cout << "• When you want controlled inheritance access" << endl;
    cout << endl;
    
    cout << "🎯 INHERITANCE EXAMPLES IN REAL LIFE:" << endl;
    cout << "• Vehicle → Car, Truck, Motorcycle" << endl;
    cout << "• Animal → Dog, Cat, Bird" << endl;
    cout << "• Shape → Circle, Rectangle, Triangle" << endl;
    cout << "• Employee → Manager, Developer, Designer" << endl;
    cout << endl;
    
    cout << "🎉 Fantastic! You now understand inheritance and protected access!" << endl;
    cout << "💡 You've mastered the core concepts of object-oriented programming!" << endl;
    cout << "🚀 Next step: Explore polymorphism and virtual functions!" << endl;
    
    return 0; // Program completed successfully
}