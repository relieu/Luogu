#include <stdio.h>

int main()
{
    int h[10];
    int hand;
    int cnt = 0;

    for (int i=0;i<10;i++)
    {
        scanf("%d",&h[i]);
    }
    scanf("\n%d",&hand);

    for (int i=0;i<10;i++)
    {
        if(h[i]<=hand+30){
            cnt++;
        }
    }
    printf("%d",cnt);

    return 0;
}