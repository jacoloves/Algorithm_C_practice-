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
    string a;
    cin >> a;

    int ans = a.size();
    int cnt = 0;

    for (int i=0; i<a.size(); i++) {
        if(i%2 == 0) {
            if (a[i] == 'h') {
                cnt++;
            }
        } else {
            if (a[i] == 'i') {
                cnt++;
            }
        }
    }

    if(cnt == ans && (cnt % 2 == 0)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}