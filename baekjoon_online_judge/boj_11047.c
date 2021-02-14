#include <stdio.h>

int main(){
  int n,k;
  int count = 0;
  int arr[10];
  scanf("%d %d", &n, &k);
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  for(int i=n-1; i>=0; i--){
    if(arr[i]<=k){
      while(arr[i]<=k){
        k-=arr[i];
        count++;
      }
    }
  }
  printf("%d\n", count);
  return 0;
}
