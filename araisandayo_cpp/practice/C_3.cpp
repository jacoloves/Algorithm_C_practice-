#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

typedef pair<int, int> P;

int main()
{
    int N;
    cin >> N;

    vector<int> data(N);
    vector<int> data2(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b.begin(), b.end(), greater<int>());

    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) {
            cout << b[1] << endl; 
        } else {
            cout << b[0] << endl;
        }
    }

}

