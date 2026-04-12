#include <stdio.h>
#define TAM 6

int Mayor(int A[TAM]){
	int aux = A[0];
	int i;
	for(i=0;i<TAM;i++){
		if(A[i]>aux){
			aux = A[i];
		}
	}
	return aux;
}

int Menor(int B[TAM]){
	int aux = B[0];
	int i;
	for(i=0;i<TAM;i++){
		if(B[i]<aux){
			aux = B[i];
		}
	}
	return aux;
}

int main(void){
	int Array[TAM];
	int i;
	printf("Ingresa 6 numeros enteros\n");
	for(i=0;i<TAM;i++){
		printf(" %d : ",i+1);
		scanf("%d",&Array[i]);
	}
	printf("\nNumero Mayor encontrado: %d ",Mayor(Array));
	printf("\nNumero Menor encontrado: %d ",Menor(Array));
	
	return 0;
}
