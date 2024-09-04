#include <stdio.h>

int main()
{
    char array[10];
    int V,i;

    scanf("%d", &V);
    for(i=0;i<10;i++)
    {
        array[i] = V;
        printf("N[%d] = %d\n",i,V);
        V = V * 2;
    }
    return 0;
}
