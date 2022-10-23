#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

struct consumo{
	int t_dias;
	char nome[15];
	float potencia;
};
typedef struct consumo eletro;
int main (){
	setlocale (LC_ALL, "portuguese");
	eletro p[5];
	int tempo;
	int i;
	float consumo_total;
	for (i=0;i<5;i++){
	printf ("\nQual é o eletrodoméstico? ");
	gets (p[i].nome);
	printf ("\nQual a sua potência em KW? ");
	scanf ("%f", &p[i].potencia);
	printf("\nQuantas horas funciona por dia? ");
	scanf("%d", &p[i].t_dias);
	getchar ();
	printf ("\n");
	}
	printf ("\nQuantos dias o aparelho ficou funcionando? ");
	scanf ("%d", &tempo);
	for (i=0;i<5;i++){
	printf ("\nO consumo total do eletrodoméstico %s é = %.2f\n", &p[i].nome, tempo * p[i].potencia * p[i].t_dias);	
	}
	return (0);	
}
