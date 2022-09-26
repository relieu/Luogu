#include <stdio.h>

int main ()
{
    int y;
    int i=0;
    scanf("%d",&y);

    if(y%4==0){
        if(y%400==0){
            i++;
        }else if(y%25==0){
            i=i;
        }else{
            i++;
        }
    }
    printf("%d",i!=0);
    
    return 0;
}