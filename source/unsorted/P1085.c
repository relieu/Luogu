#include <stdio.h>

int main()
{
    int tem;
    int h[7], u[7]; //hour,real

    for (int i = 0; i < 7; i++)
    {
        scanf("%d %d", &tem, &h[i]);
        h[i] += tem;
    }
    //构造r[i]
    if (h[0] >= 8)
    {
        u[0] = h[0] - 8;
    }
    else
    {
        u[0] = 0;
    }

    for (int i = 1; i < 7; i++)
    {
        if (h[i] >= 8)
        {
            u[i] = h[i] - 8;
        }
        else
        {
            u[i] = 0;
        }
    }
    //排序
    int p, q;
    p = u[0];
    q = 1;
    for (int i = 1; i < 7; i++)
    {
        if (u[i] > p)
        {
            p = u[i];
            q = i + 1;
        }
        if (p == 0)
            q = 0;
    }
    printf("%d", q);

    return 0;
}