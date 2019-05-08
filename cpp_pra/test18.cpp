#include <iostream>

using namespace std;

int main() {
    int A, B, T, ans;
    cin >> A >> B >> T;

    double C = (double)T + 0.5;

    ans = C / A;

    if (ans == 0) {
        cout << 0 << endl;
    } else {
        cout << B * ans << endl;
    }
}