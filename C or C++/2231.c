#include <stdio.h>

int bunhae(int n){
  int result = n;
  while(1){
    result += n%10;
    n /= 10;
    if(!n) return result;
  }
}

int main(){
  int n;
  scanf("%d", &n);
  for(int i=1; i<=n; i++){
    if(bunhae(i)==n){
      printf("%d\n", i);
      return 0;
    }
  }
  printf("0\n");
  return 0;
}
