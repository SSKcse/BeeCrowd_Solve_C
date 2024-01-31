#include<stdio.h>
int main()
{
    int code, quantity;
    float price = 0;

    scanf("%d %d", &code, &quantity);
    if (code == 1)
    {
        price  = (float) (4.00 *quantity);
    }
    else if (code == 2)
    {
        price  = (float) (4.50 *quantity);
    }
    else if (code == 3)
    {
        price  = (float) (5.00 *quantity);
    }
    else if (code == 4)
    {
        price  = (float) (2.00 *quantity);
    }
    else if (code == 5)
    {
        price  = (float) (1.50 *quantity);
    }

    printf("Total: R$ %.2f\n",price);

}
