#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);

    for (int i = 0; i < M; i++) {
        cin >> A.at(i) >> B.at(i);
    }
    
    vector<vector<char>> data(N, vector<char>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int cnt = 0;
            for (int k = 0; k < M; k++) {
                if (i == A.at(k) - 1 && j == B.at(k) - 1) {
                    data.at(i).at(j) = 'o';
                    cnt++;
                } else if (j == A.at(k) - 1 && i == B.at(k) - 1) {
                    data.at(i).at(j) = 'x';
                    cnt++;
                }
            }
            if (cnt == 0) {
                data.at(i).at(j) = '-';
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << data.at(i).at(j);
            if (j != N - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

}