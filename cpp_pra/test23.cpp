#include <iostream>
#include <vector>

using namespace std;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }

int GCD(int a, int b) {return b ? GCD(b, a%b) : a; }

int main() {
    int N; cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    vector<int> left(N+1, 0), right(N+1, 0);

    for (int i = 0; i < N; ++i) left[i+1] = GCD(left[i], a[i]);
    for (int i = N - 1; i >= 0; --i) right[i] = GCD(right[i+1], a[i]);

    int res = 0;
    for (int i = 0; i < N; i++) {
          int l = left[i];
          int r = right[i+1];
          chmax(res, GCD(l, r));
    }
    cout << res << endl;
}