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
    int a;
    cin >> a;

    vector<ll> data(a);

    for (int i = 0; i < a; i++) {
        cin >> data[i];
    }

    sort(data.begin(), data.end(), greater<ll>());

    int flg = 0;

    for (int i = 0; i < a-1; i++) {
        if (data[i] == data[i+1]) {
            flg = 1;
            break;
        }
    }

    if (flg == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }



    return 0;
}