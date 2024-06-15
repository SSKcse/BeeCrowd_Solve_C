#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        int j,k;
        j=i*i;
        k=i*i*i;
        printf("%d %d %d\n",i,j,k);

        int y,z;
        y=j+1;
        z=k+1;
        printf("%d %d %d\n", i, y, z);
    }

    return 0;
}