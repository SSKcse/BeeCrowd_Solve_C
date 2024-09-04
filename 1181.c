#include <stdio.h>

int main()
{
    int L;
    char T[2];
    double M[12][12];
    double sum=0, ratio=0;

    scanf("%d", &L);
    scanf("%s", &T);
    for(int i=0;i<=11;i++)
    {
        for(int j=0;j<=11;j++)
        {
            scanf("%lf", &M[i][j]);
            if(j == L)
            sum +=M[i][j];
        }

    }
    if(T[0] =='S')
    {
        printf("%.1lf\n",sum);
    }
    else if (T[0] == 'M')
    {
        ratio = sum/12.0;
        printf("%.1lf\n", ratio);
    }

    return 0;
}
