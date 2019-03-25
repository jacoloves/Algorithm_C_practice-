#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> data(5);
    for (int i = 0; i < 5; i++) {
        cin >> data.at(i);
    }

    // 隣り合っていたものが存在した場合フラグをオン
    int data_flg = 0;
    int tmp;

    for (int i = 0; i < data.size(); i++) {
        if (i == 0) {
            tmp = data.at(i);
        } else {
            if (tmp == data.at(i)) {
                data_flg = 1;
            }
            tmp = data.at(i);
        }
    }

    if (data_flg == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}