#include <stdio.h>

int main()
{
    int n;
    int temp = 0, s, res = 0;
    int arr[1000], ex[1000];

    while (scanf("%d", &n) == 1 && n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]); 
            ex[i] = arr[i];
        }

        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (ex[i] > ex[j])
                {
                    temp = ex[i];
                    ex[i] = ex[j];
                    ex[j] = temp;
                }
            }
        }

        s = ex[n - 2];

        for (int i = 0; i < n; ++i)
        {
            if (s == arr[i])
            {
                res = i + 1;
                break; 
            }
        }

        printf("%d\n", res);
    }

    return 0;
}
