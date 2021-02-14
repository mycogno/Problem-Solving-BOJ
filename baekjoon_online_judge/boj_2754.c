#include <stdio.h>
#include <string.h>

int main(){
  char score[2];
  scanf("%s", score);
  if(!strcmp("A+", score)) printf("4.3\n");
  else if(!strcmp("A0", score)) printf("4.0\n");
  else if(!strcmp("A-", score)) printf("3.7\n");
  else if(!strcmp("B+", score)) printf("3.3\n");
  else if(!strcmp("B0", score)) printf("3.0\n");
  else if(!strcmp("B-", score)) printf("2.7\n");
  else if(!strcmp("C+", score)) printf("2.3\n");
  else if(!strcmp("C0", score)) printf("2.0\n");
  else if(!strcmp("C-", score)) printf("1.7\n");
  else if(!strcmp("D+", score)) printf("1.3\n");
  else if(!strcmp("D0", score)) printf("1.0\n");
  else if(!strcmp("D-", score)) printf("0.7\n");
  else if(!strcmp("F", score)) printf("0.0\n");
  return 0;
}
