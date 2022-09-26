#include <stdio.h>

int main()
{
    int e;
    double price;

    scanf("%d", &e);

    if (e > 400)
    {
        price = (e - 400) * 0.5663 + 250 * 0.4663 + 150 * 0.4463;
    }
    else if (e > 150)
    {
        price = (e - 150) * 0.4663 + 150 * 0.4463;
    }
    else
    {
        price = e * 0.4463;
    }

    printf("%.1lf",price);

    return 0;
}