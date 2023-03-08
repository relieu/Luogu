#include <iostream>

int main()
{
    int m, n;
    std::cin >> m >> n;

    char buffer[11];
    int result[10] = {0};
    for (int i = m; i <= n; i++)
    {
        sprintf(buffer, "%d", i);
        for (int j = 0; buffer[j] != '\0'; j++)
        {
            result[buffer[j] - 48]++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << result[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}