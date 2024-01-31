#include<stdio.h>

int main()
{
    int x, i,j,y,z;
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
        scanf("%d",&x);

        z=0;

        for(j=1;j<=x;j++)
        {
            if(x%j==0)
                z++;
        }
        if (z==2)
        {
            printf("%d eh primo\n", x);
        }
        else
        {
            printf("%d nao eh primo\n", x);
        }
    }
    return 0;
}
