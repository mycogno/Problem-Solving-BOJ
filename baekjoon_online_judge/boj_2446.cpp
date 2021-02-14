#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        for (int b = n - i; b > 0; b--)
            printf(" ");
        for (int j = 1; j <= i * 2 - 1; j++)
            printf("*");
        printf("\n");
    }
    for (int i = 2; i <= n; i++)
    {
        for (int b = n - i; b > 0; b--)
            printf(" ");
        for (int j = 1; j <= i * 2 - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}