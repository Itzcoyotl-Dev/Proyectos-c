#include <stdio.h>
#include <string.h>
#define TAM 100
#define USU 3

int main(void){
	char Usuario[USU][TAM]={{"root"},{"admin"},{"servidor"}};
	char Registro[TAM];
	int i,intentos=0,bandera=0;
	do{	
		if(intentos>0&&intentos<3){
			printf("Nuevamente ");
		}
		printf("Ingrese su usuario:");
		fgets(Registro,TAM,stdin);
		Registro[strcspn(Registro,"\n")] = '\0';
		for(i=0;i<USU;i++){
			if(strcmp(Registro,Usuario[i])==0){
				bandera=1;
				break;
			}
		}
		if(bandera!=1){
			intentos++;
			printf("Credenciales Inválidas \n");
			printf("Intento %d\n",intentos);
		}
	}while(intentos<3&&bandera==0);
	
	if(bandera==1){
		printf("Acceso concedido.");
	}else{
		printf("Acceso Denegado.\n");	
		printf("Excediste el numero de intentos\n");	
	}
	return 0;
}
