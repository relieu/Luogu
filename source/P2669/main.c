#include <stdio.h>

int main()
{
    int all_gold = 0;
    int gold = 1;
    int days = 0;
    int b = 1;

    //input
    int max_day;
    scanf("%d", &max_day);

    do
    {
        for (int i = 1; i <= gold; i++)
        {
            all_gold += gold;
            days ++;
            if (days == max_day)
            {
                b = 0;
                break;
            }
        }
        gold++;
    } while (b);
    
    printf("%d",all_gold);
}