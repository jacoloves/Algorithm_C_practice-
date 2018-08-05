#include <stdio.h>

#define NUMBER 5

void bsort_kai(int a[], int n)
{
    int i, j;

    for (i = n - 1; i >= 0; i--){
        for(j = 0; j < i; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int i;
    int height[NUMBER];

    printf("%d人の身長を入力してください。\n", NUMBER);
    for(i = 0; i < NUMBER; i++){
        printf("%2d番：", i + 1);
        scanf("%d", &height[i]);
    }

    bsort_kai(height, NUMBER);

    puts("昇順にソートしました。");
    for(i = 0; i < NUMBER; i++){
        printf("%2d番：%d\n", i + 1, height[i]);
    }

    return 0;
}