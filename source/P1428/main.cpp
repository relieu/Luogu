#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cin >> n;

    int kawaii[n]; //可爱值
    int lowerNum;

    for (int i = 0; i < n; i++)
    {
        cin >> kawaii[i];
        lowerNum = 0;

        for (int j = 0; j < i; j++)
        {
            if (kawaii[j] < kawaii[i])
                lowerNum++;
        }
        cout << lowerNum << ' ';
    }

    return 0;
}