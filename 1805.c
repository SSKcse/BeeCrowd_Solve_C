#include<stdio.h>
int main()
{
   long long int a,b,n,s;

    scanf("%lld %lld",&a,&b);

         n=(b-a)+1;
         s=((float)n/2)*(2*a+(n-1));
         printf("%lld\n",s);


    return 0;
}
