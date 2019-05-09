#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int A, B, T, ans;
    double T2;

    cin >> A >> B >> T;

    T2 = (double)T + 0.5;

    ans = T2 / A;

    cout << ans * B << endl;
}
