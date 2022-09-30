#include <iostream>

using namespace std;

int main()
{
    int n;                //人数
    cin >> n;

    int c[n], m[n], e[n]; //语数外
    int pair = 0; //配对数

    for (int i = 0; i < n; i++)
    {
        cin >> c[i] >> m[i] >> e[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (c[i] - c[j] > 5 || c[j] - c[i] > 5)
            {
                continue;
            }
            else if (m[i] - m[j] > 5 || m[j] - m[i] > 5)
            {
                continue;
            }
            else if (e[i] - e[j] > 5 || e[j] - e[i] > 5)
            {
                continue;
            }
            else if (c[i] + m[i] + e[i] - c[j] - m[j] - e[j] > 10 ||
                     c[j] + m[j] + e[j] - c[i] - m[i] - e[i] > 10)
            {
                continue;
            }else pair++;
        }
    }
    cout << pair;
    return 0;
}