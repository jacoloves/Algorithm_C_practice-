#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;
    while (N > 0) {
        if (N % 2 > 0) {
            break;
        }
        N = N / 2;
        count++;
    }
    cout << count << endl;
}