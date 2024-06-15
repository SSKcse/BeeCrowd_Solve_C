#include <stdio.h>
int main()
{
    int x,y;
    int _1st = 1;
    scanf("%d %d", &x,&y);

    int end = y/x;
    int Qunn = x;

    for (int i = 1; i <= end; i++)
    {
        printf("%d",_1st);
        for(int j = _1st + 1; j<=Qunn; j++)
        {
            printf(" %d",j);
        }
        printf("\n");
        _1st = _1st + x;
        Qunn = Qunn + x; 
        
    }

    return 0;
}
