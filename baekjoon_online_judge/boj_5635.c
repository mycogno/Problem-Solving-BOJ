#include <stdio.h>
#include <string.h>

int main(){
  char name[15];
  int n,d,m,y;
  char oldest_name[15];
  char youngest_name[15];
  int o_d, o_m, o_y;
  int y_d, y_m, y_y;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    scanf("%s %d %d %d", name, &d, &m, &y);
    if(!i){
      strcpy(oldest_name, name);
      o_d = d;
      o_m = m;
      o_y = y;
      strcpy(youngest_name, name);
      y_d = d;
      y_m = m;
      y_y = y;
      continue;
    }
    else if(y<o_y){
      strcpy(oldest_name, name);
      o_d = d;
      o_m = m;
      o_y = y;
    }
    else if(y==o_y){
      if(m<o_m){
        strcpy(oldest_name, name);
        o_d = d;
        o_m = m;
      }
      else if(m==o_m){
        if(d<o_d){
          strcpy(oldest_name, name);
          o_d = d;
        }
      }
    }
    if(y>y_y){
      strcpy(youngest_name, name);
      y_d = d;
      y_m = m;
      y_y = y;
    }
    else if(y==y_y){
      if(m>y_m){
        strcpy(youngest_name, name);
        y_d = d;
        y_m = m;
      }
      else if(m==y_m){
        if(d>y_d){
          strcpy(youngest_name, name);
          y_d = d;
        }
      }
    }
  }
  printf("%s\n%s\n", youngest_name, oldest_name);
  return 0;
}
