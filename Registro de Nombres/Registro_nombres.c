/*
    ********************************************************************************************************************
    /   Nombre_Archivo : Registro de nombres
    /   Descrpcion : practica muestra como se resgirstan palabras con espacios en c para un arreglo bidimencional
	/				para ingresar nombres o mas bien cadenas con espacios
    /   Creado : 12/4/2026
    /   Autor : Itzcoyotl-Dev  (Alvaro)
    *********************************************************************************************************************
*/
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