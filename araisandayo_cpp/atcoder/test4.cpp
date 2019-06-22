#include <iostream>
#include <vector>

using namespace std;

void bubble(int *p, int n);
void swap(int *a, int *b);

int main() {
    int N;
    int *x;
    cin >> N;

    vector<int> vec(N);
    vector<int> data(N);
    
    x = (int *)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++) {
        cin >> vec.at(i) >> data.at(i);
        x[i] = data.at(i) - vec.at(i);
    }


    bubble(x, N);

    for (int i = 0; i < N; i++) {
        cout << x[i] << endl;
    }

}

void bubble(int *p, int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (p[j] < p[j - 1]) {
                swap(p[j], p[j - 1]);
            }
        }
    } 
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}