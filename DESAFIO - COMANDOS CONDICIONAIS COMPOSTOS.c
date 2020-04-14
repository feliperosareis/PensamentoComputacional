#include <stdio.h>

void main()
{
	int regiao, qtdePecas, rastreamento, km;
	float fretePeca, totalFrete, totalFreteKm, desconto, combustivel, taxaRastreamento = 0.0;
	
	printf("Informe a regiao de destino: \n1 - Sul \n2 - Sudeste \n3 - Centro-Oeste\n");
	scanf("%d", &regiao);
	
	printf("\nInforme a distancia em Km ate o destino: ");
	scanf(" %d", &km);
	
	printf("\nInforme o preco do litro do combustivel: ");
	scanf(" %g", &combustivel);
	
	printf("\nInforme a quantidade de pecas: ");
	scanf("%d", &qtdePecas);
	
	
	if (regiao == 1)
	{
		fretePeca = 1.0;
		desconto = 0;
		if (qtdePecas > 1000)
		{
			desconto = 0.1;
		}
		
	}
	else if (regiao == 2)
	{
		fretePeca = 1.2;
		desconto = 0;
		if (qtdePecas > 1000)
		{
			desconto = 0.12;
		}
	}
	else if (regiao == 3)
	{
		fretePeca = 1.3;
		desconto = 0;
		if (qtdePecas > 1000)
		{
			desconto = 0.13;
		}
	}
	else
	{
		printf("A regiao informada eh invalida!");
	}
	
	
	printf("\nDeseja Rastreamento? \n1 - Sim \n2 - Nao \n");
	scanf(" %d", &rastreamento);
	
	if (rastreamento == 1)
	{
		taxaRastreamento = 200.0;
		printf("\nTaxa de Rastreamento = R$ %g", taxaRastreamento);
	}
	
	totalFrete = ( 1000 * fretePeca + ((qtdePecas - 1000) * (1 - (1 * desconto))) + taxaRastreamento );
	totalFreteKm = (km * combustivel) + taxaRastreamento;
	
	printf("\nValor do frete pelas Pecas = R$ %.2f", totalFrete);
	printf("\nValor do frete por Km = R$ %.2f", totalFreteKm);
	printf("\nValor Total do frete = R$ %.2f", totalFrete + totalFreteKm);
	
}
