#include <iostream>
using namespace std;

template<typename T> T add(T a, T b) { return a + b; }

int main() {
    int A, B, C; cin >> A >> B;

    C = add(A, B);

    cout << C << endl;
}