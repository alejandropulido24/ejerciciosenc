#include <stdio.h>
int main(){
	
int i, num, sp=0, sn=0, cp=0;

for (i=1; i<7; i++){
	printf ("ingrese un numero: ");
	scanf("%i",&num);
	
	if (num>0){
		sp=sp+num;
		cp=cp+1;
	}
	else
		sn=sn+num;
		
}

printf ("\nla suma de los negativos es: %i", sn);

if (cp!=0) {
 
printf ("\nEl promedio de los positivos es: %i", sp/cp);

}


}
