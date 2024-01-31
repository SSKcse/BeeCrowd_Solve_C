#include<stdio.h>

int main()
{

    int i,X,count=0;
    for(i=1;i<=5;i++){

        scanf("%d",&X);
    if(X%2==0){
        count++;

       }

    }

    printf("%d valores pares\n",count);

    return 0;
}
