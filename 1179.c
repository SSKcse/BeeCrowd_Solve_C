#include <stdio.h>

int main()
{
    int n,even[5],odd[5];

    int x=0,y=0;

    for (int i = 0; i < 15; i++)
    {
        scanf("%d",&n);
        if(n%2 == 0)
        {
            even[x] = n;
            x++;
            if(x == 5)
            {
                for (int i = 0; i < 5; i++)
                {
                    printf("par[%d] = %d\n",i,even[i]);
                    even[i] = 0;
                }
                x = 0;
            }
        }
        else
        {
            odd[y] = n;
            y++;
            if (y == 5)
            {
                for (int j = 0; j < 5; j++)
                {
                    printf("impar[%d] = %d\n", j, odd[j]);
                    odd[j] = 0;
                }
                y = 0;
            }
        }

    }
    for (int k = 0; k < 5; k++)
    {
        if (odd[k] == 0)
        {
            break;
        }
        else
        {
            printf("impar[%d] = %d\n", k, odd[k]);
        }
    }

    for (int l = 0; l < 5; l++)
    {
        if (even[l] == 0)
        {
            break;
        }
        else
        {
            printf("par[%d] = %d\n", l, even[l]);
        }
    }
    return 0;
}
