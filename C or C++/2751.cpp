#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
  int n;
  vector<int> v(n);
  scanf("%d\n", &n);
  for(int i=0; i<n; i++){
    int tmp;
    scanf("%d", &tmp);
    v.push_back(tmp);
  }
  printf("%lu\n", v.size());
  sort(v.begin(),v.end());
  for(int i=0; i<n; i++){
    printf("%d\n", v[i]);
  }
  return 0;
}
