#include <iostream>
#include <string>
using namespace std;

int main() {

    class Car {
        public:
            string brand;
            string model;
            int year;

            int speed(int maxSpeed) {
                return maxSpeed;
            }
    };

    Car car1;
    car1.brand = "Range Rover";
    car1.model = "";
    car1.year = 2025;
    int speed = car1.speed(250);

    cout << car1.brand << " " << car1.model << " " << car1.year << endl; 
    cout << "Speed: " << speed << endl;

}