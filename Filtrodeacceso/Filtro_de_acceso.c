#include <stdio.h>

#define TAM 5
int main(void){
	int Id[TAM]={1002,1023,1007,1229,2222};
	int i,bandera=0,id;
	printf("Ingrese su ID a 4 digitos: ");
	scanf("%d",&id);
	for(i=0;i<TAM;i++){
		if(id==Id[i]){
			bandera = 1;
			break;
		}
	}
	
	if(bandera == 1){
		printf("Acceso concedido.");
	}else{
		printf("Acceso denegado.");
	}
	return 0;
}
