#include <stdio.h>

void triangleLB(int n);
void triangleLU(int n);
void triangleRU(int n);
void triangleRB(int n);

int main() 
{
    int n;

    do {
        printf("何段の三角形ですか：");
        scanf("%d", &n);
    } while (n <= 0);


    triangleLB(n);
    printf("\n");
    triangleLU(n);
    printf("\n");
    triangleRB(n);
    printf("\n");
    triangleRU(n);

}

void triangleLB(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void triangleLU(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void triangleRB(int n) {
    
    int cnt = 1;

    for (int i = n ; i >= 1; i--) {
        // 空白箇所
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }
        // 星
        for (int k = 1; k <= cnt; k++) {
            printf("*");
        }
        cnt++;
        printf("\n");
    }
}

void triangleRU(int n) {
    int cnt = 1;

    for (int i = n; i >= 1; i--) {
        // 星
        for (int j = i; j >= 1; j--) {
            printf("*");
        }

        // 空白
        for (int k = i; k < cnt; k++) {
            printf(" ");
        }
        cnt++;
        printf("\n");
    }
}