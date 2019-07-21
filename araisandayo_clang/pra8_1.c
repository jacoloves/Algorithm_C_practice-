#include <stdio.h>
/* swapのかたち
#deine swap(type, x, y) do {type *t = x; x = y; y = y; } while (0)
*/

#define swap(type, x, y) do {type t = x; x = y; y = t; } while(0)

int main()
{
    char *s1 = "ABCD";
    char *s2 = "EFGH";

    printf("ポインタs1は\"%s\"をさしています。\n", s1);
    printf("ポインタs2は\"%s\"をさしています。\n", s2);

    swap(char*, s1, s2);

    puts("\nポインタs1とs2の値を交換しました。\n");

    printf("ポインタs1は\"%s\"をさしています。\n", s1);
    printf("ポインタs2は\"%s\"をさしています。\n", s2);

    return 0;
}
