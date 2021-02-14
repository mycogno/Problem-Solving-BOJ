#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int n;
  char k[60];
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    scanf("%s", k);
    if(!(atoi(&k[strlen(k)-1])%2)) printf("even\n");
    else printf("odd\n");
  }
  return 0;
}
