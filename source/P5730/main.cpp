#include <iostream>

int strSet(char *s, const char c[4]);
int charSet(char *s, const char c[2]);

int main()
{
    int n;
    std::cin >> n;
    char num[n];
    std::cin >> num;

    char output[5][n * 4 - 1];

    for (int i = 0; i < n; i++)
    {
        switch (num[i])
        {
        case 48: // char 0
            strSet(&output[0][i * 4], "XXX");
            strSet(&output[1][i * 4], "X.X");
            strSet(&output[2][i * 4], "X.X");
            strSet(&output[3][i * 4], "X.X");
            strSet(&output[4][i * 4], "XXX");
            break;
        case 49: // char 1
            strSet(&output[0][i * 4], "..X");
            strSet(&output[1][i * 4], "..X");
            strSet(&output[2][i * 4], "..X");
            strSet(&output[3][i * 4], "..X");
            strSet(&output[4][i * 4], "..X");
            break;
        case 50: // char 2
            strSet(&output[0][i * 4], "XXX");
            strSet(&output[1][i * 4], "..X");
            strSet(&output[2][i * 4], "XXX");
            strSet(&output[3][i * 4], "X..");
            strSet(&output[4][i * 4], "XXX");
            break;
        case 51: // char 3
            strSet(&output[0][i * 4], "XXX");
            strSet(&output[1][i * 4], "..X");
            strSet(&output[2][i * 4], "XXX");
            strSet(&output[3][i * 4], "..X");
            strSet(&output[4][i * 4], "XXX");
            break;
        case 52: // char 4
            strSet(&output[0][i * 4], "X.X");
            strSet(&output[1][i * 4], "X.X");
            strSet(&output[2][i * 4], "XXX");
            strSet(&output[3][i * 4], "..X");
            strSet(&output[4][i * 4], "..X");
            break;
        case 53: // char 5
            strSet(&output[0][i * 4], "XXX");
            strSet(&output[1][i * 4], "X..");
            strSet(&output[2][i * 4], "XXX");
            strSet(&output[3][i * 4], "..X");
            strSet(&output[4][i * 4], "XXX");
            break;
        case 54: // char 6
            strSet(&output[0][i * 4], "XXX");
            strSet(&output[1][i * 4], "X..");
            strSet(&output[2][i * 4], "XXX");
            strSet(&output[3][i * 4], "X.X");
            strSet(&output[4][i * 4], "XXX");
            break;
        case 55: // char 7
            strSet(&output[0][i * 4], "XXX");
            strSet(&output[1][i * 4], "..X");
            strSet(&output[2][i * 4], "..X");
            strSet(&output[3][i * 4], "..X");
            strSet(&output[4][i * 4], "..X");
            break;
        case 56: // char 8
            strSet(&output[0][i * 4], "XXX");
            strSet(&output[1][i * 4], "X.X");
            strSet(&output[2][i * 4], "XXX");
            strSet(&output[3][i * 4], "X.X");
            strSet(&output[4][i * 4], "XXX");
            break;
        case 57: // char 9
            strSet(&output[0][i * 4], "XXX");
            strSet(&output[1][i * 4], "X.X");
            strSet(&output[2][i * 4], "XXX");
            strSet(&output[3][i * 4], "..X");
            strSet(&output[4][i * 4], "XXX");
            break;
        default:
            std::cout << "error" << std::endl;
            break;
        }
        if (i != n - 1)
        {
            charSet(&output[0][i * 4 + 3], ".");
            charSet(&output[1][i * 4 + 3], ".");
            charSet(&output[2][i * 4 + 3], ".");
            charSet(&output[3][i * 4 + 3], ".");
            charSet(&output[4][i * 4 + 3], ".");
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n * 4 - 1; j++)
        {
            std::cout << output[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}

int strSet(char *s, const char c[4])
{
    *s = c[0];
    *(s + 1) = c[1];
    *(s + 2) = c[2];
    return 1;
}

int charSet(char *s, const char c[2])
{
    *s = c[0];
    return 1;
}