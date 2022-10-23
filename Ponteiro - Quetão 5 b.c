#include<stdio.h>

int main (){
int a=50, b=100; 
int *p; 
int *q; 
p = &a; 
q = &b; 
int c = *p + *q; 
printf("%d %d %d %d %d %d %d %d %d %d %d %d", a, b, c, p, q, &a, &b, &c, &p, &q, *p, *q);	
}

