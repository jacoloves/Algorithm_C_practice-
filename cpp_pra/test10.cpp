#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int N, M, F;
    string str;
    double ans1, ans2;
    cin >> N >> M;

    // 風向き
    ans1 = (double)N / 10;

    // 風向きを判定
    if (11.25 <= ans1 && ans1 < 33.75) {
        str = "NNE";
    } else if (33.75 <= ans1 && ans1 < 56.25) {
        str = "NE";
    } else if (56.25 <= ans1 && ans1 < 78.75) {
        str = "ENE";
    } else if (78.75 <= ans1 && ans1 < 101.25) {
        str = "E";
    } else if (101.25 <= ans1 && ans1 < 123.75) {
        str = "ESE";
    } else if (123.75 <= ans1 && ans1 < 146.25) {
        str = "SE";
    } else if (146.25 <= ans1 && ans1 < 168.75) {
        str = "SSE";
    } else if (168.75 <= ans1 && ans1 < 191.25) {
        str = "S";
    } else if (191.25 <= ans1 && ans1 < 213.75) {
        str = "SSW";
    } else if (213.75 <= ans1 && ans1 < 236.25) {
        str = "SW";
    } else if (236.25 <= ans1 && ans1 < 258.75) {
        str = "WSW";
    } else if (258.75 <= ans1 && ans1 < 281.25) {
        str = "W";
    } else if (281.25 <= ans1 && ans1 < 303.75) {
        str = "WNW";
    } else if (303.75 <= ans1 && ans1 < 326.25) {
        str = "NW";
    } else if (326.25 <= ans1 && ans1 < 348.75) {
        str = "NNW";
    } else {
        str = "N";
    }

    // 風力
    double dA = (double)M / 60;
    ans2 = round(dA * 10) / 10;

    if (0.0 <= ans2 && ans2 <= 0.2) {
        F = 0;
    } else if (0.3 <= ans2 && ans2 <= 1.5) {
        F = 1;
    } else if (1.6 <= ans2 && ans2 <= 3.3) {
        F = 2;
    } else if (3.4 <= ans2 && ans2 <= 5.4) {
        F = 3;
    } else if (5.5 <= ans2 && ans2 <= 7.9) {
        F = 4;
    } else if (8.0 <= ans2 && ans2 <= 10.7) {
        F = 5;
    } else if (10.8 <= ans2 && ans2 <= 13.8) {
        F = 6;
    } else if (13.9 <= ans2 && ans2 <= 17.1) {
        F = 7;
    } else if (17.2 <= ans2 && ans2 <= 20.7) {
        F = 8;
    } else if (20.8 <= ans2 && ans2 <= 24.4) {
        F = 9;
    } else if (24.5 <= ans2 && ans2 <= 28.4) {
        F = 10;
    } else if (28.5 <= ans2 && ans2 <= 32.6) {
        F = 11;
    } else {
        F = 12;
    }

    if (F == 0) {
        str = "C";
    }

    cout << str << " " << F << endl;
}