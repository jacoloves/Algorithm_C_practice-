#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>

typedef long long ll;

using namespace std;

int main() {
    int N, N2, cnt = 0, k_cnt = 1;

    cin >> N;

    N2 = N;

    while(1) {
        if (N2 < 10) {
            for (int i = 1; i <= N2; i++) {
                cnt++;
            }
            break;
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

        if (N / 10 == 0) {
            break;
        }
        N = N / 10;

        k_cnt++;
    }

    cout << cnt << endl;

    return 0;
}