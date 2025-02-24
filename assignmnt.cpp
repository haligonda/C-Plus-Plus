#include <iostream>
using namespace std;

const int A = 2;

void add_assign(int x) {

    x = x + A;
    cout << "Add Assign (x = x + A): " << x << endl;

}

void sub_assign(int x) {

    x = x - A;
    cout << "Sub Assign (x = x - A): " << x << endl;

}

void div_assign(int x) {

    x = x / A;
    cout << "Div Assign (x = x / A): " << x << endl;

}

void mul_assign(int x) {
    
    x = x * A;
    cout << "Mul Assign (x = x * A): " << x << endl;

}

void mod_assign(int x) {

    x = x % A;
    cout << "Mod Assign (x = x % A): " << x << endl;

}

void and_assign(int x) {

    x = x & A;
    cout << "And Assign (x = x & A): " << x << endl;

}

void or_assign(int x) {

    x = x | A;
    cout << "Or Assign (x = x | A): " << x << endl;

}

void xor_assign(int x) {

    x = x ^ A;
    cout << "XOR Assign (x = x ^ A): " << x << endl;

}

void right_assign(int x) {

    x = x >> A;
    cout << "Right Shift Assign (x = x >> A): " << x << endl;

}

void left_assign(int x) {

    x = x << A;
    cout << "Left Shift Assign (x = x << A): " << x << endl;

}

int main() {

    // value 10 is assigned to variable x
    int x = 10;
    cout << "Value x: " << x << endl;
    cout << "Const A: " << A << endl;

    add_assign(x);
    sub_assign(x);
    div_assign(x);
    mul_assign(x);
    mod_assign(x);
    and_assign(x);
    or_assign(x);
    xor_assign(x);
    right_assign(x);
    left_assign(x);

}