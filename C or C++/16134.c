#include <stdio.h>

long long dp[501501] = {0,};
long long combination(long long , long long);

int main(){
  long long n,k;
  scanf("%lld %lld",&n,&k);
  printf("%lld\n", combination(n,k));
  return 0;
}

long long combination(long long n, long long k){
  long long num = (n*(n+1)/2 + k)%1000000007;
  if(n==k || k==0) return 1;
  if(dp[num] != 0) return dp[num];

  return dp[num] = (combination(n-1,k-1)%1000000007 + combination(n-1,k)%1000000007)%1000000007;
}
