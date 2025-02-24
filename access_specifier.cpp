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
    cout << "==========================" << endl;
    cout << "|      Car Details       |" << endl;
    cout << "==========================" << endl;
    cout << "     Brand:  " << brand << endl;
    cout << "     Model:  " << model << endl;
    cout << "     Year:   " << year << endl;
    cout << "==========================" << endl << endl;

}

int main() {

    Car carObj1("Ford", "Mustang", 2013);
    carObj1.print();

    Car carObj2("BMW", "M5", 2020);
    carObj2.print();

    return 0;

}