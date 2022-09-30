#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 2; i * i<= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (i*j==n)
            {
                int d = (i>j)?i:j;
                printf("%d", d);
            }
        }
    }
    return 0;
}