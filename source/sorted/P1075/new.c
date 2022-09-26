#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    double k;
    int max;

    for (int i = 2; i * i <= n; i++)
    {
        k = 1.0*n/i;
        if (k-(int)k==0)
        {
            max = (i>(int)k)?i:(int)k;
            printf("%d", max);
            return 0;
        }
        
    }
    return -1;
}