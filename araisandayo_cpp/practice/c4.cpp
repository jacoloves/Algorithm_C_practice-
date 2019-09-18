#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {

    int N;
    int ans = 0;
    int val = 0;

    cin >> N;

    vector<int> data(N);

    for (int i = 0; i < N; i++) {
        cin >> data.at(i);
    }

    reverse(data.begin(), data.end());
    

    for (int i = 1; i < N; i++) {
        if (data[i-1] <= data[i]) val++;
        else val = 0;
        ans = max(ans, val);
    }


    cout << ans << endl;

    return 0;
}
