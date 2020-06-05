//fail
#include <stdio.h>

int main(){
  int sum=0;
  int arr[100] = {0,};
  for(int i=0; i<100; i++){
    scanf("%d", &arr[i]);
    if(!arr[i]) break;
    sum+=arr[i];
  }
  printf("%d\n", sum);
  return 0;
}
