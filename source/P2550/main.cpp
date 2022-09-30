#include <iostream>

using namespace std;

int main()
{
    int n; //彩票数
    cin >> n;
    short num[7];       //中奖号码
    short own[n][7];    //所购彩票号码
    short win[8] = {0}; //获奖票数

    for (int i = 0; i < 7; i++)
    {
        cin >> num[i];
    }

    uint8_t tem; //每张票号码重合数

    for (int i = 0; i < n; i++)
    {
        tem = 0;
        for (int j = 0; j < 7; j++)
        {
            cin >> own[i][j];
            for (int k = 0; k < 7; k++)
            {
                if (num[k] == own[i][j])
                {
                    tem++;
                    break;
                }
            }
        }
        win[tem]++;
    }

    for (int i = 7; i > 0; i--)
    {
        cout << win[i] << " ";
    }

    return 0;
}