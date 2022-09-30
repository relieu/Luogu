#include <stdio.h>

int main()
{
    int Sn;
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        Sn += i;
    }
    printf("%d", Sn);
    return 0;
}