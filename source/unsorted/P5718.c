#include <stdio.h>


int main(){

    int n;
    scanf("%d\n",&n);
    int num[100];
    int t, min;

    for(int i = 0;i < n;i++)
    {
        scanf("%d",&t);
        num[i] = t;
    }

    min = num[0];

    for(int i = 1;i < n;i++)
    {
        if(min > num[i])
        {
            min = num[i];
        }
    }
    printf("%d",min);

    return 0;
}