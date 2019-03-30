#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int r = 0;

    for (auto c : s) {
        if (c == 'R') r++;
        else r--;
    }

    if (r > 0)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
} 