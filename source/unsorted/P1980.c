#include <stdio.h>

int main()
{
    int n;
    int x;
    scanf("%d%d", &n, &x);

    int cnt = 0;
    int a, b, c, m = 1;
    while(m<=n)
    {
        a = n/(m*10);
        b = n/m%10;
        c = n % m;
        if(x){
            if(b > x) cnt+=a*m+m;
            if(b ==x) cnt+=a*m+c+1;
            if(b < x) cnt+=a*m;
        }
        else{
            if(b) cnt += a*m;
            else cnt += a*m-a+c+1;
        }
        m *= 10;
    }
    printf("%d", cnt);
    return 0;
}