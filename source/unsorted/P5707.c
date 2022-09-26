#include <stdio.h>

int main()
{
    int s, v;
    int t;
    int h, m;

    scanf("%d %d", &s, &v);
    if (s % v == 0)
    {
        t = s / v + 10;
    }
    else
    {
        t = s / v + 11;
    }
    t = 8 * 60 - t;
    if (t >= 0)
    {
        h = t / 60;
        m = t % 60;
    }
    else
    {
        h = t / 60 + 23;
        m = t % 60 + 60;
    }

    printf("%02d:%02d",h,m);

    return 0;
}