#include <stdio.h>

double fn(int n);

int main()
{
    int n;
    scanf("%d", &n);

    printf("%.2lf", fn(n));
    return 0;
}

double fn(int n)
{
    double ret; //return
    if (!n)
        ret = 0;
    else if (n < 3)
    {
        ret = 1;
    }
    else
    {
        ret = fn(n - 2) + fn(n - 1);
    }
    return ret;
}