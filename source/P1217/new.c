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
        if (isPalindromes(num) && isPrime(num))
        printf("%d\n", num);
        num++;
    }
    return 0;
}

int isPrime(int x)
{
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
    if(x%2==0) return 0;
    int y=x,num=0;//int y=x,防止x被改变
    while (y!=0)
    {
        num=num*10+y%10;//上一次数字的记录进位再加上下一位数
        y/=10;
    } 
    if (num==x) return 1;
    else return 0;
}