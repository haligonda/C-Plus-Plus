/*
 * STRUCTURES IN C++ 🏗️
 * 
 * This program teaches you:
 * 1. What structures are and why they're useful
 * 2. How to create and use structures
 * 3. The difference between structures and classes
 * 4. Anonymous structures vs named structures
 * 5. How structures group related data together
 * 
 * Key Concepts:
 * - struct: A way to group related variables together
 * - Member variables: Variables inside a structure
 * - Dot notation: How to access structure members (structName.member)
 * - Anonymous struct: Structure without a name (used once)
 * - Named struct: Structure with a name (can be reused)
 * 
 * Think of structures like a form or record:
 * - A person has name, age, address
 * - A car has brand, model, year
 * - Instead of separate variables, group them together!
 */

#include <iostream>
#include <string>
using namespace std;

/*
 * FUNCTION 1: demonstrateNamedStruct
 * Shows how to create and use named structures
 */
void demonstrateNamedStruct() {
    cout << "📊 EXAMPLE: Named Structures" << endl;
    cout << "Let's create a structure to represent cars:" << endl;
    cout << endl;
    
    // Define a structure - like creating a template/blueprint
    struct Car {
        string brand;   // Member variable for car brand
        string model;   // Member variable for car model  
        int year;       // Member variable for car year
    };
    
    cout << "🏗️ Structure definition:" << endl;
    cout << "   struct Car {" << endl;
    cout << "       string brand;" << endl;
    cout << "       string model;" << endl;
    cout << "       int year;" << endl;
    cout << "   };" << endl;
    cout << "   💡 This creates a blueprint for Car objects" << endl;
    cout << endl;
    
    // Create first car using the structure
    cout << "🚗 Creating first car:" << endl;
    Car sportsCar;  // Create a Car variable
    
    // Assign values using dot notation
    sportsCar.brand = "Shelby";
    sportsCar.model = "Mustang";
    sportsCar.year = 2013;
    
    cout << "   Car sportsCar;" << endl;
    cout << "   sportsCar.brand = \"Shelby\";" << endl;
    cout << "   sportsCar.model = \"Mustang\";" << endl;
    cout << "   sportsCar.year = 2013;" << endl;
    cout << "   💡 Use dot (.) to access structure members" << endl;
    cout << endl;
    
    cout << "🔍 First car details:" << endl;
    cout << "   Brand: " << sportsCar.brand << endl;
    cout << "   Model: " << sportsCar.model << endl;
    cout << "   Year: " << sportsCar.year << endl;
    cout << "   Full info: " << sportsCar.brand << " " << sportsCar.model << " " << sportsCar.year << endl;
    cout << endl;
    
    // Create second car
    cout << "🚙 Creating second car:" << endl;
    Car luxuryCar;
    luxuryCar.brand = "Range Rover";
    luxuryCar.model = "Sport";
    luxuryCar.year = 2025;
    
    cout << "   Car luxuryCar;" << endl;
    cout << "   luxuryCar.brand = \"Range Rover\";" << endl;
    cout << "   luxuryCar.model = \"Sport\";" << endl;
    cout << "   luxuryCar.year = 2025;" << endl;
    cout << endl;
    
    cout << "🔍 Second car details:" << endl;
    cout << "   Brand: " << luxuryCar.brand << endl;
    cout << "   Model: " << luxuryCar.model << endl;
    cout << "   Year: " << luxuryCar.year << endl;
    cout << "   Full info: " << luxuryCar.brand << " " << luxuryCar.model << " " << luxuryCar.year << endl;
    cout << endl;
    
    cout << "✅ Named structure demonstration complete!" << endl;
    cout << "💡 Notice: We used the same Car structure to create different cars!" << endl;
    cout << endl;
}

/*
 * FUNCTION 2: demonstrateAnonymousStruct
 * Shows how anonymous structures work
 */
void demonstrateAnonymousStruct() {
    cout << "📊 EXAMPLE: Anonymous Structure" << endl;
    cout << "Sometimes you only need a structure once:" << endl;
    cout << endl;
    
    // Anonymous structure - no name, used immediately
    struct {
        string name;
        int age;
    } person;  // 'person' is the variable name, not the struct name
    
    cout << "🏗️ Anonymous structure definition:" << endl;
    cout << "   struct {" << endl;
    cout << "       string name;" << endl;
    cout << "       int age;" << endl;
    cout << "   } person;  // ← 'person' is the variable name" << endl;
    cout << "   💡 No struct name - used immediately" << endl;
    cout << endl;
    
    // Assign values
    person.name = "Pravin";
    person.age = 23;
    
    cout << "📝 Assigning values:" << endl;
    cout << "   person.name = \"Pravin\";" << endl;
    cout << "   person.age = 23;" << endl;
    cout << endl;
    
    cout << "🔍 Person details:" << endl;
    cout << "   Name: " << person.name << endl;
    cout << "   Age: " << person.age << endl;
    cout << endl;
    
    cout << "✅ Anonymous structure demonstration complete!" << endl;
    cout << "💡 Use anonymous structs when you only need one instance" << endl;
    cout << endl;
}

/*
 * FUNCTION 3: demonstrateStructureAdvantages
 * Shows why structures are better than separate variables
 */
void demonstrateStructureAdvantages() {
    cout << "📊 EXAMPLE: Why Use Structures?" << endl;
    cout << "Compare these two approaches:" << endl;
    cout << endl;
    
    cout << "❌ WITHOUT STRUCTURES (messy):" << endl;
    string studentName1 = "Alice";
    int studentAge1 = 20;
    string studentMajor1 = "Computer Science";
    
    string studentName2 = "Bob";
    int studentAge2 = 21;
    string studentMajor2 = "Mathematics";
    
    cout << "   string studentName1 = \"Alice\";" << endl;
    cout << "   int studentAge1 = 20;" << endl;
    cout << "   string studentMajor1 = \"Computer Science\";" << endl;
    cout << "   string studentName2 = \"Bob\";" << endl;
    cout << "   int studentAge2 = 21;" << endl;
    cout << "   string studentMajor2 = \"Mathematics\";" << endl;
    cout << "   💢 Too many variables! Hard to manage!" << endl;
    cout << endl;
    
    cout << "✅ WITH STRUCTURES (organized):" << endl;
    
    // Define student structure
    struct Student {
        string name;
        int age;
        string major;
    };
    
    Student student1 = {"Alice", 20, "Computer Science"};
    Student student2 = {"Bob", 21, "Mathematics"};
    
    cout << "   struct Student {" << endl;
    cout << "       string name; int age; string major;" << endl;
    cout << "   };" << endl;
    cout << "   Student student1 = {\"Alice\", 20, \"Computer Science\"};" << endl;
    cout << "   Student student2 = {\"Bob\", 21, \"Mathematics\"};" << endl;
    cout << "   ✨ Clean, organized, and easy to understand!" << endl;
    cout << endl;
    
    cout << "🔍 Structure advantages in action:" << endl;
    cout << "   Student 1: " << student1.name << ", age " << student1.age << ", " << student1.major << endl;
    cout << "   Student 2: " << student2.name << ", age " << student2.age << ", " << student2.major << endl;
    cout << endl;
}

/*
 * FUNCTION 4: demonstrateStructVsClass
 * Explains the difference between struct and class
 */
void demonstrateStructVsClass() {
    cout << "📊 EXAMPLE: Struct vs Class" << endl;
    cout << "What's the difference between struct and class?" << endl;
    cout << endl;
    
    cout << "🏗️ STRUCT characteristics:" << endl;
    cout << "• Members are PUBLIC by default" << endl;
    cout << "• Traditionally used for simple data containers" << endl;
    cout << "• Comes from C programming language" << endl;
    cout << "• Good for grouping related data" << endl;
    cout << endl;
    
    cout << "🏭 CLASS characteristics:" << endl;
    cout << "• Members are PRIVATE by default" << endl;
    cout << "• Used for complex objects with methods" << endl;
    cout << "• Object-oriented programming concept" << endl;
    cout << "• Good for data + behavior together" << endl;
    cout << endl;
    
    cout << "🤝 SIMILARITY:" << endl;
    cout << "• In C++, struct and class are almost identical!" << endl;
    cout << "• Both can have constructors, methods, inheritance, etc." << endl;
    cout << "• The only difference is default access level" << endl;
    cout << endl;
    
    cout << "💡 WHEN TO USE WHICH:" << endl;
    cout << "• Use STRUCT for simple data containers" << endl;
    cout << "   Example: Point, Rectangle, Person info" << endl;
    cout << "• Use CLASS for complex objects with behavior" << endl;
    cout << "   Example: BankAccount, Car with methods, Database" << endl;
    cout << endl;
}

/*
 * MAIN FUNCTION - The program starts here!
 */
int main() {
    cout << "=== STRUCTURES IN C++ ===" << endl;
    cout << "Learn how to group related data together!" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 1: Anonymous structure demo
    // =========================================================
    demonstrateAnonymousStruct();
    cout << "===========================================" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 2: Named structure demo
    // =========================================================
    demonstrateNamedStruct();
    cout << "===========================================" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 3: Structure advantages
    // =========================================================
    demonstrateStructureAdvantages();
    cout << "===========================================" << endl;
    cout << endl;
    
    // =========================================================
    // EXAMPLE 4: Struct vs Class explanation
    // =========================================================
    demonstrateStructVsClass();
    cout << "===========================================" << endl;
    cout << endl;
    
    // =========================================================
    // SUMMARY SECTION
    // =========================================================
    cout << "📚 SUMMARY - What You Learned:" << endl;
    cout << "1. Structures group related variables together" << endl;
    cout << "2. Use dot notation (.) to access members" << endl;
    cout << "3. Named structs can be reused multiple times" << endl;
    cout << "4. Anonymous structs are used once immediately" << endl;
    cout << "5. Structs make code more organized and readable" << endl;
    cout << endl;
    
    cout << "🔑 STRUCTURE SYNTAX:" << endl;
    cout << "• Definition:  struct Name { type member1; type member2; };" << endl;
    cout << "• Creation:    struct Name variable;" << endl;
    cout << "• Access:      variable.member1 = value;" << endl;
    cout << "• Initialize:  struct Name var = {val1, val2};" << endl;
    cout << endl;
    
    cout << "💡 STRUCTURE BENEFITS:" << endl;
    cout << "• Group related data logically" << endl;
    cout << "• Reduce the number of separate variables" << endl;
    cout << "• Make code more readable and maintainable" << endl;
    cout << "• Easy to pass multiple values to functions" << endl;
    cout << "• Foundation for object-oriented programming" << endl;
    cout << endl;
    
    cout << "🎯 COMMON USE CASES:" << endl;
    cout << "• Coordinates: struct Point { int x, y; }" << endl;
    cout << "• Person info: struct Person { string name; int age; }" << endl;
    cout << "• Database records: struct Record { id, name, date; }" << endl;
    cout << "• Game entities: struct Player { health, score, level; }" << endl;
    cout << endl;
    
    cout << "⚡ PERFORMANCE NOTE:" << endl;
    cout << "• Structures are very efficient - no overhead!" << endl;
    cout << "• Members are stored consecutively in memory" << endl;
    cout << "• Accessing members is as fast as regular variables" << endl;
    cout << endl;
    
    cout << "🎉 Fantastic! You now understand structures in C++!" << endl;
    cout << "💡 Next step: Learn about classes and object-oriented programming!" << endl;
    
    return 0; // Program completed successfully
}