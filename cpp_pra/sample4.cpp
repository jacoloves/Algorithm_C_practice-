#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    // 数学の点数
    vector<int> vec_math(N);

    // 英語の点数
    vector<int> vec_eng(N);

    // 数学の点数を入力させる
    for (int i = 0; i < vec_math.size(); i++) {
        cin >> vec_math.at(i);
    }

    // 英語の点数を入力させる
    for (int i = 0; i < vec_eng.size(); i++) {
        cin >> vec_eng.at(i);
    }

    //合計点を出力する
    for (int i = 0; i < N; i++) {
        cout << vec_math.at(i) + vec_eng.at(i) << endl;
    }
} 