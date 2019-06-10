 #include <stdio.h>
 #include <stdlib.h>

 double aveof(const int a[], int n);

 int main() {
     int i;
     int *height;
     int number;

     printf("人数：");
     scanf("%d", &number);

     height = calloc(number, sizeof(int));

     printf("%d人の身長を入力してください。\n", number);
     for (i = 0; i < number; i++) {
         printf("height[%d]:", i);
         scanf("%d", &height[i]);
     }

     printf("平均は%0.2fです。\n", aveof(height, number));
     free(height);

     return 0;
 }

 double aveof(const int a[], int n) {
    int sum = 0;
    double ave = 0.0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    ave = sum / n;

    return ave;
 }