#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int cnt = 0; //计数
    int mem[100];
    int tem = 1;

    while (tem != 0)
    {
        cin >> tem;
        mem[cnt] = tem;
        cnt++;
    }

    for (int i = cnt - 2; i >= 0; i--)
    {
        cout << mem[i] << ' ';
    }

    return 0;
}