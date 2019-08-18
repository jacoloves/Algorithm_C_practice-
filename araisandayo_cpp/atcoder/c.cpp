#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <string>

typedef long long ll;

using namespace std;

int main() {
    int A, flg = 0;
    double ans = 0.0, ans2;
    cin >> A;

    vector<int> num(A);

    for (int i = 0; i < A; i++) {
        cin >> num.at(i);
    }

    sort(num.begin(), num.end(), greater<int>() );

    if (A < 3) {
        ans2 = (double)(num.at(0) + num.at(1)) / 2.0;
        cout << ans2 << endl;
        return 0; 
    }

    for (int i = 2; i< A; i++) {
        if (flg == 0 ) {
            ans += (double)(num.at(i -1) + num.at(i)) / 2.0;
            flg = 1;
        } else {
            ans = (double)(ans + num.at(i)) / 2.0;
        }
    }

    ans2 = (double)(num.at(0) + ans) / 2.0;

    cout << ans2 << endl;

    return 0; 
}
