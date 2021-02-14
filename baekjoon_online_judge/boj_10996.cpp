#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("*\n");
        return 0;
    }
    for (int i = 1; i <= 2 * n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i % 2 == 1) && (j % 2 == 1))
                printf("*");
            else if ((i % 2 == 0) && (j % 2 == 0))
                printf("*");
            else if ((i % 2 == 0) && (j % 2 == 1) && (j == n))
                break;
            else if ((i % 2 == 1) && (j % 2 == 0) && (j == n))
                break;
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}