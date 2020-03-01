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

    vector<int> charge(b);

    for (int i = 0; i < b; i++) {
        cin >> charge[i];
    }

    // ソート後昇順
    sort(charge.begin(), charge.end(), greater<int>());

    bool flg = false;
    for (int i = 0; i < b; i++) {
        a -= charge[i];
        if (a <= 0) {
            flg = true;
            break;
        }
    }

    if (flg) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}