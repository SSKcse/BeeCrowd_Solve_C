#include<stdio.h>
int main()
{
	int Num;
	while(1)
	{
		scanf("%d",&Num);

		if(Num==2002)
		{
			printf("Acesso Permitido\n");
			break;
		}
		else
		{
			printf("Senha Invalida\n");
		}
	}
	return 0;
}
