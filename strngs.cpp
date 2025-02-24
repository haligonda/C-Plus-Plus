#include <iostream>
#include <string>
using namespace std;

void name() {

    string fname = "\"Pravin\"";
    string lname = "\"Haligonda\"";
    string fullname = fname.append(lname);
    cout << fullname << endl;

}



int main() {

    name();
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << txt.length() << endl;
    cout << txt.size() << endl;
    
}