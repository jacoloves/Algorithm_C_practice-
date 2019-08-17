#include <stdio.h>

int hoge;

int main(void)
{
    char buf[256];

    printf("&hoge...%p\n", (void*)&hoge);

    printf("Input initial calue.\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &hoge);

    for (;;) {
        printf("hoge.. %d\n", hoge);
        getchar();
        hoge++;
    }

    return 0;
}