#include<stdio.h>
#include<locale.h>

struct habitantes{
	int idade;
	char sexo;
	float salario;
	int n_filhos;
};
typedef struct habitantes pessoas;
int main (){
	setlocale (LC_ALL, "portuguese");
	pessoas p[3];
	float media = 0;
	int i;
	for (i=0;i<3;i++){
	printf ("\nQual a sua idade? ");
	scanf ("%d", &p[i].idade);
	printf ("\nQuantos filhos voc� t�m? ");
	scanf ("%d", &p[i].n_filhos);
	printf("\nQual o seu sexo? ");
	scanf("%c", &p[i].sexo);
	getchar ();
	printf ("\nQual o seu sal�rio? ");
	scanf ("%f", &p[i].salario);
	media = media + p[i].salario;
	system ("cls");
	}
	printf ("\nA m�dia salarial dos habitantes selecionados �: %.2f", media);
	return (0);	
}
