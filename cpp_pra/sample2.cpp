#include <iostream>
#include <vector>

using namespace std;

int main() {
    string str;

    str = "abcd";

    cout << str.at(0) << endl;

    cout << str.size() << endl;

    vector<int> vec;

    vec = { 25, 100, 64 };

    cout << vec.at(0) << endl;

    cout << vec.size() << endl;


}