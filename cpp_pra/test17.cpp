#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, max;
    int cnt = 0;

    cin >> N;

    vector<int> data(N);

    for (int i = 0; i < N; i++) {
        cin >> data.at(i);
    }

    for (int i = 0; i < data.size(); i++) {
        if (i == 0) {
            max = data.at(i);
            cnt++;
        }

        if (i != 0 && max <= data.at(i)) {
            max = data.at(i);
            cnt++;
        }
    }

    cout << cnt << endl;
}