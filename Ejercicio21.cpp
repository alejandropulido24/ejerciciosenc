#include <stdio.h>
int main() {
	
	int n1,n2,n3;
	
	printf ("ingrese un numero: ");
	scanf("%i", &n1);
	
	printf ("ingrese otro numero: ");
	scanf("%i", &n2);
	
	printf("ingrese un tercer numero: ");
	scanf("%i", &n3);
	
	if (n1>n2 and n1>n3){
		printf("el numero mayor es: %i", n1);
	}
	else if(n2>n1 and n2>n3){
		printf("el numero mayor es: %i", n2);
	}	
	else if(n3>n1 and n3>n2){
		printf("el numero mayor es: %i", n3);
	}
	
	else if (n1>n3 and n1==n2){
        printf("el numero mayor es: %i", n1);
	}
    else if (n1>n2 and n1==n3){
        printf("el numero mayor es: %i", n1);
	}
    else if (n2>n1 and n2==n3){
        printf("el numero mayor es: %i", n2);
	}
    else {
    	printf("Los numeros ingresados son iguales");
	}
    
}
