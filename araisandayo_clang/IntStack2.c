#include <stdio.h>
#include <stdlib.h>
#include "IntStack2.h"

int Initialize(IntStack *s, int max)
{
    s->ptrA = 0;
    if ((s->str = calloc(max, sizeof(int))) == NULL) {
        s->max = 0;
        s->ptrB = 0;
        return -1;
    }
    s->ptrB = max - 1;
    s->max = max;
    return 0;
}

int Push(IntStack *s, int sw, int x)
{
    
}