#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int N; //文字列の長さ
    int S; //回答回数
    int a, b; //文字列piのa番目からb番目を指す
    char pi[100000];
    int d[100000];
    int e[100000];
    int AC_flg = 0;
    int cnt = 0;

    cin >> N >> S;

    cin >> pi;


    // a,bを入力させる
    for (int i = 0; i < S; i++) {
        cin >> a >> b;
        d[i] = a - 1;
        e[i] = b;
    }

    // 文字列探索
    for (int i = 0; i < S; i++) {
        cnt = 0;
        AC_flg = 0;
        for (int j = d[i]; j < e[i]; j++) {
            if (pi[j] == 'A') {
                AC_flg = 1;
            } else if (pi[j] == 'C' && AC_flg == 1) {
                cnt++;
            } else {
                AC_flg = 0;
            }
            
        }
        cout << cnt << endl;
    }

}