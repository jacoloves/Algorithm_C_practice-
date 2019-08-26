#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>

typedef long long ll;

using namespace std;

int main() {
    int N, flg = 0;
    cin >> N;

    vector<int> data(N);

    // 代入
    for (int i = 0; i < N; i++) {
        cin >> data.at(i);
    }
    
    // 比較
    for (int i = N - 1; i >= 1; i--) {
        // 比較して単調非減少でない場合
        if (data.at(i-1) > data.at(i)) {
            data.at(i-1) -= 1;
            // i-1番目の数字を-1しても単調非減少でない場合
            if (data.at(i-1) > data.at(i)) {
                flg = 1;
                break;
            }
        }
    }


    if ( flg == 0 ) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    

    return 0;
}