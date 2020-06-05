#include <cstdio>

using namespace std;

int n, m, k, arr[301][301], k_arr[4];

int getSum()
{
    int sum = 0;
    for (int i = k_arr[0]; i <= k_arr[2]; i++)
    {
        for (int j = k_arr[1]; j <= k_arr[3]; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    return sum;
}

int main()
{
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &k_arr[j]);
        }
        printf("%d\n", getSum());
    }
    return 0;
}