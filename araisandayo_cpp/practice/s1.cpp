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
    vector<int> data(5);

    for (int i = 0; i < 5; i++) {
        if (i == 1) {
            data[i]++;
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << data[i] << endl;
    }
}