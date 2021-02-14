#include <stdio.h>

int main(){
  int n;
  int num;
  int stuarr[101];
  scanf("%d", &n);
  for(int i=1; i<=n; i++){
    scanf("%d", &num);
    stuarr[i] = i;
    for(int j=i; j>i-num; j--){
      int tmp = stuarr[j];
      stuarr[j] = stuarr[j-1];
      stuarr[j-1] = tmp;
    }
  }
  for(int i=1; i<=n; i++){
    printf("%d", stuarr[i]);
    if(i!=n) printf(" ");
  }
  printf("\n");
  return 0;
}
