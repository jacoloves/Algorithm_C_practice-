#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
    int N, L;
    int num = 0;
    int min = 0;
    int sum = 0;
    
    cin >> N >> L;

    vector<int> data(N);
    vector<int> data2(N);

    for (int i = 0; i < N; i++) {
        num = i + 1;
        data.at(i) = abs(L + num - 1);
        data2.at(i) = L + num - 1;
    }

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            min = data.at(0);
        }

        if (min > data.at(i)) {
            min = data.at(i);
        }
    }

    for (int i = 0; i < N; i++) {
        if (abs(data2.at(i)) != min) {
            sum += data2.at(i);
        } 
    }

    cout << sum << endl;

    return 0;
}