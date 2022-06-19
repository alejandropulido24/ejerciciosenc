#include <stdio.h>
int main(){

int total=0, num, ud;
printf("ingrese un numero: ");
scanf("%i", &num);

while (num!=0){
	ud=num%10;
	total=total+ud;
	num=num/10;
	
}

printf("\nla suma de los digitos es: %i", total);	
}

	


