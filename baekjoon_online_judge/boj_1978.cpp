#include <stdio.h>
#include <algorithm>
using namespace std;

int arr[101] = {1,};
int main(){
  int n,count=0;
  int numarr[100];
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    scanf("%d", &numarr[i]);
  }
  sort(numarr,numarr+n);
  for(int i=2; i<=numarr[n-1]; i++){
    if(arr[i]==1){
      for(int j=i*i; j<=numarr[n-1]; j+=i){
        arr[j] = 0;
      }
    }
  }
  for(int i=2; i<=n; i++){
    if(arr[i]==1) count++;
  }
  printf("%d\n", count);
  return 0;
}
