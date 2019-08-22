#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>

typedef long long ll;

using namespace std;

int main() {
    int N, cnt = 0, k_cnt = 1;

    cin >> N;

    while(1) {
        if (N / 10 == 0) {
            break;
        }
        k_cnt++;

    if (k_cnt == 1) {
        for (int i = 1; i <= 9; i++) {
            cnt++;
        }
    } else if (k_cnt == 3) {
        for (int i = 100; i <= 999; i++) {
            cnt++;
        }
    } if (k_cnt == 5) {
        for (int i = 10000; i <= 99999; i++) {
            cnt++;
        }
    }

    }

    if (k_cnt == 1) {
        for (int i = 1; i <= 9; i++) {
            cnt++;
        }
    } else if (k_cnt == 3) {
        for (int i = 100; i <= 999; i++) {
            cnt++;
        }
    } if (k_cnt == 5) {
        for (int i = 10000; i <= 99999; i++) {
            cnt++;
        }
    }

    return 0;
}