#include <iostream>
#include <vector>

using namespace std;

int sum(vector<int> scores) {
    int sum_score = 0;

    for (int i = 0; i < scores.size(); i++) {
        sum_score += scores.at(i);
    }

    return sum_score;
}

void output(int sum_a, int sum_b, int sum_c) {
    cout << (sum_a * sum_b * sum_c) << endl;
}

/*
　ここから先は変更しない
*/

vector<int> input(int N) {
    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec.at(i);
    }
    return vec;
}

int main() {
    int N;
    cin >> N;

    vector<int> A, B, C;
    A = input(N);
    B = input(N);
    C = input(N);

    output(sum(A), sum(B), sum(C));
}