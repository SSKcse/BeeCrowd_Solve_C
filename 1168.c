#include <stdio.h>

int main()
{
    int N, V,j;
    long long led;
    char num[100];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%s", &num);
        j = 0, led = 0;

        while (1)
        {
            
            if (num[j] == '\0')
                break;
            if (num[j] == '1')
                led = led + 2;
            if (num[j] == '2')
                led = led + 5;
            if (num[j] == '3')
                led = led + 5;
            if (num[j] == '4')
                led += 4;
            if (num[j] == '5')
                led += 5;
            if (num[j] == '6')
                led += 6;
            if (num[j] == '7')
                led += 3;
            if (num[j] == '8')
                led += 7;
            if (num[j] == '9')
                led += 6;
            if (num[j] == '0')
                led += 6;

            j++;
        }
        printf("%lld leds\n", led);
    }

    return 0;
}
