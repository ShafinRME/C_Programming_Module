#include <stdio.h>

void summationOfMatrix(int arr1[100][100], int arr2[100][100], int r, int c, int row, int col)
{

    if (row == r)
    {
        return;
    }

    if (col == c)
    {
        printf("\n");
        summationOfMatrix(arr1, arr2, r, c, row + 1, 0);
        return;
    }

    printf("%d ", arr1[row][col] + arr2[row][col]);
    summationOfMatrix(arr1, arr2, r, c, row, col + 1);
}

int main()
{
    int r, c, i, j;

    scanf("%d %d", &r, &c);
    int arr1[100][100], arr2[100][100];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    summationOfMatrix(arr1, arr2, r, c, 0, 0);

    return 0;
}