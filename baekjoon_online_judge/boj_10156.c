#include <stdio.h>

int main(){
  int k,n,m;
  scanf("%d %d %d", &k, &n, &m);
  if(k*n<=m) printf("0\n");
  else printf("%d\n", k*n-m);
  return 0;
}
