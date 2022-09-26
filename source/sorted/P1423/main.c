#include <stdio.h>

int main()
{
    int start = 2;
    double next = start, all = 0;
    double x;
    int cnt = 0;
    scanf("%lf", &x);

    while (all <= x)
    {
        all += next;
        next *= 0.98;
        cnt++;
    }
    printf("%d", cnt);
    
    return 0;
}