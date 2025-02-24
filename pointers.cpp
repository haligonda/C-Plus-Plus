#include <string>
#include <iostream>
using namespace std;

int main() {

    string name = "Pravin";
    cout << name << endl;

    
    string* myName = &name;

    //pointer address
    cout << myName << endl; 
    
    //Dereferencing the pointer
    cout << *myName << endl;

    //Another way to Dereference the pointer
    cout << *(myName) << endl; //equals to above
    
    //Equals to 'name'
    cout << *(&name) << endl; 



}