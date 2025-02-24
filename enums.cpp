#include <iostream>
using namespace std;

void set_val() {
    enum Level {
        LOW = 25,
        MID = 50,
        HIGH = 75
    };

    enum Level low = LOW;
    enum Level mid = MID;
    enum Level high = HIGH;

    cout << low << endl;
    cout << mid << endl;
    cout << high << endl;
}

void enumerate() {

    enum start {
        First = 4,
        Second, // 5
        Third   // 6
    };

}

int main() {

    enum Level {
        LOW,
        MID,
        HIGH
    };

    enum Level zero = LOW;
    enum Level one = MID;
    enum Level two = HIGH;

    cout << zero << endl;
    cout << one << endl;
    cout << two << endl;


    set_val();
}