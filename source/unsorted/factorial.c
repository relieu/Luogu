#include <stdio.h>

long long factorial(int n);

int main()
{
    /*
    **实现阶乘求和
    **无法计算大数
    **高精度实现见P1009.c
    */
    int n; 
    long long fn = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        fn += factorial(i);
    }
    printf("%llu", fn);
    return 0;
}

long long factorial(int n)
{
    long long fn;
    if (n == 1){
        fn = 1;
    }else{
        fn = n * factorial(n - 1);
    }
    return fn;
}