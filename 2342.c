#include <stdio.h>
int main()
{
    int sum, x, y, s;
    char ch;

    scanf ("%d %d %c %d", &sum, &x, &ch, &y);

    switch(ch)
    {
    case '+':
        s = x+y;
        if(s>sum)
        {
            printf("OVERFLOW\n");
        }
        else{
          printf("OK\n");
        }
        break;
    case '*':
        s = x * y;
           if(s>sum)
        {
            printf("OVERFLOW\n");
        }
        else{
          printf("OK\n");
        }
       }
    return 0;
}


