#include <stdio.h>
#include <math.h>

int isPrime(int x);

int main()
{
    int acc = 0;
    int cnt = 0;
    int i = 1;
    int L;
    scanf("%d", &L);

    while (acc <= L-i-1)
    {
        i++;
        if (isPrime(i))
        {
            acc += i;
            cnt ++;
            printf("%d\n", i);
        }
    }
    printf("%d",cnt);
    return 0;
}


int isPrime(int x)
{
    for (int i = 2; i <= pow(x, 0.5); i++)
    {
        if (!(x%i))
        {
            return 0;
        }
    }
    if(!x) return 0;
    return 1;
}