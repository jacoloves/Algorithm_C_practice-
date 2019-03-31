#include <iostream>

using namespace std;

int sum_range(int a, int b) {
    if (a == b) {
        return a;
    }

    return sum_range(a, b - 1) + b;
}

int main() {
    cout << sum_range(0, 4) << endl;
    cout << sum_range(5, 8) << endl;
}