#include <stdio.h>
#define MAX_LEN 100  // 50! > 3e64

void plus(int a[], int const b[]);
void multip(int a[], int b);

int main()
{
    int sum[MAX_LEN], tem[MAX_LEN];
    for(int i = 0; i < 100; i++){
        sum[i] = tem[i] = 0;
    }

    int n;
    scanf("%d", &n);

    tem[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        multip(tem, i);
        plus(sum, tem);
    }
    int flag = 0;
    for(int i = 99; i >= 0; i--)
    {
        if(sum[i] != 0) flag = 1;
        if(flag == 1){
            printf("%d", sum[i]);
        }
    }
    if(n == 0) printf("0");
    
    return 0;
}

void multip(int a[], int b)
{
    int t;
    for(int i = 0; i < 100; i++)
    {
        t = a[i];
        t *= b;
        a[i] = t;
    }
    for(int i = 0; i < 99; i++)
    {
        t = a[i];
        a[i] = t % 10;
        a[i+1] += t / 10; 
    }
}

void plus(int a[], int const b[])
{
    int t;
    for(int i = 0; i < 100; i++)
    {
        a[i] += b[i];
    }
    for(int i = 0; i < 99; i++)
    {
        t = a[i];
        a[i] = t % 10;
        a[i+1] += t / 10; 
    }
}