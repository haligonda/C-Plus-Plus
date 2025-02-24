#include <iostream>
#include <string>
using namespace std;

void one_dim() {

    string letters[2] = {"A", "B"};
    for (string letter : letters) {
        cout << letter << "\n";
    }

}

void two_dim() {

    string letters[2][2] = {
        {"A", "B"},
        {"C", "D"},
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << letters[i][j] << "\t";
        }
        cout << "\n";
    }

}

void three_dim() {

    string letters[2][2][2] = {
        {
            {"A", "B"},
            {"C", "D"},
        },
        {
            {"E", "F"},
            {"J", "K"},
        }
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << letters[i][j][k] << "\t";
            }
            cout << "\n";
        }
        cout << "\n";
    }

}

int main() {

    cout << "One DIM" << endl;
    one_dim();
    cout << "Two DIM" << endl;
    two_dim();
    cout << "Three DIM" << endl;
    three_dim();

}