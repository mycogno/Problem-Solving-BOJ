#include <stdio.h>

int main(){
  int n,m;
  int arr[100];
  int tmp = 1;
  scanf("%d %d", &n, &m);
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      for(int k=j+1; k<n; k++){
        if((tmp<arr[i]+arr[j]+arr[k]) && (arr[i]+arr[j]+arr[k]<=m)) tmp = arr[i]+arr[j]+arr[k];
      }
    }
  }
  printf("%d\n", tmp);
  return 0;
}
