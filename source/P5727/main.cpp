#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int tem[1000] = {n};
    int cnt = 0;

    while (n != 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
        cnt++;
        tem[cnt] = n;
    }

    for (int i = cnt; i >= 0; i--)
    {
        cout << tem[i] << ' ';
    }

    return 0;
}