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

int judge(int &a, int &c, int (&array), int flg) {
    if (flg == 0) {
        if (a == array[c][0]) {
            return 1;
        }
    } else {
        if (a == array[c][1]) {
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    int a, b, c;
    cin >> a, b, c;
    vector<int> v(a), v2(b), ans;
    int m[c][3];

    for(int i=0; i<a; i++) {
        cin >> v[i];
    }

    for(int i=0; i<b; i++) {
        cin >> v2[i];
    }

    for (int i=0; i<c; i++) {
        for (int j=0; j<3; j++) {
            cin >> m[i][j];
        }
    }

    for (int i=0; i<a; i++) {
        int flg=0;
        for (int j=0; j<b; j++) {
            for (int k=0; k<c; k++) {
                flg += judge(i, k, m, 0);
                flg += judge(j, k, m, 1);

            }
        }
    }


    return 0;
}