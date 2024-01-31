#include <stdio.h>

 int main()
 {
  int s;

  scanf("%d", &s);

  int h;

  h= s/3600;
  s = s - (h*3600);

  int m;

  m= s/60;
  s = s - (m*60);

  printf("%d:%d:%d\n",h,m,s);
  return 0;
 }
