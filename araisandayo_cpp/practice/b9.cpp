#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <map>
typedef long long ll;

using namespace std;

bool hantei(int v[3][3]) {
    if ((v[0][0] == v[0][1] == v[0][2] == 1) || (v[1][0] == v[1][1] == v[1][2] == 1) ||
        (v[2][0] == v[2][1] == v[2][2] == 1) || (v[0][0] == v[1][0] == v[2][0] == 1) ||
        (v[0][1] == v[1][1] == v[2][1] == 1) || (v[0][2] == v[1][2] == v[2][2] == 1) ||
        (v[0][0] == v[1][1] == v[2][2] == 1) || (v[0][2] == v[1][1] == v[2][0] == 1)) {
        return true;
    } 

    return false;
}

int main(void)
{
    int data[3][3];
    int data2[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> data[i][j];
            data2[i][j] = 0;
        }
    }

    int a;
    cin >> a;

    vector<int> v(a);

    for (int i = 0; i < a; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < a; k++) {
                if (data[i][j] == v[k]) {
                    data2[i][j] = 1;
                }
            }
        }
    }

    bool tokaku = false;

    tokaku = hantei(data2);

    if (tokaku) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}