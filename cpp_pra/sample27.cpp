#include <iostream>

using namespace std;

bool has_divisor(int N, int i) {
    if (i == N) {
        return (N % i == 0);
    }

    if (N % i == 0) {
        return true;
    }

    return has_divisor(N, i + 1);
}

bool is_prime(int N) {
    if (N == 1) {
        return false;
    } else if (N == 2) {
        return true;
    } else {
        return !has_divisor(N, 2);
    }
}

int main() {
    cout << is_prime(1) << endl;
    cout << is_prime(2) << endl;
    cout << is_prime(12) << endl;
    cout << is_prime(13) << endl;
    cout << is_prime(57) << endl;
}