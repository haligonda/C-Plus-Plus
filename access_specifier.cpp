/*
 * ACCESS SPECIFIERS AND ENCAPSULATION IN C++ 🔒
 * 
 * This program teaches you:
 * 1. What access specifiers (private, public) are and why they matter
 * 2. The concept of encapsulation in object-oriented programming
 * 3. How to use getter and setter methods
 * 4. Why data hiding is important for program security
 * 5. How to create well-designed classes with proper access control
 * 
 * Key Concepts:
 * - private: Members accessible only within the same class
 * - public: Members accessible from anywhere
 * - Encapsulation: Hiding internal details and providing controlled access
 * - Getter methods: Functions that return private member values
 * - Setter methods: Functions that safely modify private member values
 * - Data hiding: Protecting object data from direct external access
 * 
 * Think of encapsulation like a bank:
 * - Your account balance (private data) is protected
 * - You can check balance (getter) and make deposits (setter)
 * - But you can't directly manipulate the bank's internal systems
 */

#include <iostream>
#include <string>
using namespace std;

/*
 * CLASS DEFINITION: Car
 * 
 * This class demonstrates proper encapsulation with private data
 * and public methods to access that data safely
 */
class Car {
    private:
        // Private member variables - can only be accessed from within this class
        string brand;
        string model;
        int year;
        
        /*
         * PRIVATE HELPER METHOD: validateYear
         * This method checks if a year is reasonable for a car
         * Private methods are only accessible within the class
         */
        bool validateYear(int carYear) {
            // Cars weren't mass-produced before 1885, and we shouldn't have future cars
            return (carYear >= 1885 && carYear <= 2030);
        }

    public:
        /*
         * CONSTRUCTOR: Car
         * Public constructor allows objects to be created from outside the class
         */
        Car(string carBrand, string carModel, int carYear) {
            cout << "  🏗️ Creating car with encapsulated data..." << endl;
            
            // Use our private validation method
            if (validateYear(carYear)) {
                brand = carBrand;
                model = carModel;
                year = carYear;
                cout << "  ✅ Car created: " << brand << " " << model << " " << year << endl;
            } else {
                // Set default values if invalid year
                brand = carBrand;
                model = carModel;
                year = 2023; // Default to current year
                cout << "  ⚠️ Invalid year provided, set to default: " << year << endl;
            }
            cout << endl;
        }

        /*
         * PUBLIC METHOD: print
         * Displays car information - can access private members because it's inside the class
         */
        void print() {
            cout << "==========================" << endl;
            cout << "|      Car Details       |" << endl;
            cout << "==========================" << endl;
            cout << "     Brand:  " << brand << endl;
            cout << "     Model:  " << model << endl;
            cout << "     Year:   " << year << endl;
            cout << "==========================" << endl;
            cout << endl;
        }

        // ===== GETTER METHODS =====
        // These provide READ access to private data
        
        /*
         * GETTER: getBrand
         * Returns the car's brand (read-only access to private data)
         */
        string getBrand() {
            cout << "  📖 Getting brand value: " << brand << endl;
            return brand;
        }

        /*
         * GETTER: getModel  
         * Returns the car's model (read-only access to private data)
         */
        string getModel() {
            cout << "  📖 Getting model value: " << model << endl;
            return model;
        }

        /*
         * GETTER: getYear
         * Returns the car's year (read-only access to private data)
         */
        int getYear() {
            cout << "  📖 Getting year value: " << year << endl;
            return year;
        }

        // ===== SETTER METHODS =====
        // These provide WRITE access to private data with validation
        
        /*
         * SETTER: setBrand
         * Safely modifies the car's brand with validation
         */
        void setBrand(string newBrand) {
            cout << "  ✏️ Setting brand from '" << brand << "' to '" << newBrand << "'" << endl;
            
            if (newBrand.empty()) {
                cout << "  ❌ Invalid brand: cannot be empty!" << endl;
                return;
            }
            
            brand = newBrand;
            cout << "  ✅ Brand updated successfully!" << endl;
        }

        /*
         * SETTER: setModel
         * Safely modifies the car's model with validation
         */
        void setModel(string newModel) {
            cout << "  ✏️ Setting model from '" << model << "' to '" << newModel << "'" << endl;
            
            if (newModel.empty()) {
                cout << "  ❌ Invalid model: cannot be empty!" << endl;
                return;
            }
            
            model = newModel;
            cout << "  ✅ Model updated successfully!" << endl;
        }

        /*
         * SETTER: setYear
         * Safely modifies the car's year with validation
         */
        void setYear(int newYear) {
            cout << "  ✏️ Setting year from " << year << " to " << newYear << endl;
            
            if (validateYear(newYear)) {
                year = newYear;
                cout << "  ✅ Year updated successfully!" << endl;
            } else {
                cout << "  ❌ Invalid year: must be between 1885 and 2030!" << endl;
                cout << "  💡 Year remains unchanged: " << year << endl;
            }
        }
        
        /*
         * PUBLIC METHOD: getCarInfo
         * Demonstrates how public methods can access all private data
         */
        string getCarInfo() {
            // This method can access private members directly
            return brand + " " + model + " (" + to_string(year) + ")";
        }
};

/*
 * FUNCTION: demonstrateEncapsulationConcepts
 * Explains the key concepts of encapsulation and access control
 */
void demonstrateEncapsulationConcepts() {
    cout << "📊 UNDERSTANDING ENCAPSULATION" << endl;
    cout << "Let's explore why we hide data and control access:" << endl;
    cout << endl;
    
    cout << "🔒 ENCAPSULATION:" << endl;
    cout << "• Bundling data and methods that work on that data together" << endl;
    cout << "• Hiding internal implementation details from outside code" << endl;
    cout << "• Providing controlled access through public methods" << endl;
    cout << "• Like a capsule - contents are protected inside" << endl;
    cout << endl;
    
    cout << "🔑 ACCESS SPECIFIERS:" << endl;
    cout << "• private: Only accessible within the same class" << endl;
    cout << "• public: Accessible from anywhere in the program" << endl;
    cout << "• protected: Accessible within class and its subclasses (inheritance)" << endl;
    cout << endl;
    
    cout << "🛡️ WHY HIDE DATA (DATA HIDING)?" << endl;
    cout << "• Prevents accidental corruption of object state" << endl;
    cout << "• Allows validation of data before changes" << endl;
    cout << "• Makes code more maintainable and less error-prone" << endl;
    cout << "• Provides a clean interface to interact with objects" << endl;
    cout << endl;
    
    cout << "⚙️ GETTERS AND SETTERS:" << endl;
    cout << "• Getters: Provide READ access to private data" << endl;
    cout << "• Setters: Provide controlled WRITE access to private data" << endl;
    cout << "• Allow validation and processing before data changes" << endl;
    cout << "• Maintain object integrity and consistency" << endl;
    cout << endl;
}

/*
 * MAIN FUNCTION - The program starts here!
 */
int main() {
    cout << "=== ACCESS SPECIFIERS AND ENCAPSULATION ===" << endl;
    cout << "Learn how to protect and control access to your data!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 1: Understanding encapsulation concepts
    // =========================================================
    demonstrateEncapsulationConcepts();
    cout << "===========================================" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 2: Creating objects with encapsulated data
    // =========================================================
    cout << "📊 EXAMPLE 1: Creating Objects with Private Data" << endl;
    cout << "Notice how the constructor can access private members:" << endl;
    cout << endl;
    
    cout << "🚗 Creating first car:" << endl;
    Car car1("Ford", "Mustang", 2013);
    car1.print();
    
    cout << "🚙 Creating second car:" << endl;
    Car car2("BMW", "M5", 2020);
    car2.print();
    
    // =========================================================
    // EXAMPLE 3: Attempting direct access (THIS WOULD FAIL!)
    // =========================================================
    cout << "📊 EXAMPLE 2: Why Private Data is Protected" << endl;
    cout << "Let's see what happens if we try to access private data directly:" << endl;
    cout << endl;
    
    cout << "❌ ATTEMPTING DIRECT ACCESS (This would cause compiler errors):" << endl;
    cout << "   // car1.brand = \"Toyota\";     // ❌ Compiler error!" << endl;
    cout << "   // cout << car1.model;         // ❌ Compiler error!" << endl;
    cout << "   // car1.year = -1000;          // ❌ Compiler error!" << endl;
    cout << "   💡 Private members cannot be accessed directly!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 4: Using getter methods
    // =========================================================
    cout << "📊 EXAMPLE 3: Using Getter Methods (READ Access)" << endl;
    cout << "Instead, we use getter methods to read private data:" << endl;
    cout << endl;
    
    cout << "📖 Reading car1 data using getters:" << endl;
    string brand = car1.getBrand();
    string model = car1.getModel(); 
    int year = car1.getYear();
    
    cout << "📋 Retrieved values:" << endl;
    cout << "   Brand: " << brand << endl;
    cout << "   Model: " << model << endl;
    cout << "   Year: " << year << endl;
    cout << "   💡 Getters provide safe read access to private data!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 5: Using setter methods
    // =========================================================
    cout << "📊 EXAMPLE 4: Using Setter Methods (WRITE Access)" << endl;
    cout << "Let's modify car1 using setter methods:" << endl;
    cout << endl;
    
    cout << "🔄 Modifying car1 data:" << endl;
    cout << "Before changes:" << endl;
    car1.print();
    
    cout << "📝 Using setters to change car1:" << endl;
    car1.setBrand("Chevrolet");
    car1.setModel("Camaro");
    car1.setYear(2021);
    cout << endl;
    
    cout << "After changes:" << endl;
    car1.print();
    
    // =========================================================
    // EXAMPLE 6: Validation in action
    // =========================================================
    cout << "📊 EXAMPLE 5: Data Validation in Setters" << endl;
    cout << "Let's see how setters protect data integrity:" << endl;
    cout << endl;
    
    cout << "🧪 Testing validation with invalid data:" << endl;
    car2.setYear(1800);    // Too old
    cout << endl;
    
    car2.setYear(2050);    // Too far in future
    cout << endl;
    
    car2.setBrand("");     // Empty string
    cout << endl;
    
    car2.setModel("");     // Empty string
    cout << endl;
    
    cout << "📊 Car2 status after invalid attempts:" << endl;
    car2.print();
    cout << "💡 Notice: Invalid changes were rejected!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 7: Valid changes
    // =========================================================
    cout << "📊 EXAMPLE 6: Valid Data Changes" << endl;
    cout << "Now let's make valid changes:" << endl;
    cout << endl;
    
    car2.setYear(2023);           // Valid year
    car2.setBrand("Mercedes");    // Valid brand
    car2.setModel("AMG GT");      // Valid model
    cout << endl;
    
    cout << "📊 Car2 after valid changes:" << endl;
    car2.print();
    
    // =========================================================
    // EXAMPLE 8: Demonstrating encapsulation benefits
    // =========================================================
    cout << "📊 EXAMPLE 7: Benefits of Encapsulation" << endl;
    cout << "See how encapsulation makes our code safer and cleaner:" << endl;
    cout << endl;
    
    cout << "✅ SAFE DATA ACCESS:" << endl;
    cout << "   string info = car1.getCarInfo();  // Safe public method" << endl;
    string info = car1.getCarInfo();
    cout << "   Result: " << info << endl;
    cout << endl;
    
    cout << "✅ CONTROLLED DATA MODIFICATION:" << endl;
    cout << "   All changes go through validation" << endl;
    cout << "   Invalid data is automatically rejected" << endl;
    cout << "   Objects maintain consistent, valid state" << endl;
    cout << endl;
    
    // =========================================================
    // SUMMARY SECTION
    // =========================================================
    cout << "===========================================" << endl;
    cout << "📚 SUMMARY - What You Learned:" << endl;
    cout << "1. private members are only accessible within the class" << endl;
    cout << "2. public members are accessible from anywhere" << endl;
    cout << "3. Encapsulation hides implementation details" << endl;
    cout << "4. Getters provide safe read access to private data" << endl;
    cout << "5. Setters provide controlled write access with validation" << endl;
    cout << "6. Data validation prevents invalid object states" << endl;
    cout << endl;
    
    cout << "🔑 ACCESS CONTROL SYNTAX:" << endl;
    cout << "   class ClassName {" << endl;
    cout << "   private:" << endl;
    cout << "       // Only accessible within this class" << endl;
    cout << "       type privateMember;" << endl;
    cout << "   public:" << endl;
    cout << "       // Accessible from anywhere" << endl;
    cout << "       type publicMember;" << endl;
    cout << "       void setPrivateMember(type value);" << endl;
    cout << "       type getPrivateMember();" << endl;
    cout << "   };" << endl;
    cout << endl;
    
    cout << "💡 ENCAPSULATION BEST PRACTICES:" << endl;
    cout << "• Make member variables private by default" << endl;
    cout << "• Provide public getters for data that needs to be read" << endl;
    cout << "• Provide public setters for data that needs to be modified" << endl;
    cout << "• Always validate data in setter methods" << endl;
    cout << "• Keep private helper methods for internal operations" << endl;
    cout << "• Design clean, minimal public interfaces" << endl;
    cout << endl;
    
    cout << "🎯 REAL-WORLD ANALOGIES:" << endl;
    cout << "• Bank Account: Balance is private, deposit/withdraw are public" << endl;
    cout << "• Car: Engine internals are private, controls are public" << endl;
    cout << "• Phone: Circuitry is private, buttons/screen are public" << endl;
    cout << "• Computer: Hardware is private, keyboard/mouse are public" << endl;
    cout << endl;
    
    cout << "🎉 Excellent! You now understand encapsulation and access control!" << endl;
    cout << "💡 This is a fundamental principle of object-oriented programming!" << endl;
    cout << "🚀 Next: Learn about inheritance and protected access!" << endl;
    
    return 0; // Program completed successfully
}