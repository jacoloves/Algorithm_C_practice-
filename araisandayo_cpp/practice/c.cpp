#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>

typedef long long ll;

using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;

    vector<ll> enemy(a);

    for (int i = 0; i < a; i++) {
        cin >> enemy[i];
    }

    sort(enemy.begin(), enemy.end(), greater<ll>());

    ll cnt = 0;

    for (int i = 0; i < a; i++) {
        if (b == 0) {
            cnt += enemy[i];
        } else {
            b--;
        }
    }

    cout << cnt << endl;

    return 0;
}