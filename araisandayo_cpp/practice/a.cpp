#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>

typedef long long ll;

using namespace std;

int main() {
    int a, b, ans1, ans2, ans3, max1;

    cin >> a >> b;

    // 足し算
    ans1 = a + b;

    // 引き算
    ans2 = a - b;

    // 掛け算
    ans3 = a * b;

    max1 = max(ans1, ans2);

    cout << max(max1, ans3) << endl;

    return 0;
}