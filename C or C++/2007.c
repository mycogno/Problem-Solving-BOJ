#include <stdio.h>

int main(){
  char day[7][7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
  int count = 0;
  int x,y;
  scanf("%d %d", &x, &y);
  switch(x){
    case 1: break;
    case 2:
      count += 31;
      break;
    case 3:
      count += 59;
      break;
    case 4:
      count += 90;
      break;
    case 5:
      count += 120;
      break;
    case 6:
      count += 151;
      break;
    case 7:
      count += 181;
      break;
    case 8:
      count += 212;
      break;
    case 9:
      count += 243;
      break;
    case 10:
      count += 273;
      break;
    case 11:
      count += 304;
      break;
    case 12:
      count += 334;
      break;
  }
  count += y-1;
  int q = count % 7;
  printf("%s\n", day[q]);

  return 0;
}
