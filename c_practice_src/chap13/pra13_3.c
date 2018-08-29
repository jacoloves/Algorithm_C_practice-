#include <stdio.h>
#include <string.h>

typedef struct {
    char name[100];
    double height;
    double weight;
} Student;

void swap_Student(Student *x, Student *y)
{
    Student temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height(Student a[], int n)
{
    int i, j;

    for(i = 0; i < n -1; i++){
        for(j = n - 1; j > i; j--){
            if(a[j - 1].height > a[j].height){
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

int main(void)
{
    FILE *fp;
    Student std[10];
    int ninzu = 0;
    char name[100];
    double height, weight;

    if((fp = fopen("hw.dat", "r")) == NULL){
        printf("\aファイルをオープンできません。\n");
    }else{
        while(fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3){
            strcpy(std[ninzu].name, name);
            std[ninzu].height = height;
            std[ninzu].weight = weight;

            ninzu++;
        }

        for(int i = 0; i < ninzu; i++){
            printf("%-8s %6.1lf %6.1lf\n", std[i].name, std[i].height, std[i].weight);
        }

        sort_by_height(std, ninzu);

        puts("\n身長順にソートしました。");
        for(int i = 0; i < ninzu; i++){
            printf("%-8s %6.1lf %6.1lf\n", std[i].name, std[i].height, std[i].weight);
        }

        fclose(fp);
    }

    return 0;
}