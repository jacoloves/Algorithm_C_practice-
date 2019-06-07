 #include <stdio.h>
 #include <stdlib.h>

 int minof(const int a[], int n);

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

     printf("最小値は%dです。\n", minof(height, number));
     free(height);

     return 0;
 }

 int minof(const int a[], int n) {
     int min = a[0];

     for (int i = 1; i < n; i++) {
         if (min > a[i]) {
             min = a[i];
         }
     }

     return min;
 }