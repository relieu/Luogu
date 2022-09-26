#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    if(i>1){
        printf("Today, I ate %d apples.",i);
    }else{
        printf("Today, I ate %d apple.",i);
    }

    return 0;
}