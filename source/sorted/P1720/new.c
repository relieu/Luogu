// 递归算法TLE
//1 1 2 3 5 8

double result(int n);

int main()
{
    int n;
    scanf("%d", &n);

    printf("%.2lf", result(n));
    return 0;
}

double result(int n)
{
    double fn[48];
    if (n == 0)
        return 0;
    else
        fn[0] = fn[1] = 1; //TODO
    for (int i = 2; i < n; i++)
    {
        fn[i] = fn[i-2] + fn[i-1];
    }
    return fn[n-1];
}