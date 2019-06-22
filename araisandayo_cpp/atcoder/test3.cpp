#include <iostream>

using namespace std;

int main() {
    long A, B, C, D;
    long cnt = 0;

    cin >> A >> B >> C >> D;

    for (long i = A; i <= B; i++) {
        if ((i % C != 0) && (i % D != 0)) {
            cnt++;
        }  
    }

    cout << cnt << endl;

    return 0;
}