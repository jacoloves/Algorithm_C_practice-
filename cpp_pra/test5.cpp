#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, S;
    cin >> N >> S;
    vector<int> A(N), B(N);

    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    for (int i = 0; i < N; i++) {
        cin >> B.at(i);
    }

    int cnt = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (A.at(i) + B.at(j) == S) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}