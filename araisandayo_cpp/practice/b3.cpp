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
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> v(b);
    for (int i=0; i<b; i++) {
        cin >> v[i];
    }

    int data[a][b];
    for (int i=0; i<a; i++) {
        for (int j=0; j<b; j++) {
            cin >> data[i][j];
        }
    }

    int cnt = 0;
    int sum = 0;
    for (int i=0; i<a; i++) {
        sum = 0;
        for (int j=0; j<b; j++) {
            sum += data[i][j] * v[j];
        }
        if (sum + c > 0)
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}