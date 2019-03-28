#include <windows.h>
#include <stdio.h>

char* title = "サンプルプログラム１";

double Average(double a, double b) {
    return (a + b) / 2;
}

int WINAPI WinMain(HINSTANCE h, HINSTANCE d, LPSTR s, int m) {
    double ave;
    char buff[80];

    ave = Average(123, 456);

    sprintf(buff, "平均値 ＝ %f", ave);

    MessageBox(NULL, buff, title, MB_OK);
}