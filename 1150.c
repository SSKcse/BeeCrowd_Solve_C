#include <stdio.h>
int main()
{
    int x, z;
    int count=0;
    scanf("%d", &x);
    do
    {
        scanf("%d", &z);
    } while (x>=z);
    

    for (int i = x, j = 0; j < z; i++)
    {
       j = j + i;
       count++;
    }
    printf("%d\n",count);
    return 0;
}
