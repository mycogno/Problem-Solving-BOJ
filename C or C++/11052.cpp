#include <cstdio>
#include <algorithm>
using namespace std;

int memo[1001];

int main()
{
    int N;
    int P[1001];
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &P[i]);
    }

    memo[1] = P[1];
    for (int i = 2; i <= N; i++)
    {
        int maxVal = -1;
        for (int j = 1; j <= i / 2; j++)
        {
            maxVal = max(memo[i - j] + memo[j], maxVal);
        }
        memo[i] = max(maxVal, P[i]);
    }
    printf("%d\n", memo[N]);
}