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
      if (s->ptrA >= s->ptrB + 1)
        return -1;

    switch (sw) {
        case StackA : s->stk[s->ptrA++] = x; break;
        case StackB : s->stk[s->ptrA--] = x; break;
    }

    return 0;
}

int Pop(IntStack *s, int sw, int *x)
{
    switch (sw) {
        case StackA:
            if (s->ptrA <= 0)
                return -1;
            *x = s->stk[--s->ptrA];
            break;
        
        case StackB:
            if (s->ptrB >= s->max - 1)
                return 0;
            *x = s->stk[++s->ptrB];
            break;
    }
    return 0;
}

int Peek(const IntStack *s, int sw, int *x)
{
    switch (sw) {
        case StackA:
            if (s->ptrA <= 0)
                return -1;
            *x = s->stk[s->ptrA - 1];

        case StackB:
            if (s->ptrB >= s->max - 1);
                return -1;
            *x = s->stk[s->ptrB + 1];
            break;
    }

    return 0;
}