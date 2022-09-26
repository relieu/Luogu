#include <stdio.h>

void mysort(int *a, int *b, int *c);

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    mysort(&a, &b, &c);
    if (a + b < c)
        printf("Not triangle\n");
    else
    {
        if (a * a + b * b == c * c)
            printf("Right triangle\n");
        if (a * a + b * b > c * c)
            printf("Acute triangle\n");
        if (a * a + b * b < c * c)
            printf("Obtuse triangle\n");
        if (b == a || b == c)
            printf("Isosceles triangle\n");
        if (a == b && b == c)
            printf("Equilateral triangle\n");
    }
    return 0;
}

void mysort(int *pa, int *pb, int *pc)
{
    int a = *pa;
    int b = *pb;
    int c = *pc;
    int t;
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a > c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (b > c)
    {
        t = b;
        b = c;
        c = t;
    }
    *pa = a;
    *pb = b;
    *pc = c;
}