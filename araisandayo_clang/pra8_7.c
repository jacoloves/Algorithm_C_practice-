#include <ctype.h>
#include <stdio.h>
#include <string.h>

int str_cmpic(const char *s1, const char *s2)
{
    while (toupper(*s1) == toupper(*s2)) {
        if (*s1 == '\0') {
            return 0;
        }
        s1++;
        s2++;
    }
    return (unsigned char)toupper(*s1) - (unsigned char)toupper(*s2);
}

int str_ncmpic(const char *s1, const char *s2, size_t n)
{
    while (n && *s1 && *s2) {
        if (toupper(*s1) != toupper(*s2)) {
            return (unsigned char)toupper(*s1) - (unsigned char)toupper(*s2);
        }
        s1++;
        s2++;
        n--;
    }
    if (!n) return 0;
    if (*s1) return toupper(*s1);
    return toupper(*s2);
}