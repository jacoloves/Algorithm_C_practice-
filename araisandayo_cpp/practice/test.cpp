#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,ans;
    cin >> a >> b;

    ans = a*b;

    cout << fmod(ans, 2019) << endl;

    return 0;
}