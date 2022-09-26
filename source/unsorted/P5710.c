#include <stdio.h>

int main()
{
    int n, cnt;
    scanf("%d",&n);
    if(n%2==0){
        //是偶数
        cnt++;
    }
    if(n>4&&n<=12){
        //性质2
        cnt++;
    }
    printf("%d %d %d %d",cnt==2,cnt!=0,cnt==1,cnt==0);

    return 0;
}