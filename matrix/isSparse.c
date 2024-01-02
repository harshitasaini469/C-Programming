#include <stdio.h>
#define ROW 3
#define COL 3

void main()
{
    int a[][COL] = {{1, 0, 3}, {0, 0, 4}, {6, 0, 0}};
    int total = 0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (a[i][j] == 0)
                total++;
        }
    }
    if (total >= (ROW * COL) / 2)
        printf("the matrix is sparse");
    else
        printf("the matrix is not sparse");
}