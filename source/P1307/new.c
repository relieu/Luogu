/*
    题意理解错误
    ascii 0 也记为输出
*/
#include <stdio.h>

int main()
{
    char out[11] = {0};

    //input
    char x[11] = {0};
    scanf("%s", &x);

    int cnt = 0;
    while (cnt < 11 && x[cnt] != 0)
    {
        cnt++;
    }
    for (int i = 0; i < cnt; i++)
    {
        out[i] = x[cnt - i - 1];
    }
    if (x[0] == '-')
    {
        printf("-");
        cnt--;
    }
    int zeros = 1;
    for (int i = 0; i < cnt; i++)
    {
        if (zeros && out[i] != '0')
        {
            zeros = 0;
        }
        else if (zeros && out[i] == '0')
            continue;

        printf("%c", out[i]);
    }
    if (cnt == 1 && out[0] == '0')
        printf("0");

    return 0;
}