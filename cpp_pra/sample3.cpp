#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec(3);

    cin >> vec.at(0) >> vec.at(1) >> vec.at(2);

    cout << vec.at(0) + vec.at(1) + vec.at(2) << endl;
}