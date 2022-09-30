#include <stdio.h>

int main()
{
    char out[11] = {0};
    //input
    char x[11] = {0};
    scanf("%s", &x);

    for (int i = 0; i < 11; i++)
    {
        if (x[0] == '-') //单引号
        {
            i++;
            x[0] = 0;
        }
        out[i] = x[10 - i];
    }
    if (x[0] == 0)
        printf("-");
    for (int i = 0; i < 11; i++)
    {
        printf("%c", out[i]);
    }
    return 0;
}