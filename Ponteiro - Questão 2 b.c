#include<stdio.h>

void troca (int *i, int *j) { 
int temp; 
 temp = *i; 
*i = *j; 
*j = temp;
}
int main (){
	int a, b;
	printf ("\nDigite o primeiro numero: ");
	scanf ("%d", &a);
	printf ("\nDigite o segundo numero: ");
	scanf ("%d", &b);
	troca(&a, &b);
	printf ("%d %d", a, b);
}

