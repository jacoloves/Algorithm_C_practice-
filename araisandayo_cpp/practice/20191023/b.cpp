#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>

typedef long long ll;

using namespace std;

int main() {
    int N, cnt = 0, i;

    cin >> N;

    for (i = 1; i <= N; i++) {
        if (i >= 10 && i <= 99) {
            continue;
        } else if (i >= 1000 && i <= 9999) {
            continue;
        } else if (i >= 100000 && i <= 999999) {
            continue;
        } 

        cnt++;

    }

    cout << cnt << endl;

    return 0;
}