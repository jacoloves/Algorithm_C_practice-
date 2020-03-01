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
    int a;
    cin >> a;

    vector<int> data(a);

    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i<a; i++) {
        cin >> data[i];
    }

    for (int i = 0; i<a; i++) {
        if (data[i] % 2 == 0) {
            ++cnt1;
            if ((data[i] % 3 == 0) || (data[i] % 5 == 0)) {
                ++cnt2;
            }
        }
    }

    if (cnt1 == cnt2) {
        cout << "APPROVED" << endl;
    } else {
        cout << "DENIED" << endl;
    }

    return 0;
}