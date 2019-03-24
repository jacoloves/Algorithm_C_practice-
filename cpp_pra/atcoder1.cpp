#include <iostream>

using namespace std;

int main() {
    char N;
    cin >> N;

    if (N == 'A') {
        cout << "T" << endl;
    } else if (N == 'T') {
        cout << "A" << endl;
    } else if (N == 'C') {
        cout << "G" << endl;
    } else if (N == 'G') {
        cout << "C" << endl;
    }
}