#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    e = (60*c+d-60*a-b)/60;
    f = (60*c+d-60*a-b)%60;
    printf("%d %d",e,f);

    return 0;
}