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
    map<string, int> m;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        m[s] += 1;
    }

    int max = 0;
    for (const auto& x : m) {
        int a = x.second;
        if (a > max)
            max = a;
    }

    for (auto i = m.begin(); i != m.end(); i++) {
        if (i->second == max)
            cout << i->first << endl;
    }

    return 0;
}