#include <stdio.h>

int main() {
	char  estado1, estado2, nome1[20], nome2[20];
	char  code1[4], code2[4];
	unsigned long int   population1, population2;
	int   turismo1, turismo2;
	float area1, pib1, area2, pib2, pibcapita1, pibcapita2, densidade1, densidade2;

//estado
	printf ("INSIRA O ESTADO(DE a A h) DA CIDADE 1:\n");
	 scanf (" %c", &estado1);
	printf ("INSIRA O ESTADO(DE a A h) DA CIDADE 2:\n");
	 scanf (" %c", &estado2);

//codigo
	printf ("INSIRA O CÓDIGO DA CIDADE 1: \n");
	 scanf (" %s", &code1);
	printf ("INSIRA O CÓDIGO DA CIDADE 2:\n");
	 scanf (" %s", &code2);

//nome
	printf ("INSIRA O NOME DA CIDADE 1:\n");
	 scanf (" %s", &nome1);
	printf ("INSIRA O NOME DA CIDADE 2:\n");
	 scanf (" %s", &nome2);

//populaC'C#o
	printf ("INSIRA A POPULAÇÃO DA CIDADE 1:\n");
	 scanf (" %d", &population1);
	printf ("INSIRA A POPULAÇÃO DA CIDADE 2:\n");
	 scanf (" %d", &population2);

//area
	printf ("INSIRA A ÁREA DA CIDADE 1:\n");
	 scanf (" %f", &area1);
	printf ("INSIRA A ÁREA DA CIDADE 2:\n");
	 scanf (" %f", &area2);

//PIB
	printf ("INSIRA O PIB DA CIDADE 1:\n");
	 scanf ("%f", &pib1);
	printf ("INSIRA O PIB DA CIDADE 2:\n");
	 scanf ("%f", &pib2);

//turismo
	printf ("INSIRA QUANTIDADE DE PONTOS TURCSTICOS DA CIDADE 1:\n");
	 scanf (" %d", &turismo1);
	printf ("INSIRA QUANTIDADE DE PONTOS TURCSTICOS DA CIDADE 2:\n");
	 scanf (" %d", &turismo2);

	pibcapita1 = pib1 / population1;
	pibcapita2 = pib2 / population2;

	densidade1 = population1 / area1;
	densidade2 = population2 / area2;

//comparação
    printf ("Comparação de cartas: Densidade Populacional\n");
    printf ("Carta 1 - %s : %.2f \n", nome1, densidade1);
    printf ("Carta 2 - %s : %.2f \n", nome2, densidade2);

    if ( densidade1 < densidade2 ) {
      printf ("Resultado: Carta 1 (%s) venceu!", nome1);
    } 
    else {
      printf ("Resultado: Carta 2 (%s) venceu!", nome2);
    }

    return 0;
}
