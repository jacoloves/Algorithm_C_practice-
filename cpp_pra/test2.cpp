#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    vector<int> vec = {A, B, C};

    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
}