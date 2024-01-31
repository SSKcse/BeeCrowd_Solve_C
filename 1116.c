#include<stdio.h>

int main()
{
    int n;
    float x,y;

    scanf("%d",&n);

    for(int i=1; i<=n;i++){

        scanf("%f %f", &x, &y);

        if (y==0){
            printf("divisao impossivel\n");
        }



        else {
            printf("%.1f\n",x/y);
        }
    }
    return 0;
}

