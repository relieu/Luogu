#include <stdio.h>

int main ()
{
    int y,m;
    int i=0;
    int id;
    scanf("%d %d",&y,&m);

    if(y%4==0){
        if(y%400==0){
            i++;
        }else if(y%25==0){
            i=i;
        }else{
            i++;
        }
    }
    if(m==2){
        if(i!=0){
            printf("29");
        }else{
            printf("28");
        }
    }else if(m==4||m==6||m==9||m==11){
        printf("30");
    }else{
        printf("31");
    }

    return 0;
}