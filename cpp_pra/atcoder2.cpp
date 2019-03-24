#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    char pi[10];
    int cnt = 0;
    int final_cnt = 0;

    cin >> pi;

    for (int i = 0; i < sizeof(pi); i++) {
        if (pi[i] == 'A') {
            cnt++;
        } else if (pi[i] == 'C') {
            cnt++;
        } else if (pi[i] == 'G') {
            cnt++;
        } else if (pi[i] == 'T') {
            cnt++;
        } else {
            cnt = 0;
        }

        if (final_cnt < cnt) {
            final_cnt = cnt;
        } 
    }

    cout << final_cnt << endl;


}