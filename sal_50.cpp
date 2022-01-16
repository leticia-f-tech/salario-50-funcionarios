#include <stdio.h>
#include <stdlib.h>

// esta carniça faz rodar um programa que pede um reajuste de salarios e depois o salario de cada colaborador.Depois mostra o maior salario de cada um.

int main ()
{
	float reajuste, salario_atual, salario_novo, maior;
	int cont;
	maior = 0;
		printf ("\n Digite a porcentagem de reajuste: \n ");
		scanf ("%f", &reajuste);
		for (cont = 1; cont <=10; cont++){
				printf("\nDigite o seu salario: \n");
				scanf("%f", &salario_atual);
			salario_novo = (salario_atual + (reajuste*salario_atual/100));
			printf("\nO Salario reajustado eh de %.2f\n", salario_novo);
		if (salario_novo>maior)
		{
			maior = salario_novo;
		}
		}
		printf("\n o maior salario eh: %.2f\n", maior);
	return 0;	
}