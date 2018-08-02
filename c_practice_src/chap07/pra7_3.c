#include <stdio.h>

int count_bits(unsigned x)
{
    int bits = 0;
    while(x){
        if(x & 1U) bits++;
        x >>= 1;
    }

    return bits;
}

int int_bits(void)
{
    return count_bits(~0U);
}

void print_bits(unsigned x)
{
    int i;
    for(i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1' : '0');
}

int main(void)
{
    unsigned a, b;

    printf("非負の整数を二つ入力して下さい。\n");
    printf("a:"); scanf("%u", &a);
    printf("b:"); scanf("%u", &b);

    printf("\na    = "); print_bits(a);
}