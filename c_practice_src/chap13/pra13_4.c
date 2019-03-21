#include <time.h>
#include <stdio.h>

typedef struct {
    char name[100];
    double height;
    double weight;
} Student;

int main(void)
{
    FILE *fp;
    int num;
    Student std[num];
    char name[100];
    double weight, height;

    printf("人数を入力して下さい：");
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        printf("----%d人目----\n", i + 1);
        printf("名前：");
        scanf("%s", std[i].name);
        printf("身長：");
        scanf("%lf", &std[i].height);
        printf("体重：");
        scanf("%lf", &std[i].weight);
    }

    if((fp = fopen("test_dat", "w")) == NULL){
        printf("\aファイルをオープン出来ません。\n");
    } else{
        printf("入力されたデータを書き出しました。\n");
        for(int i = 0; i < num; i++){
            fprintf(fp, "%-10s %5.1lf %5.1lf\n", std[i].name, std[i].height, std[i].weight);
        }
        fclose(fp);
    }

    return 0;
}