#include <stdio.h>

int main()
{
    int max = 0;
    int min = 1000;
    int tem;
    int cnt;
    scanf("%d", &cnt);
    for (int i = 0; i < cnt; i++)
    {
        scanf("%d", &tem);
        if (tem > max)
        {
            max = tem;
        }
        if (tem < min)
        {
            min = tem;
        }
    }
    printf("%d", max-min);
    return 0;
}