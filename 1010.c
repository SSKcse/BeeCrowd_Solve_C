#include <stdio.h>
    int main()
    {
         int a1,b1,a2,b2;
         double c1,c2,result;

         scanf("%d %d %lf", &a1, &b1, &c1);
         scanf("%d %d %lf", &a2, &b2, &c2);

         result = (b1*c1)+(b2*c2);
         printf("VALOR A PAGAR: R$ %.2lf\n", result);
         return 0;
    }
