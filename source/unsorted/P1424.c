#include <stdio.h>

int main(void)
{
    int x, n;
    scanf("%d %d",&x,&n);
    int weeks, lefts;
    int mv = 0;

    if(x<6)
    {
        mv += (6-x)*250;
    }

    mv += (n-8+x)/7 * 5 * 250;
    lefts =(n-8+x)%7;

    if(lefts > 5){
        mv += 5*250;
    }else{
        mv += lefts*250;
    }
    printf("%d",mv);

    return 0;
}