#include<stdio.h>

int main()
{

char Name;
double Salary,Sold;

scanf("%s %lf %lf",&Name,&Salary,&Sold);

printf("TOTAL = R$ %.2lf\n", (Sold*.15)+Salary );

    return 0;
}

