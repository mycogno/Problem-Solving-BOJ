#include <stdio.h>

int main(){
  long long n,m,a,tmp=1;
  scanf("%lld %lld", &n, &m);
  for(int i=0; i<n; i++){
    scanf("%lld", &a);
    tmp = (tmp * (a%m))%m;
  }
  printf("%lld\n", tmp);
  return 0;
}
