#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
        string brand;
        string model;
        int year;
        Car(string x, string y, int z);

        void print();
};

Car::Car(string x, string y, int z) {
    brand = x;
    model = y;
    year = z;
}

void Car::print() {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl << "\n";
}

int main() {

    // New Object
    Car firstCar("Range Rover", "Sport", 2025);

    //Print values
    firstCar.print();

    // New Object
    Car carObj2("Ford", "Mustang", 1969);

    //Print values
    carObj2.print();

    return 0;

}