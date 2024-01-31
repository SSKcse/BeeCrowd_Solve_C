#include<stdio.h>

int main()
{
    int a,b,c,d,e;

    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    if (a<b && c<d && d<e && b<c)
    {
        printf("C\n");
    }
    else if (a>b && c>d && d>e && b>c)
    {
        printf("D\n");
    }
    else
    {
        printf("N\n");

    }
    return 0;
}

