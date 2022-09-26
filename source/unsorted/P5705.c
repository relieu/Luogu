#include <stdio.h>

int main()
{
    float i;
    int j[4];
    scanf("%f",&i);
    //printf("%f",i);
    int ii = (int)(i*10);
    //printf("%d\n",ii);
    j[3]=ii%10;
    j[2]=(ii%100-j[3])/10;
    j[0]=ii/1000;
    j[1]=ii/100-j[0]*10;
    //printf("%d\n",j[3]);
    //printf("%d\n",j[2]);
    //printf("%d\n",j[1]);
    //printf("%d\n",j[0]);
    printf("%.3f",j[3]+j[2]*0.1+j[1]*0.01+j[0]*0.001);

    return 0;
}