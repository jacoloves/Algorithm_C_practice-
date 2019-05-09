#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N; cin >> N;

    int sum = 0;

    vector<int> data1(N);
    vector<int> data2(N);

    // 入力
    for (int i = 0; i < N; i++) {
        cin >> data1.at(i);
    }

    for (int i = 0; i < N; i++) {
        cin >> data2.at(i);
    }

    for (int i = 0; i < N; i++) {
        if (data1.at(i) > data2.at(i)) {
            sum += data1.at(i) - data2.at(i);
        }
    }

    cout << sum << endl;
}