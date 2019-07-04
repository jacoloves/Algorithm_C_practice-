#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> data(4);
    int flg = 0;

    for (int i=0; i<4; i++) {
        cin >> data.at(i);
    }

    for (int i = 0; i<3; i++) {
        for (int j = i+1; j<4; j++) {
            if (data.at(i) == data.at(j)) {
                flg++;
            }
        }
    }

    if (flg == 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return  0;
}