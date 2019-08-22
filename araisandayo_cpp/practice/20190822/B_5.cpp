#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    cout << ceil(N/(2*M+1.0)) << endl;

    return 0;
}