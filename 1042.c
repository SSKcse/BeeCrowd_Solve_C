#include <stdio.h>

int main()
{
    int a, b, c, temp;

    scanf("%d %d %d", &a, &b, &c);

    int x = a, y = b, z = c;

    if (c<b){
        temp = c;
        c = b;
        b = temp;
    }
    if(c<a){
        temp = c;
        c = a;
        a = temp;
    }
    if(b<a){
        temp = b;
        b = a;
        a = temp;
    }
    printf("%d\n%d\n%d\n", a, b, c );
    printf("\n");
    printf("%d\n%d\n%d\n", x, y, z );
    return 0;
}
