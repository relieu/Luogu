#include <stdio.h>

int main()
{
    int m,t,s;
    int l;
    scanf("%d %d %d",&m,&t,&s);
    if(t==0||s>m*t){
        l=0;
    }else{
        l=(m*t-s)/t;
    }
    printf("%d",l);
    return 0;
}