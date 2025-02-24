#include <string>
#include <iostream>
using namespace std;

void modifyStr(string &s) { //Pass by reference

    s += "world";

}

void swapNums(int &x, int &y) { //Pass by reference

    int z = x;
    x = y;
    y = z;

}

void increOne(int &x) {
    x = x + 1;
}

void reverseString(string &s) {

    int len = s.length();

    for (int i = 0; i < len / 2; ++i) {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
    cout << "Reversed String: " << s << endl;
}

int main() {

    int a = 3;
    int b = 6;
    cout << "A: " << a << "\t" << "B: " << b << endl;

    swapNums(a, b);

    cout << "A: " << a << "\t" << "B: " << b << endl;

    string greet = "hello, ";
    modifyStr(greet);
    cout << greet << endl;

    cout << "A: " << a << endl;
    increOne(a);
    cout << "A: " << a << endl;

    string s = "Stop Everything";
    cout << "String: " << s << endl;
    reverseString(s);
    cout << "String: " << s << endl;


}