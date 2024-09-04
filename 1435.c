
#include <stdio.h>

int main(void)
{
    int n;
    int x;
    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;

        int arr[n][n];
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=n;++j)
            {
                x=i;
                if(j<x) x=j;
                if(n-i+1 < x) x= n-i+1;
                if(n-j+1 < x) x= n-j+1;

                printf("%3d",x);

                if(j<n) printf(" ");
                else printf("\n");

            }
        }
        printf("\n");
    }

    return 0;
}
