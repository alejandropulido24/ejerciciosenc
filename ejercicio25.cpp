#include <stdio.h>
int main(){
	
int year;

printf("ingrese un a�o: ");
scanf("%i",&year);
 if (year %4 !=0 or ( year % 100==0 and year % 400!=0 ) ){
 	printf ("el a�o no es bisiesto");
	 }
 	else
 	printf ("el a�o es bisiesto");
 	
 }



