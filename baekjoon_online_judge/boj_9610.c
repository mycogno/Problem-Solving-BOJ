#include <stdio.h>

int main(){
  int n,x,y;
  int p1=0, p2=0, p3=0, p4=0, axis=0;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    scanf("%d %d", &x, &y);
    if(!x||!y) axis++;
    else if(x>0 && y>0) p1++;
    else if(x<0 && y>0) p2++;
    else if(x<0 && y<0) p3++;
    else p4++;
  }
  printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d\n", p1, p2, p3, p4, axis);
  return 0;
}
