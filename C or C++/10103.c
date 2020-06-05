#include <stdio.h>

int main(){
  int n,a,b;
  int a_score = 100, b_score = 100;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    scanf("%d %d", &a, &b);
    if(a<b) a_score-=b;
    else if(a>b) b_score-=a;
  }
  printf("%d\n%d\n", a_score, b_score);
  return 0;
}
