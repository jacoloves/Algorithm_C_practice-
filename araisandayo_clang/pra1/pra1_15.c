 #include <stdio.h>

 int main() {
     int height, width;

     printf("長方形を表示します。\n");

     printf("高さは：");
     scanf("%d", &height);

     printf("横幅は：");
     scanf("%d", &width);

     for (int i = 1; i <= height; i++) {
         for (int j = 1; j <= width; j++) {
             printf("*");
         }
         printf("\n");
     }
 }