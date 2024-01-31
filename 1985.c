#include<stdio.h>

int main()
{
    int num,product,quantity;

    double X=0,Y=0,Z=0,A=0,B=0;

    scanf("%d",&num);

    for(int i=0; i<num;i++)
    {
       scanf("%d %d", &product,&quantity);

       if(product==1001){
          X= 1.5*(double)quantity;
       }
       if(product==1002){
        Y= 2.5*(double)quantity;

       }
       if(product==1003){
        Z= 3.5*(double)quantity;

       }
       if(product==1004){
         A= 4.5*(double)quantity;

       }
       if(product==1005){
         B= 5.5*(double)quantity;

       }

    }
    printf("%.2lf\n",X+Y+Z+A+B);




    return 0;




}
