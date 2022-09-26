#include <stdio.h>

int main()
{
    int n;
    int a[3], b[3], p[3];

    scanf("%d", &n);
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
        if (n % a[i] != 0)
        {
            p[i] = (n / a[i] + 1) * b[i];
        }
        else
        {
            p[i] = (n / a[i]) * b[i];
        }
    }
    if (p[0] > p[1])
    {
        if (p[1] > p[2])
        {
            printf("%d", p[2]);
        }
        else
        {
            printf("%d", p[1]);
        }
    }
    else if (p[0] > p[2])
    {
        printf("%d", p[2]);
    }
    else
    {
        printf("%d", p[0]);
    }

    return 0;
}