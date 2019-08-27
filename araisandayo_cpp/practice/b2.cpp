#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>

typedef long long ll;

using namespace std;

int main() {
    int A, B, ans;

    cin >> A >> B;

    ans = A - 1;

    for (int i = B - ans; i <= B + ans; i++) {
        cout << i;
        cout << " ";
    }

    cout << endl;

    return 0;
}