#include<stdio.h>

void categoria(int a){
	if (a >= 5 && a <= 7)
		printf ("Infantil A");
	if (a >= 8 && a <= 10)
		printf ("Infantil B");
	if (a >=11 && a <= 13)
		printf ("Juvenil A");
	if (a >=14 && a <= 17)
		printf ("Juvenil B");
	if (a >=18)
		printf ("Adulto");	
}
int main(){
	int x;
	printf ("\nInforme a idade do nadador: ");
	scanf ("%d", &x);
	categoria(x);
}
