#include <iostream>
#include <vector>

using namespace std;

void saiten(vector<vector<int>> &A, int &correct, int &wrong) {
    // 正誤のカウントをする
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (A.at(i-1).at(j-1) == i * j) {
                correct++;
            } else {
                wrong++;
            }

            //最終的には代入する
            A.at(i-1).at(j-1) = i * j;
        }
    }


}

int main() {
    vector<vector<int>> A(9, vector<int>(9));
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> A.at(i).at(j);
        } 
    }

    int correct_count = 0;
    int wrong_count = 0;

    saiten(A, correct_count, wrong_count);

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << A.at(i).at(j);
            if (j < 8) cout << " ";
            else cout << endl;
        } 
    }

    cout << correct_count << endl;
    cout << wrong_count << endl;
}