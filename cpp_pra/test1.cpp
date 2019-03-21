#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, ave, sum;
    cin >> N;

    vector<int> vec(N);

    for (int i = 0; i < vec.size(); i++) {
        cin >> vec.at(i);
    }

    sum = 0;

    for (int i = 0; i < vec.size(); i++) {
        sum += vec.at(i);
    }

    ave = sum / N;

    for (int i = 0; i < vec.size(); i++) {
        if (vec.at(i) > ave) {
            cout << vec.at(i) - ave << endl;
        } else {
            cout << ave - vec.at(i) << endl;
        }
    }
}