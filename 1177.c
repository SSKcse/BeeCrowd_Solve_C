#include <stdio.h>

int main()
{
    int array[1000];
    int V,Z=0;

    scanf("%d", &V);
    for (int i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, Z);
        Z++;
        if(Z == V) Z=0;
    }
    return 0;
}
