#include <stdio.h>


int main()
{
    int n;
    int cnt = 1;
    scanf("%d",&n);

    while(n > 1)
    {
        n = n / 2;
        cnt ++;
    }
    printf("%d",cnt);

    return 0;
}