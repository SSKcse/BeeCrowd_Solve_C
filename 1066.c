#include<stdio.h>

int main()
{

    int i,X,even=0,odd=0,pos=0,neg=0;

    for(i=1;i<=5;i++){

        scanf("%d",&X);

        if(X%2==0){
        even++;
        }

        if(X%2!=0){
        odd++;
        }

         if(X>0){
        pos++;
         }

         if(X<0){
        neg++;

       }

    }

    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);

    return 0;
}
