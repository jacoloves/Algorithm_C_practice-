#include <iostream>

using namespace std;

int sum(int n) {
    if (n == 0) {
        return 0;
    }

    int s = sum(n - 1);
    return s + n;
}

int main() {
    cout << sum(2) << endl;
    cout << sum(3) << endl;
    cout << sum(10) << endl;
}