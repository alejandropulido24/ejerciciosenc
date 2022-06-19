#include <stdio.h>
#include <stdlib.h>
int main(){
int a, calificacion, aprobados=0, cantidad=0, saprobados=0;

printf("escriba '1' para analizar las calificaciones: ");
scanf("%d", &a);
while (a==1){
	
printf("ingrese la calificacion de un alumno: ");
scanf("%i",&calificacion);
if (calificacion>4) {
	aprobados= aprobados+1;
	saprobados=saprobados+calificacion;
	
}

cantidad=cantidad+1;

printf("escriba '1' para analizar las calificaciones: ");
scanf("%d", &a);


}	


printf("\nEl porcentaje de alumnos aprobados es: %i", (aprobados*100) /cantidad );
printf("\nPromedio de los aprobados: %i", saprobados/aprobados);
	
}
