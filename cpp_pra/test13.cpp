#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> data(5);
    int ANS;
    int flg = 0;

    for (int i = 0; i < data.size(); i++) {
        cin >> data.at(i);
    }

    //基準値
    cin >> ANS;


    //判定
    for (int i = 0; i < data.size(); i++) {
        if (i < data.size() - 1) {
            for (int j = i + 1; j < data.size(); j++) {
                if (data.at(j) - data.at(i) > ANS) {
                    flg  = 1;
                }
            }
        }
        if (flg == 1) {
            break;
        }
    }

    if (flg == 0) {
        cout << "Yay!" << endl;
    } else {
        cout << ":(" << endl;
    }
}