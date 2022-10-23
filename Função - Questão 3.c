#include<stdio.h>

int menor_valor(int a, int b){
	if (a < b) {
	return a;
	} else {
	return b;	
	}
}
int main(){
	int x, y;
	printf ("\nDigite o primeiro valor: ");
	scanf ("%d", &x);
	printf ("\nDigite o segundo valor: ");
	scanf ("%d", &y);
	printf ("\nO menor valor dos numeros digitados e: ");
	printf ("%d", menor_valor(x, y));
}
