#include <iostream>
using namespace std;

int main() {

    int arr[10] = {0, 1, 2, 3, 4, 5, 5, 6, 6, 9};

    for (int i : arr) {
        cout << i << "\n";
    }

    string cars[5] = {"Shelby", "Ford", "BMW", "Range Rover", "Volvo"};

    for (string car : cars) {
        cout << car << "\n";
    }

    cout << sizeof(arr)/4 << endl;

}