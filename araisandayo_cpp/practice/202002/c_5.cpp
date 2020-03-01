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

int main(void)
{
    ll a;
    cin >> a;

    vector<string> data(a);
    vector<string> v;
    for (int i = 0; i < a; i++) {
        cin >> data[i];
    }

    sort(data.begin(), data.end());

    int cnt1 = 0;
    int flg = 0;
    int tmpcnt = 0;

    for (int i = 1; i<a; i++) {
        if (data[i-1] != data[i]) {
            //初比較
            if (flg == 0) {
                tmpcnt = cnt1;
                v.push_back(data[i]);
                flg = 1;
            } else {
                // 2回目以降
                if (cnt1 > tmpcnt) {
                    v.clear();
                    v.push_back(data[i]);
                    tmpcnt = cnt1;
                }else if (cnt1 == tmpcnt) {
                    v.push_back(data[i]);
                }
            }
            cnt1 = 0;
        }
        cnt1++;
    }

    for (int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }


    return 0;
}