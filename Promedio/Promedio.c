/*
    ********************************************************************************************************************
    /   Nombre_Archivo : Promedio
    /   Descrpcion : practica usa arreglo para guardar calificaciones y sacar un promedio 
    /   Creado : 9/4/2026
    /   Autor : Itzcoyotl-Dev  (Alvaro)
    *********************************************************************************************************************
*/
#include <stdio.h>

#define TAM 5

int main(void){
	int i;
	float Calif[TAM],prom=0.0;
	printf("Ingrese las calificaciones del alumno\n");
	for(i=0;i<TAM;i++){
		do{
			printf("Ingrese la calificacion %d: ",i+1);
			scanf("%f",&Calif[i]);
			if(Calif[i]<0||Calif[i]>10){
				printf("Ingrese una calificacion valida entre 0 y 10\n");
			}
		}while(Calif[i]<0||Calif[i]>10);
		prom+=Calif[i];
	}
	printf("Promedio: %.2f",prom/TAM);
	return 0;
}
