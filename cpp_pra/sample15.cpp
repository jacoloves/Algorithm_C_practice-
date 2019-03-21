#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void change(int& n, vector<int>& vec) {
    n = 1;
    vec.at(0) = 1;
}

int main() {
    int x = 5;
    vector<int> v = {10, 10, 10};

    change(x, v);

    cout << x << endl;
    cout << v.at(0) << endl;
}