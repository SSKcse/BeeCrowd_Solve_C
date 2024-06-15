#include <stdio.h>
#include <math.h>

int main()
{
     int n;
     float x;
     
     scanf("%d", &n);
     for (int i=0;i<n;i++)
     {
        scanf("%f", &x);
        int count = 0;
        while(x>1)
        {
            x= x/2;
            count++;
        }
        printf("%d dias\n",count);

     }

    return 0;
}
