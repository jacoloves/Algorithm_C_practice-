#include <iostream>

using namespace std;

typedef long long ll;
int main()
{
    ll L, R;
    cin >> L >> R;

    if (R - L > 3000) {
        cout  << 0 << endl;
    } else {
        ll res = 2018;
        for (ll i = L; i < R; ++i) {
            for (ll j = i+1; j <= R; ++j) {
                res = min(res, (i * j) % 2019);
            }
        }
        cout << res  << endl;
    }
}