#include<stdio.h>

int main()
{
    int i,n,x;
    char a;
    int c1=0,c2=0,c3=0;
    double p,q,r;

    scanf("%d",&n);
   for(i=0;i<n;i++)
    {
       scanf("%d %c",&x,&a);
       if('C'==a)
       {
           c1=c1+x;
       }
       if('R'==a){
        c2=c2+x;
       }
       if('S'== a){
        c3=c3+x;
       }

    }

    int sum= c1+c2+c3;
    printf("Total: %d cobaias\n", sum);
    printf("Total de coelhos: %d\n", c1);
    printf("Total de ratos: %d\n", c2);
    printf("Total de sapos: %d\n", c3);



    p=(c1/(sum*1.00))*100.00;
    q=(c2/(sum*1.00))*100.00;
    r=(c3/(sum*1.00))*100.00;


    printf("Percentual de coelhos: %.2lf %\n", p);
printf("Percentual de ratos: %.2lf %\n", q);
printf("Percentual de sapos: %.2lf %\n", r);


return 0;
}
