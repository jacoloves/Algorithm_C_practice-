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
    string str;
    cin >> str;

    int len = str.length();

    vector<char> data(len);

    for (int i = 0; i < len; i++) {
        if (str[i] == 'A') {
            data[i] = '4';
        } else if (str[i] == 'E') {
            data[i] = '3';
        } else if (str[i] == 'G') {
            data[i] = '6';
        } else if (str[i] == 'I') {
            data[i] = '1';
        }  else if (str[i] == 'O') {
            data[i] = '0';
        }  else if (str[i] == 'S') {
            data[i] = '5';
        } else if (str[i] == 'Z') {
            data[i] = '2';
        }  else {
            data[i] = str[i];
        }
    }

    for (int i = 0; i < len; i++) {
        cout << data[i];
    }

    cout << endl;

}