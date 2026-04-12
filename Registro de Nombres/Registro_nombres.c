#include <stdio.h>
#include <String.h>
#define TAM 5
#define NOM 100

int main(void){
	char Nombre[TAM][NOM];
	int i;
	printf("Registre los nobres\n");
	for(i=0;i<TAM;i++){
		printf("%d Nombre:",i+1);
		fgets(Nombre[i],NOM,stdin);
	}
	printf("\n");
	for(i=0;i<TAM;i++){
		printf("%d Nombre :%s",i+1,Nombre[i]);
	}
	
	return 0;
}
