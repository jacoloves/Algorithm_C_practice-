#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    char *pi ;
    int n; //入力文字の長さ(バイト数)

    cin >> n;

    // 入力バイト数だけメモリ確保
    pi = (char *)malloc(n);

    cin >> pi;

    // 文字出力
    for (int i = 0; i < sizeof(pi); i++) {
        cout << pi[i];
    }

    cout << endl;

    free(pi);
}