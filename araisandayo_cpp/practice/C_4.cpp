#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>

typedef long long ll;

using namespace std;

int main() {
    int N, A, B, i, j;
    ll cnt = 0;
    cin >> N;

    A = N + 1;
    B = N;

    vector<ll> data(A);
    vector<ll> data2(B);

    for (int i = 0; i < A; i++) {
        cin >> data.at(i);
    }

    for (int i = 0; i < B; i++) {
        cin >> data2.at(i);
    }
    
    i = 0;
    j = 0;
    // 比較する
    while (1) {
        if (data.at(i) > data2.at(j)) {
            data.at(i) = abs(data2.at(j) - data.at(i));
            cnt += data2.at(j);

            if (i > j && (j + 1 < N) ) {
                j++;
            }  else {
                // 要素数を超えていないか
                if ((j + 1 >= N) || (i + 1 >= N + 1)) {
                    break;
                }
                j++;
                i++;
            }
        } else if (data.at(i) == data2.at(j)) {
            // 要素数を超えていないか
            if ((j + 1 >= N) || (i + 1 >= N + 1)) {
                break;
            }
            j++;
            i++;
        } else {
            data2.at(j) = abs(data.at(i) - data2.at(j));
            cnt += data.at(i);
            if (i == j) {
                i++;
            } else {
                // 要素数を超えていないか
                if ((j + 1 >= N) || (i + 1 >= N + 1)) {
                    break;
                }
                j++;
                i++;
            }
        }
    }

    cout << cnt << endl;

    return 0;

}