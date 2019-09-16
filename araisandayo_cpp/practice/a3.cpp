#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <string.h>

typedef long long ll;

using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;

    int cnt = 0;

    for (int i = 0; i < 3; i++) {
        if (a.at(i) == b.at(i)) {
            cnt++;
        }
    }

    cout << cnt << endl;
}