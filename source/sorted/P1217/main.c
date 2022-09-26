#include <stdio.h>
#include <math.h>

int isPrime(int x);
int isPalindromes(int x);

int main()
{
    //input
    int min, max;
    scanf("%d %d", &min, &max);

    int num = min;
    while (num <= max)
    {
        if (isPrime(num)&&isPalindromes(num))
        printf("%d\n", num);
        num++;
    }
    return 0;
}

int isPrime(int x)
{
    if(x%2==0) return 0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (!(x%i))
        {
            return 0;
        }
    }
    if(!x) return 0;
    return 1;
}

int isPalindromes(int x)
{
    int num[10];
    int p = 0;
    while (x)
    {
        num[p] = x % 10;
        x = x / 10;
        p++;
    }
    for (short i = 0; i < p/2; i++)
    {
        if(num[i] != num[p-i-1]) return 0;
    }
    return 1;
}