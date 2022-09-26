#include <stdio.h>

int main(void)
{
    char ori[14];
    int sum;
    int j=1;

    scanf("%s", ori);
    for (int i = 0; i < 12; i++)
    {
        if(ori[i]!='-'){
            sum += (ori[i]-48)*j++;
        }
    }
    //printf("%d\n",sum);
    //printf("%d\n",sum%11);
    //printf("%d\n",ori[12]);

    if(sum%11==10){
        if(ori[12]=='X'){
            printf("Right");
        }else{
            ori[12]=88;
            printf("%s",ori);
        }
    }else{
        if(ori[12]==sum%11+48){
            printf("Right");
        }else{
            ori[12]=sum%11+48;
            printf("%s",ori);
        }
    }

    return 0;
}