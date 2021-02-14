#include <stdio.h>

int main(){
  int t,s,n,q,p;
  int sum = 0;
  scanf("%d", &t);
  for(int i=0; i<t; i++){
    scanf("%d %d", &s, &n);
    sum += s;
    for(int j=0; j<n; j++){
      scanf("%d %d", &q, &p);
      sum += q*p;
    }
    printf("%d\n", sum);
    sum = 0;
  }
  return 0;
}
