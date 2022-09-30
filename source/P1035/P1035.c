#include <stdio.h>

int main()
{
    double Sn = 0;
    int i = 1;

    //input
    int k;
    scanf("%d", &k);

    //Sn
    while (Sn <= k)
    {
        Sn += (double)1.0/i;
        i++;
    }

    printf("%d", i-1);
    return 0;
}