#include <iostream>
#include <string>
using namespace std;

void named_struct() {

    struct car {
        string brand;
        string model;
        int year;
    };

    car car1;
    car1.brand = "Shelby";
    car1.model = "Mustang";
    car1.year = 2013;

    cout << car1.brand << " " << car1.model << " " << car1.year << endl;

    car car2;
    car2.brand = "Range Rover";
    car2.model = "Sport";
    car2.year = 2025;

    cout << car2.brand << " " << car2.model << " " << car2.year << endl;


}

int main() {

    struct {
        string name;
        int age;
    } person;

    person.name = "Pravin";
    person.age = 23;

    cout << person.name << endl;
    cout << person.age << endl;

    named_struct();

}