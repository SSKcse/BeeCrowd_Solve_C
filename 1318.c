/*
#include <stdio.h>

int main()
{
    int n,m,t,count=0;
    int array[10000];
    while (1)
    {
        scanf("%d %d", &n, &m);
        if(n == 0 && m == 0)
        {
            break;
        }
            for(int a=0;a<n;a++)
            {
                array[a] = 0;
            }

            for (int i = 0; i < m; i++)
            {
                scanf("%d", &t);
                if(!array[t-1])
                {
                    array[t-1] = 1;
                }
                else

                    if(array[t-1] == 1)
                    {
                        count++;
                        array[n-1]++;
                    }


            }


        printf("%d\n", count);
    }


    return 0;
}





#include <stdio.h>
int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        if (!n && !m)
            break;
        int arr[m + 5];
        int freq[n + 5];
        for (int i = 0; i <= n; i++)
            freq[i] = 0;
        for (int i = 1; i <= m; i++)
        {
            int val;
            scanf("%d", &val);
            freq[val]++;
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (freq[i] > 1)
                ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int n, m, t, count = 0;
    int array[10001];
    while (scanf("%d %d", &n, &m) != EOF)
    {
        if (n == 0 && m == 0)
        {
            break;
        }
        memset(array, 0, sizeof(array));
        count = 0;

        for (int i = 0; i < m; i++)
        {
            scanf("%d", &t);
            array[t]++;

            if (array[t] == 2)
            {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
