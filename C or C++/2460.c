#include <stdio.h>

int main(){
  int d,u,tmp=0,max=0;
  for(int i=0; i<10; i++){
    scanf("%d %d", &d, &u);
    tmp -= d;
    tmp += u;
    if(tmp>max) max = tmp;
  }
  printf("%d\n", max);
  return 0;
}
