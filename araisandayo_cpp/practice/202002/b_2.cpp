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

    vector<int> data(a-1);

    for (int i=0; i<a-1; i++) {
        cin >> data[i];
    }

    int ave1 = 0;
    for (int i = 0; i < a-1; i++) {
        ave1 += data[i];
    }

    int flg = -1;
    for (int i = 0; i <= b; i++) {
        int ave3 = 0;
        ave3 = (ave1+i)/a;
        if (ave3 >= c) {
            flg = i;
            break;
        }
    }

    cout << flg << endl;


    return 0;
}