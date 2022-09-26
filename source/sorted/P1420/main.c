#include <stdio.h>

int main()
{
    int max = 0;
    int now;
    int before = -1;
    int tmp = 1;
    int cnt;
    scanf("%d", &cnt);

    for (size_t i = 0; i < cnt; i++)
    {
        scanf("%d", &now);
        if (now == before+1)
        {
            tmp++;
        }else
        {
            max=(max>tmp)?max:tmp;
            tmp = 1;
        }
        before = now;
    }
    printf("%d", max);
    return 0;
}