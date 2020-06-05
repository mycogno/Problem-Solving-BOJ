#include <stdio.h>

int main(){
  int arr[9][9];
  int max = 0;
  int max_i, max_j;
  for(int i=0; i<9; i++){
    for(int j=0; j<9; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  for(int i=0; i<9; i++){
    for(int j=0; j<9; j++){
      if(arr[i][j]>max){
        max = arr[i][j];
        max_i = i+1;
        max_j = j+1;
      }
    }
  }
  printf("%d\n%d %d\n", max, max_i, max_j);
  return 0;
}
