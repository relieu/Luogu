#include <stdio.h>

void mysort(int *pa, int *pb, int *pc);

int main()
{
    int n[3];
    char s1, s2, s3;
    int t1, t2, t3;

    scanf("%d %d %d\n", &n[0], &n[1], &n[2]);
    mysort(&n[0], &n[1], &n[2]);

    scanf("%c%c%c", &s1, &s2, &s3);
    t1 = (int)s1-65;
    t2 = (int)s2-65;
    t3 = (int)s3-65;

    printf("%d %d %d", n[t1], n[t2], n[t3]);

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