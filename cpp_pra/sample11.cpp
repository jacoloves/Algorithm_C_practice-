#include <iostream>

using namespace std;

void hello(string text) {
    cout << "Hello, " << text << endl;
    return;
}

int main() {
    hello("Tom");
    hello("C++");
}