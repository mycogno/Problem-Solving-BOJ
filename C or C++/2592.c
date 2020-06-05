#include <stdio.h>

int main(){
  int tmp, sum = 0;
  int b, max = 0;
  int num[100] = {0,};
  for(int i=0; i<10; i++){
    scanf("%d", &tmp);
    sum += tmp;
    num[tmp/10]++;
  }
  for(int i=1; i<100; i++){
    if(num[i]>max) {
      b = i * 10;
      max = num[i];
    }
  }
  printf("%d\n%d\n", sum/10, b);
  return 0;
}
