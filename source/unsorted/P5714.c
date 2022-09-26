#include<stdio.h>
#include<math.h>

int main()
{
    int m;
    double h;
    scanf("%d %lf",&m,&h);
    double BMI = m/pow(h,2);
    //printf("%f\n",BMI);
    if(BMI<18.5){
        printf("Underweight");
    }else if(BMI>=24){
        printf("%.4f\nOverweight",BMI);
    }else {
        printf("Normal");
    }

    return 0;
}