#include <stdio.h>
#include <stdlib.h>
int main()
{
	char Carta[3];
	char Estado[50], Nome[30];
	char CARTA2[3];
	int Populacao, Pturismo; 
	char ESTADO2[50], NOME2[30];
	int POPULACAO2, PTURISMO2, escolha; 
	float Area, Pib;
	float AREA2, PIB2;

	printf("Vez do jogador 1\n");

	printf("Digite o primeiro Nome do Estado: ");
	scanf(" %s", &Estado);

	printf("Digite o Codigo da Carta: ");
	scanf(" %s", &Carta);

	printf("Digite o Nome da Cidade: ");
	scanf(" %s", &Nome);

	printf("Digite o Número de habitantes: ");
	scanf(" %d", &Populacao);

	printf("Digite a Área da cidade: ");
	scanf(" %f", &Area);

	printf("Digite o Pib da Cidade: ");
	scanf(" %f", &Pib);

	printf("Digite o Número de Pontos Turísticos: ");
	scanf(" %d", &Pturismo);

	
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");



	printf("Vez do segundo jogador 2\n");
	
	printf("Digite o Nome do Estado: ");
	scanf(" %s", &Estado);


	printf("Digite o Codigo da Carta: ");
	scanf(" %s", &CARTA2);

	printf("Digite o Nome da Cidade: ");
	scanf(" %s", &NOME2);

	printf("Digite o Número de habitantes: ");
	scanf(" %d", &POPULACAO2);

	printf("Digite a Área da cidade: ");
	scanf(" %f", &AREA2);

	printf("Digite o Pib da Cidade: ");
	scanf(" %f", &PIB2);

	printf("Digite o Número de Pontos Turísticos: ");
	scanf(" %d", &PTURISMO2);

	
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");

   printf("escolha atributo a ser comparado:\n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. Pib\n");
   printf("4. Número de pontos turisticos\n");
   printf("Escolha:\n");
   scanf("%d", &escolha);


switch (escolha)
{
case 1:
if (Populacao) {
	if (Populacao > POPULACAO2) {
		printf("Jogador 1 ganhou\n");
		printf("Carta Campeãm\n");
		printf("Estado: %s\n", Estado);
	    printf("Codigo da carta: %s\n", Carta);
	    printf("Nome da Cidade: %s\n", Nome);
	    printf("População: %d\n", Populacao);
	    printf("Área: %.1f km²\n", Area);
	    printf("Pib: %.1f milhões de reais\n", Pib);
	    printf("Número de Pontos Turisticos : %d\n", Pturismo);
	} else {
		printf("Jogador 2 ganhou\n");
		printf("Carta campeãm\n");
		printf("Estado: %s\n", ESTADO2);
	    printf("Codigo da carta: %s\n", CARTA2);
	    printf("Nome da Cidade: %s\n", NOME2);
	    printf("População: %d\n", POPULACAO2);
	    printf("Área: %.1f km²\n", AREA2);
	    printf("Pib: %.1f milhões de reais\n", PIB2);
	    printf("Número de Pontos Turisticos : %d\n", PTURISMO2);
	}
}
break;

case 2:
if (Area) {
	if (Area > AREA2) {
		printf("Jogador 1 ganhou\n");
		printf("Carta Campeãm\n");
		printf("Estado: %s\n", Estado);
	    printf("Codigo da carta: %s\n", Carta);
	    printf("Nome da Cidade: %s\n", Nome);
	    printf("População: %d\n", Populacao);
	    printf("Área: %.1f km²\n", Area);
	    printf("Pib: %.1f milhões de reais\n", Pib);
	    printf("Número de Pontos Turisticos : %d\n", Pturismo);
	} else {
		printf("Jogador 2 ganhou\n");
		printf("Carta campeãm\n");
		printf("Estado: %s\n", ESTADO2);
	    printf("Codigo da carta: %s\n", CARTA2);
	    printf("Nome da Cidade: %s\n", NOME2);
	    printf("População: %d\n", POPULACAO2);
	    printf("Área: %.1f km²\n", AREA2);
	    printf("Pib: %.1f milhões de reais\n", PIB2);
	    printf("Número de Pontos Turisticos : %d\n", PTURISMO2);
	}
}
break;

case 3:
if (Pib) {
	if (Pib > PIB2) {
		printf("Jogador 1 ganhou\n");
		printf("Carta Campeãm\n");
		printf("Estado: %s\n", Estado);
	    printf("Codigo da carta: %s\n", Carta);
	    printf("Nome da Cidade: %s\n", Nome);
	    printf("População: %d\n", Populacao);
	    printf("Área: %.1f km²\n", Area);
	    printf("Pib: %.1f milhões de reais\n", Pib);
	    printf("Número de Pontos Turisticos : %d\n", Pturismo);
	} else {
		printf("Jogador 2 ganhou\n");
		printf("Carta campeãm\n");
		printf("Estado: %s\n", ESTADO2);
	    printf("Codigo da carta: %s\n", CARTA2);
	    printf("Nome da Cidade: %s\n", NOME2);
	    printf("População: %d\n", POPULACAO2);
	    printf("Área: %.1f km²\n", AREA2);
	    printf("Pib: %.1f milhões de reais\n", PIB2);
	    printf("Número de Pontos Turisticos : %d\n", PTURISMO2);
	}
}
break;

case 4:
if (Pturismo) {
	if (Pturismo > PTURISMO2) {
		printf("Jogador 1 ganhou\n");
		printf("Carta Campeãm\n");
		printf("Estado: %s\n", Estado);
	    printf("Codigo da carta: %s\n", Carta);
	    printf("Nome da Cidade: %s\n", Nome);
	    printf("População: %d\n", Populacao);
	    printf("Área: %.1f km²\n", Area);
	    printf("Pib: %.1f milhões de reais\n", Pib);
	    printf("Número de Pontos Turisticos : %d\n", Pturismo);
	} else {
		printf("Jogador 2 ganhou\n");
		printf("Carta campeãm\n");
		printf("Estado: %s\n", ESTADO2);
	    printf("Codigo da carta: %s\n", CARTA2);
	    printf("Nome da Cidade: %s\n", NOME2);
	    printf("População: %d\n", POPULACAO2);
	    printf("Área: %.1f km²\n", AREA2);
	    printf("Pib: %.1f milhões de reais\n", PIB2);
	    printf("Número de Pontos Turisticos : %d\n", PTURISMO2);
	}
}
break;
default:
printf("Opção invalida");
	break;
}
	return 0;
}
