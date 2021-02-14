#include <stdio.h>

int main(){
  int n1, n2, result;
  scanf("%d %d", &n1, &n2);
  result = n1*n2;
  for(int i=0; i<3; i++){
    printf("%d\n", n1*(n2%10));
    n2 = n2/10;
  }
  printf("%d\n", result);
  return 0;
}
