#include <stdio.h>

int main(){
  int a,b;
  while(1){
    int n=0;
    scanf("%d%d", &a, &b);
    if(!a&&!b) break;
    while(a>=b){
      a-=b;
      n++;
    }
    printf("%d %d / %d\n", n, a, b);
  }
  return 0;
}
