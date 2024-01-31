#include <stdio.h>

 int main()
 {
  int day;

  scanf("%d", &day);

  int Year;

  Year= day/365;
  day = day - (Year*365);

  int month;

  month= day/30;
  day = day - (month*30);

  printf("%d ano(s)\n",Year);
  printf("%d mes(es)\n",month);
  printf("%d dia(s)\n",day);

  return 0;
 }
