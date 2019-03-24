#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a = {1, 3, 1, 5};
    for (int x : a) {
        cout << x << endl;
    }
}