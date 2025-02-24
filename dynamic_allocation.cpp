#include <string>
#include <iostream>
using namespace std;

int main() {

    string* dynamicName = new string("Dynamic Memory Allocation");

    // Prints Memory Address to Console.
    cout << dynamicName << endl;

    // Dereference the dynamically allocated pointer to get the value.
    cout << *dynamicName << endl;

    // Clean up dynamically allocated memory
    delete dynamicName;

    return 0;

}