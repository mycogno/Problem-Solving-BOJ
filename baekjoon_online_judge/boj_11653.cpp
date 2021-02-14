#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);

    // 소수 행렬 구하기
    int arr[n+1];
    for(int i=2; i<=n; i++){
        arr[i] = 1;
    }
    for(int i=2; i*i <= n; i++){
        if(arr[i]){
            for(int j=i*i; j<n; j=j+i){
                if(arr[j]) arr[j] = 0;
            }
        }
    }

    //소인수분해
    int tmp = n;
    for(int i=2; i<=n; i++){
        if (arr[i]) {
            while(tmp % i == 0){
                printf("%d\n", i);
                tmp = tmp / i;
            }
        }
        if(tmp == 1) break;
    }
    return 0;
}