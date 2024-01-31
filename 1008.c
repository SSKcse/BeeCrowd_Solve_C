#include<stdio.h>

int main()
{

int Number,WH;
float money;

scanf("%d %d %f", &Number,&WH,&money );

printf("NUMBER = %d\n",Number);
printf("SALARY = U$ %.2f\n",WH*money);

    return 0;
}
