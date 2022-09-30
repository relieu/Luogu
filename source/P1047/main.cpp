#include <iostream>

using namespace std;

int main()
{
    int l, m;
    cin >> l;
    cin >> m;

    int street[l];

    for (int i = 0; i <= l; i++)
    {
        street[i] = 1;
    }

    int left, right;

    for (int i = 0; i < m; i++)
    {
        cin >> left;
        cin >> right;
        for (int j = left; j <= right; j++)
        {
            street[j] = 0;
        }
    }

    int remain = 0;

    for (int i = 0; i <= l; i++)
    {
        remain += street[i];
    }

    cout << remain;
    
}