#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    // 先相加 后去重
    int sum[n * n / 2]; //相加最多项数
    int count = 0;      //项数
    for (int i = 0; i < n * n / 2; i++)
    {
        sum[i] = 0;
    } //初始化数组

    for (int i = 0; i < n - 1; i++) //到倒数第二位
    {
        for (int j = i + 1; j < n; j++)
        {
            int temSum = num[i] + num[j];
            int flag = 0; //存在标识
            for (int k = 0; k < count; k++)
            {
                if (temSum == sum[k])
                {
                    flag = 1;
                    continue;
                }
            }
            if (flag == 0)
            {
                sum[count] = temSum;
                count++;
            }
            flag = 0;
        }
    }

    int result = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (sum[i] == num[j])
            {
                result++;
                continue;
            }
        }
    }

    std::cout << result;

    return 0;
}