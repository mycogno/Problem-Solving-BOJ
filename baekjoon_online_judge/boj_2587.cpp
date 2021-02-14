#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
  int sum = 0;
  int arr[5];
  for(int i=0; i<5; i++){
    int tmp;
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  sort(arr, arr+5);
  printf("%d\n%d\n", sum/5, arr[2]);
  return 0;
}
