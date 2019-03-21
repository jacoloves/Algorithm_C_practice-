#include <iostream>

using namespace std;

int my_min(int x, int y) {

    if (x < y) {
        return x;
    }
    else {
        return y;
    }
}

int main() {
    int answer = my_min(10, 5);
    cout << answer << endl;
}