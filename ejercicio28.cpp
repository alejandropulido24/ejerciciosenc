#include <stdio.h>
int main(){

int num, i;

do{
	printf("introduce un numero: ");
	scanf("%i", &num);
} while (num<=0);

for (i=1; i<=num/2; i++){
	if (num %i==0){
		printf("%i", i);
	}
}

printf("%i", num);


}
