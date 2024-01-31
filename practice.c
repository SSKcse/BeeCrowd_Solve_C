#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int h = n / 3600;
    int rem = n % 3600;
    int m = rem / 60;
    rem = rem % 60;
    int s = rem;
    printf("%d:%d:%d\n", h, m, s);



    return 0;
}
