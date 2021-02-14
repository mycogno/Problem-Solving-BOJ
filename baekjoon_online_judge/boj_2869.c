#include <stdio.h>

int main(){
  int a,b,v;
  scanf("%d %d %d", &a, &b, &v);
  double x = v-b;
  double y = a-b;
  double result = x/y;
  int q = (v-b)/(a-b);
  if((result-(int) result)==0){
    printf("%d\n", q);
  }
  else{
    printf("%d\n",q+1);
  }
  return 0;
}
