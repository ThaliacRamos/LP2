#include <stdlib.h>
#include <stdio.h>

int main ()
{
	int num, f1=0, f2=1, f3;
	scanf("%d", &num);
	
	if(num < 0)
	{
		printf("Numero inválido");
	}
	else
	{
		printf("0 - 1");
		
		while (f2 < num)
		{
			f3 = f2 + f1;
			printf(" - %d", f3);
			f1=f2;
			f2=f3;
		}
		printf("\n");
		system("pause");
		return 0;
	}
}