#include <stdio.h>
int main (){
	
int multitres=0, numero, digitospares=0,digitosimpares=0, ultimodigito;	

printf("ingrese -1 para terminar el programa: ");
scanf("%i", &numero);

while (numero!=-1){
	
	if (numero%3==0){
		multitres=multitres+1;
	}
	
	while (numero!=0){
		ultimodigito=numero%10;
		
	if (ultimodigito%2==0){
		digitospares=digitospares+1;
	}	
	else
		digitosimpares=digitosimpares+1;
			
    numero=numero/10;
    printf("\nLos digitos pares son: %i", digitospares);
    printf("\nLos digitos impares son: %i", digitosimpares);	
     
	}
	
	printf("\n\ningrese -1 para terminar el programa: ");
    scanf("%i", &numero);
}

printf("Se ingresaron %i multiplos de tres", multitres);
	
	
	
}
