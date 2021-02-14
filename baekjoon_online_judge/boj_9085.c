#include <stdio.h>

int main(){
  int t,n,sum=0;
  scanf("%d", &t);
  for(int i=0; i<t; i++){
    scanf("%d", &n);
    for(int j=0; j<n; j++){
      int tmp;
      scanf("%d", &tmp);
      sum += tmp;
    }
    printf("%d\n", sum);
    sum = 0;
  }
  return 0;
}
