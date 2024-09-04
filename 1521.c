
#include <stdio.h>
unsigned short arr[60];

int main(void)
{

    unsigned short i;
    unsigned short list;

    while (1)
    {

        scanf("%hu", &list);

        if (list == 0)
            break;

        for (i = 1; i <= list; ++i)
            scanf("%hu", &arr[i]);

        scanf("%hu", &i);

        while (arr[i] != i)
            i = arr[i];

        printf("%hu\n", i);
    }
}
