//18
#include <stdio.h>

int main() {
	int soma, maior, menor, numero,i;
	
	printf("Entre com o 1o numero inteiro: ");
 	scanf("%i", &numero); 
 	
 	maior=numero;
 	menor=numero;
 	soma += numero;
	
	if (numero<=10){
		for(i=1; i<10; i++){
 		printf("Entre com o %do numero inteiro: ",i+1);
 		scanf("%i", &numero);
 		soma += numero;

 		if(numero>maior)
 			maior=numero;
 		else
 			if(numero<menor)
 				menor=numero;
 		} 
 		
 	float media = (float) soma / 10;
	printf("A média dos números é: %.2f", media);
 	printf("\nO menor numero entrado é: %d", menor);
	printf("\nO maior numero entrado é: %d", maior);
	printf("\nA soma dos números é: %i", soma);
		
	}
	else{
		printf("Número entre 0 a 10");
	}
	
}