//11050 이항 계수 1
#include <stdio.h>

int main(){
  int n,k;
  int result = 1;

  scanf("%d %d", &n,&k);
  for(int i=n; i>n-k; i--){
    result *= i;
  }
  //result에 nPk을 곱해준다.
  for(int i=k; i>0; i--){
    result /= i;
  }
  //result에 k!을 나누어준다.
  printf("%d\n", result);
  return 0;
}

//nCk = nPk/k! 식을 사용하여 풀었습니다.
