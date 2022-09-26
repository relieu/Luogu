#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int num = 1;
    for (int raw = 1; raw <= n; raw++)
    {
        for(int i = 1; i <= n-raw+1; i++){
            printf("%02d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}