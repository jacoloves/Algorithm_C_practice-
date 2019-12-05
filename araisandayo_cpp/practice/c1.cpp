#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>

typedef long long ll;

using namespace std;

int a[8];
bool flag[8];
double ans = 0;
double m;
double x[8], y[8];
int N;
 
int fact(int n) {
    if (n == 1) return 1;
    return n * fact(n - 1);
}
 
double norm(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
 
void perm(int n) {
    if (n == N) {
        for (int i = 0; i < N - 1; i++) {
            ans += norm(x[a[i]], y[a[i]], x[a[i + 1]], y[a[i + 1]]) / m;
        }
        return;
    }
    for (int i = 0; i < N; i++) {
        if (flag[i]) continue;
        a[n] = i;
        flag[i] = true;
        perm(n + 1);
        flag[i] = false;
    }
}
 
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        flag[i] = false;
    }
    m = fact(N);
    perm(0);
    printf("%0.9f\n", ans);
    return 0;
}