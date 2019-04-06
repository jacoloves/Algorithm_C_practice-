#include <iostream>

using namespace std;

int main() {
  int N;
  double M;

  cin >> N;
  M = (double)N / 1000;

  if (M < 0.1) {
    cout << "00" << endl;
  } else if (0.1 <= M && M <= 5.0) {
    if (M * 10 < 10) {
      cout << "0" << M * 10 << endl;
    } else {
      cout << M * 10 << endl;
    }
  } else if (6.0 <= M && M <= 30.0) {
    cout << M + 50 << endl;
  } else if (35.0 <= M && M <= 70.0) {
    cout << (M - 30) / 5 + 80 << endl;
  } else if (70.0 < M) {
    cout << 89 << endl;
  }
}
