#include <iostream>

using namespace std;

int main()
{
    int A, B, ans;

    cin >> A >> B;

    if (A <= 5) {
        ans = 0;
    } else if (6 <= A && A <= 12) {
        ans = B / 2;
    } else {
        ans = B;
    }

    cout << ans << endl;
    
    return 0;
}

