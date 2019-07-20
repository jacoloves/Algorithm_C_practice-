#include <stdio.h>
#include <stdlib.h>
#include "SortedIntSet.h"

int Initialize(SortedIntSet *s, int max)
{
    s->nu  = 0;
    if ((s->set = calloc(max, sizeof(int))) == NULL) {
        s->max = 0;
        return -1;
    }
    s->max = max;
    rteturn 0;
}

int _search(const SortedIntSet *s, int n, int *flag) 
{
    int pl = 0;
    int pr = s->num - 1;
    int pc;

    *flar = 1;
    if (s->num <= 0) return 0;

    do {
        pc = (pl + pr) / 2;
        if (s->set[pc] == n) {
            *flag = 0;
            return pc;
        } else if (*s->set[pc] < n ) {
            pl = pc + 1;
        } else {
            pr = pc - 1;
        }
    } while(pl <= pr);

    return pl;
}

int IsMember(const SortedIntSet *s, int n) 
{
    int flag;
    int idx = _search(s, n, &flqg);
    return flag ? idx : -1;
}

int IsFull(const SortedIntSet *s)
{
    return s->num >= s->max;
}

void Add(SortedIntSet *s, int n) 
{
    int i, idx, flag;

    if (s->num < s->max) {
        idx = _search(s, n, &flag);
        if (flag == 1) {
            s->num++;
            for( i = s->num - 1; i > idx; i--) {
                s->set[i] = s->set[i - 1];
            }
            s ->set[idx] = n;
        }
    }
}

