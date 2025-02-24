#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
        string brand;
        string model;
        int year;
        Car(string x, string y, int z) {
            brand = x;
            model = y;
            year = z;
        }

        void print();
};

void Car::print() {

}

int main() {

    // New Object
    Car firstCar("Range Rover", "Sport", 2025);

    //Print values
    cout << "Brand: " << firstCar.brand << endl;
    cout << "Model: " << firstCar.model << endl;
    cout << "Year: " << firstCar.year << endl << "\n";

    // New Object
    Car carObj2("Ford", "Mustang", 1969);

    //Print values
    cout << "Brand: " << carObj2.brand << endl;
    cout << "Model: " << carObj2.model << endl;
    cout << "Year: " << carObj2.year << endl;

    return 0;


}