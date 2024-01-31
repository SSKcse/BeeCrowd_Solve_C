#include <stdio.h>

int main()
{

    float old_salary, New_salary,Money_earned;
    scanf("%f",&old_salary );

    if(old_salary>=0 && old_salary<=400.00){

        Money_earned=(old_salary*.15);
        New_salary=Money_earned+old_salary;

        printf("Novo salario: %.2f\n", New_salary );
        printf("Reajuste ganho: %.2f\n", Money_earned );
        printf("Em percentual: 15 %%\n");
    }

    else if(old_salary>=400.01 && old_salary<=800.00)
    {
        Money_earned=(old_salary*.12);
        New_salary=Money_earned+old_salary;

        printf("Novo salario: %.2f\n", New_salary );
        printf("Reajuste ganho: %.2f\n", Money_earned );
        printf("Em percentual: 12 %%\n");
    }
    else if(old_salary>=800.01 && old_salary<=1200.00)
    {
        Money_earned=(old_salary*.10);
        New_salary=Money_earned+old_salary;

        printf("Novo salario: %.2f\n", New_salary );
        printf("Reajuste ganho: %.2f\n", Money_earned );
        printf("Em percentual: 10 %%\n");
    }
    else if(old_salary>=1200.01 && old_salary<=2000.00)
    {
        Money_earned=(old_salary*.07);
        New_salary=Money_earned+old_salary;

        printf("Novo salario: %.2f\n", New_salary );
        printf("Reajuste ganho: %.2f\n", Money_earned );
        printf("Em percentual: 7 %%\n");
    }
    else if(old_salary>=2000.00)
    {
        Money_earned=(old_salary*.04);
        New_salary=Money_earned+old_salary;

        printf("Novo salario: %.2f\n", New_salary );
        printf("Reajuste ganho: %.2f\n", Money_earned );
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
