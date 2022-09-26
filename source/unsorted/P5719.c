#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int A[10001], B[10001];

    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            A[i] = 1;
            B[i] = 0;
        }
        else
        {
            A[i] = 0;
            B[i] = 1;
        }
    }

    double avgA, avgB;
    int cnt = 0;
    long sum = 0;

    for (int i = 1; i <= n; i++)
    {
        //printf("%d\t",A[i]);
        if (A[i] == 1)
        {
            cnt++;
            sum = sum + i;
        }
    }
    avgA = 1.0 * sum / cnt;
    sum = 0;
    cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        //printf("%d ",B[i]);
        if (B[i] == 1)
        {
            cnt++;
            sum = sum + i;
        }
    }
    avgB = 1.0 * sum / cnt;
    printf("%.1f %.1f", avgA, avgB);

    return 0;
}