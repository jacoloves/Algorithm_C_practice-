#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>

typedef long long ll;

using namespace std;

int N, X[8], Y[8];
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N;
    rep(i, 0, N) cin >> X[i] >> Y[i];

    vector<int> ord;
    rep(i, 0, N) ord.push_back(i);

    long double sm = 0;
    do {
        rep(i, 0, N - 1) {
            int a = ord[i];
            int b = ord[i + 1];

            long double dx = X[a] - X[b];
            long double dy = Y[a] - Y[b];

            sm += sqrt(dx * dx + dy * dy);
        }
    } while (next_permutation(all(ord)));

    rep(i, 0, N) sm /= (i + 1);
    printf("%.10Lf\n", sm);
}
