#include <stdio.h>
#include <math.h>
//cout直接输出指的是6位有效数字
int main()
{
    int prbN ;
    double PI = 3.141593;
    scanf("%d",&prbN);
    switch(prbN)
    {
        case 1:
        printf("I love Luogu!");
        break;
        case 2:
        printf("6 4");
        break;
        case 3:
        printf("3\n12\n2");
        break;
        case 4:
        printf("%.3f",500.0/3);
        break;
        case 5:
        printf("%d",(260+220)/(12+20));
        break;
        case 6:
        printf("%.4f",sqrt(36.0+81.0));
        break;
        case 7:
        printf("110\n90\n0");
        break;
        case 8:
        printf("%.4f\n%.4f\n%.3f",2*PI*5,5*PI*5,4.0/3*PI*125);
        break;
        case 9:
        printf("22");
        break;
        case 10:
        printf("9");
        break;
        case 11:
        printf("%.4f",1.0*100/3);
        break;
        case 12:
        printf("13\nR");
        break;
        case 13:
        printf("16");
        break;
        case 14:
        printf("50");
        break;
        default:
        printf("qwq");
    }
     
    return 0;
}