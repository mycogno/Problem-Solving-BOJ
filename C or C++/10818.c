#include <stdio.h>

int main(){
  int n,tmp;
  int max = -1000000;
  int min = 1000000;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    scanf("%d", &tmp);
    if(tmp<min) min = tmp;
    if(tmp>max) max = tmp;
  }
  printf("%d %d\n", min, max);
  return 0;
}
