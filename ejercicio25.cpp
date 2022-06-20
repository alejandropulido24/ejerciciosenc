#include <stdio.h>
int main(){
	
int year;

printf("ingrese un año: ");
scanf("%i",&year);
 if (year %4 !=0 or ( year % 100==0 and year % 400!=0 ) ){
 	printf ("el año no es bisiesto");
	 }
 	else
 	printf ("el año es bisiesto");
 	
 }



