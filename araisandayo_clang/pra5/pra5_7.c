#include <stdio.h>
#include <stdlib.h>

int flag_a[8];
int flag_b[15];
int flag_c[15];
int pos[8];

void print(void)
{
    int i;
    char *c, *d;

    c = (char *)malloc(2);
    d = (char *)malloc(2);

    c = "■";
    d = "□";

    for (i = 0; i < 8; i++) {
        //printf("%2d", pos[i]);
        for (int j = 0; j < 8; j++) {
            if (j == pos[i]) {
                printf("%2s", c);
            } else {
                printf("%2s", d);
            }
        }
        putchar('\n');
    }
    printf("--------------\n");
    
}

void set(int i)
{
    int j;
    for (j = 0; j < 8; j++) {
        if (!flag_a[j] && !flag_b[i + j] && !flag_c[i - j + 7]) {
            pos[i] = j;
            if (i == 7) {
                print();
            } else {
                flag_a[j] = flag_b[i + j] = flag_c[i - j + 7] = 1;
                set(i + 1);
                flag_a[j] = flag_b[i + j] = flag_c[i - j + 7] = 0;
            }
        }
    }
}


int main(void) 
{
    int i;
    for (i = 0; i < 8; i++) {
        flag_a[i] = 0;
    }

    for (i = 0; i < 15; i++) {
        flag_b[i] = flag_c[i] = 0;
    }

    set(0);

    return 0;
}