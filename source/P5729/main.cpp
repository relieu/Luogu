#include <iostream>

using namespace std;

int main()
{
    int w, x, h; //长宽高
    int q;       //切割次数

    int w1, x1, h1;
    int w2, x2, h2;
    cin >> w >> x >> h;
    cin >> q;

    bool mark[w + 1][x + 1][h + 1];

    for (int a = 1; a <= w; a++)
        for (int b = 1; b <= x; b++)
            for (int c = 1; c <= h; c++)
                mark[a][b][c] = 1;

    for (int i = 0; i < q; i++)
    {
        cin >> w1 >> x1 >> h1 >> w2 >> x2 >> h2;
        for (int a = w1; a <= w2; a++)
            for (int b = x1; b <= x2; b++)
                for (int c = h1; c <= h2; c++)
                    mark[a][b][c] = 0;
    }

    int left = 0;
    for (int a = 1; a <= w; a++)
        for (int b = 1; b <= x; b++)
            for (int c = 1; c <= h; c++)
                if (mark[a][b][c])
                    left++;

    cout << left;

    return 0;
}