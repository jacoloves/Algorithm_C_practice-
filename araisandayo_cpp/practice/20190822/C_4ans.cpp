#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>

typedef long long ll;

using namespace std;

int main() {
  int N;
  cin >> N;
  ll A[N], B[N];
  for (int i = 0; i <= N; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < N; i++) {
    cin >> B[i];
  }
  ll s = 0;
  for (int i = 0; i < N; i++) {
    s += min(A[i], B[i]);
    B[i] -= min(A[i], B[i]);
    A[i] -= min(A[i], B[i]);
    s += min(A[i + 1], B[i]);
    A[i+1] -= min(A[i + 1], B[i]);
  }
  cout << s << "\n";
  return 0;
}
