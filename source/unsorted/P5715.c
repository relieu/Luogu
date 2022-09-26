#include<stdio.h>

int main()
{
    int a[3];
    int n=0;
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    if(a[0]>=a[1]){
        n++;
    }
    if(a[0]>=a[2]){
        n+=2;
    }
    if(a[1]>=a[2]){
        n+=4;
    }
    switch(n)
    {
        case 1:
        printf("%d %d %d",a[1],a[0],a[2]);
        break;
        case 2:
        printf("%d %d %d",a[2],a[0],a[1]);
        break;
        case 4:
        printf("%d %d %d",a[0],a[2],a[1]);
        break;
        case 3:
        printf("%d %d %d",a[1],a[2],a[0]);
        break;
        case 6:
        printf("%d %d %d",a[2],a[0],a[1]);
        break;
        case 7:
        printf("%d %d %d",a[2],a[1],a[0]);
        break;
        default:
        printf("%d %d %d",a[0],a[1],a[2]);
        break;
    }
    return 0;
}