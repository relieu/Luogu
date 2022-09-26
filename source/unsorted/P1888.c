#include <stdio.h>

int myGCD(int a, int b);
void swap(int *a, int *b);

int main(void)
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (x < y)
        swap(&x, &y);
    if (x < z)
        swap(&x, &z);
    if (y < z)
        swap(&y, &z);

    int g = myGCD(x, z);
    printf("%d/%d", z / g, x / g);

    return 0;
}

int myGCD(int a, int b)
{
    int c;
    while (a % b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return b;
}

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}