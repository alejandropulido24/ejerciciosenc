#include <stdio.h>
int main(){

int i, numero, factorial=1;
printf("digite el numero para hallar el factorial: ");
scanf("%i", &numero);

for(i=1; i<=numero;i++){
	factorial=factorial*i;
	
}
printf("\nEl factorial del numero dado es: %i", factorial);
	
}
