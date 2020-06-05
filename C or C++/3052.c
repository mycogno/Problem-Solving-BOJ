#include <stdio.h>

int main(){
  int arr[10], result[10];
  int count = 0;
  for(int i=0; i<10; i++){
    scanf("%d", &arr[i]);
    arr[i] = arr[i] % 42;
  }
  for(int i=0; i<10; i++){
    for(int j=i+1; j<10; j++){
      if(arr[i]==arr[j]){
        arr[i]=-1;
        break;
      }
    }
  }
  for(int i=0; i<10; i++){
    if(arr[i]==-1);
    else count++;
  }
  printf("%d\n", count);
  return 0;
}
