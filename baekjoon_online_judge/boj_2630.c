#include <stdio.h>
#define WHITE 0
#define BLUE 1

int white_count = 0;
int blue_count = 0;
int arr[128][128];

void colorPaper(int row_start, int col_start, int k)
{
    int summation = 0;
    for (int i = row_start; i < row_start + k; i++)
    {
        for (int j = col_start; j < col_start + k; j++)
        {
            if (arr[i][j] == BLUE)
                summation++;
        }
    }
    if (summation == 0)
        white_count++;
    else if (summation == k * k)
        blue_count++;
    else
    {
        colorPaper(row_start, col_start, k / 2);
        colorPaper(row_start, col_start + (k / 2), k / 2);
        colorPaper(row_start + (k / 2), col_start, k / 2);
        colorPaper(row_start + (k / 2), col_start + (k / 2), k / 2);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    colorPaper(0, 0, n);
    printf("%d\n", white_count);
    printf("%d\n", blue_count);

    return 0;
}