#include <iostream>

using namespace std;

int main() {
    int a = 3;
    int &b = a;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    b = 4;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

}