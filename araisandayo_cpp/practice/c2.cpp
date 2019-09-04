#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <string>

typedef long long ll;

using namespace std;

int main() {
    int N;

    cin >> N;

    vector<string> s(N);

    for (int i = 0; i < N; i++) {
        cin >> s[i];
        sort(s[i].begin(), s[i].end());
    }

    sort(s.begin(), s.end());

    ll ans = 0;
    int cnt = 0;

    for (int i = 1; i < N; i++) {
        if (s[i] == s[i - 1]) {
            cnt++;
            ans += cnt;
        } else {
            cnt = 0;
        }
    }

    cout << ans << endl;

    return 0;
}