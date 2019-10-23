#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
    int cnt = 0;
    int size;
    string str;
    cin >> str;

    size = str.length();

    for (int i = 0; i < size; i++) {
        if (((i+1) % 2) == 0) {
            if (str[i] == 'L' || str[i] == 'D' || str[i] == 'U') {
                cnt++;
            } 
        } else {
            if (str[i] == 'R' || str[i] == 'D' || str[i] == 'U') {
                cnt++;
            }
        }
    }

    if (cnt == size) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}