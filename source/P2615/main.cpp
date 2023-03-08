#include <iostream>
#include <cstring>

int main()
{
    int N;
    std::cin >> N;

    int matrix[N][N];
    memset(matrix, 0, sizeof(matrix));

    int r, c; // Raw and Column of K-1

    /*  1  */
    r = 0;
    c = N / 2;
    matrix[r][c] = 1;

    /*  K  */
    for (int i = 2; i <= N * N; i++)
    {
        if (r == 0 && c != N - 1)
        {
            r = N - 1;
            c = c + 1;
        }
        else if (r != 0 && c == N - 1)
        {
            c = 0;
            r = r - 1;
        }
        else if (r == 0 && c == N - 1)
        {
            r = r + 1;
            // C keeps
        }
        else if (matrix[r - 1][c + 1] == 0)
        {
            r = r - 1;
            c = c + 1;
        }
        else
        {
            r = r + 1;
            // C keeps
        }

        matrix[r][c] = i;
    }

    // Output
    for (r = 0; r < N; r++)
    {
        for (c = 0; c < N; c++)
        {
            std::cout << matrix[r][c] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}