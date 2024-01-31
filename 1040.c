#include<stdio.h>

int main()
{
    double N1, N2, N3, N4;

    scanf("%lf %lf %lf %lf",&N1, &N2, &N3, &N4);

    double sum,extra;
    sum=(N1*2 + N2*3 + N3*4 + N4*1)/10;

    printf("Media: %.1f\n", sum);

    if (sum>= 7.0)
    {
      printf("Aluno aprovado.\n");
    }

    else if (sum>= 5.0)
    {
      printf("Aluno em exame.\n");
      scanf("%lf", &extra);

      printf("Nota do exame: %.1f\n", extra);
        if (extra + sum / 2.0 > 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (extra + sum ) / 2.0);
    }
    else{
        printf("Aluno reprovado.\n");
    }
    return 0;
}
