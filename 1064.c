#include <stdio.h>
int main()
{
    float X,sum=0,Avarage;
    int i,count=0;

    for(i=1;i<=6;i++){
        scanf("%f",&X);

        if(X>0){
            sum=sum+X;
            count++;
        }
    }
     printf("%d valores positivos\n",count);
     printf("%.1f\n",Avarage=sum/count);


 return 0;
}
