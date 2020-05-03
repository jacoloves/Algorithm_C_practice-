#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <map>
typedef long long ll;

using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;

    vector<int> v(a);

    for (int i = 0; i < a; i++) {
        cin >> v[i];
    }

    int sum = 0;
    for (int i = 0; i < a; i++) {
        sum += v[i];
    }

    sum = sum / (4*b);

    sort(v.begin(), v.end(), greater<int>());
    bool flg = true;

    for (int i = 0; i < b; i++) {
        if (v[i] < sum)
            flg = false;
    }

    if (flg)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}