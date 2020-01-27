#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>

typedef long long ll;

using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> data1(a);
    vector<int> data2(b);
    vector<int> data3(c);

    for (int i = 0; i < c; i++) {
        cin >> data3[i];
    }

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < a; j++) {
            if (data3[i] == j+1) {
                int con_j;
                data1[j]++;
                con_j = j;
                for (int k = 0; k < a; k++) {
                    if (k == con_j) {
                        continue;
                    }

                    if (data1[k] != 0) {
                        data1[con_j]++;
                        data1[k]--;
                    }
                }
            }
        }
    }

    int cnt = 0;
    int max = 0;

    for (int i = 0; i < a; i++) {
        if (max < data1[i]) {
            max = data1[i];
        }
    }

    for (int i = 0; i < a; i++) {
        if (max == data1[i]) {
            cnt++;
        }
    }

    vector<int> ans(cnt);
    int cnt2 = 0;

    for (int i = 0; i < a; i++) {
        if (max == data1[i]) {
            ans[cnt2] = i + 1;
            cnt2++; 
        }
    }

    for (int i = 0; i < cnt; i++) {
        cout << ans[i] << endl;
    }

    cout << endl;    

}