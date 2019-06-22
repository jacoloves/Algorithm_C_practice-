#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    char *ch;
    int flg = 0;

    ch = (char *)malloc(sizeof(char) * 4);

    cin >> ch;

    for (int i = 0; i < 4; i++) {
        if (i != 3) {
            if (ch[i] == ch[i+1]) {
                flg = 1;
            }
        }
    }

    if (flg == 1) {
        cout << "Bad" << endl;
    } else {
        cout << "Good" << endl;
    }

    return 0;
}