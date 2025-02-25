#include <iostream>
#include <string>
using namespace std;

class Car {
    protected:
        string brand;
        string model;
        int year;

    public:
        Car(string x, string y, int z);

        void print();

        //Getter methods
        string getBrand();
        string getModel();
        int getYear();
        
        //Setter methods
        void setBrand(string x);
        void setModel(string y);
        void setYear(int z);
};

Car::Car(string x, string y, int z) {
    brand = x;
    model = y;
    year = z;
}

void Car::print() {
    cout << "=========================" << endl;
    cout << "       Car Details       " << endl;
    cout << "=========================" << endl;
    cout << "    Brand: " << brand << endl;
    cout << "    Model: " << model << endl;
    cout << "    Year:  " << year << endl;
    cout << "=========================" << endl << endl;

}

//Getter methods
string Car::getBrand() {
    return brand;
}

string Car::getModel() {
    return model;
}

int Car::getYear() {
    return year;
}

void Car::setBrand(string x) {
    brand = x;
}

void Car::setModel(string y) {
    model = y;
}

void Car::setYear(int z) {
    year = z;
}

class SportsCar : public Car {
    public:
    SportsCar(string x, string y, int z) : Car(x, y, z) {}

    void printSportsCarDetails() {
        cout << "=========================" << endl;
        cout << "   Sports Car Details    " << endl;
        cout << "=========================" << endl;
        cout << "    Brand: " << brand << endl;
        cout << "    Model: " << model << endl;
        cout << "    Year:  " << year << endl;
        cout << "=========================" << endl << endl;

    }
};

int main() {

    Car carObj1("Ford", "Mustang", 2013);
    carObj1.print();

    Car carObj2("BMW", "M5", 2020);
    carObj2.print();

    carObj1.setBrand("Chevrolet");
    carObj1.setModel("Camaro");
    carObj1.setYear(2021);
    carObj1.print();

    SportsCar sportsCarObj("Ferrari", "488", 2022);
    sportsCarObj.printSportsCarDetails();
}