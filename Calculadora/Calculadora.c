/*
	Calculadora, este programa realiza operaciones simples 
	Estas se muestran como un menú interactivo donde el usuario puede
	seleccionar la operacion deseada, e inglesar valores para
	 obtener un resultado.
*/

//Bloque de Bibliotecas
#include <stdio.h>

//Bloque de funcuiones
float Operacion(float A,float B,int OPC){
	switch(OPC){
		case 1:
			return A+B;
		break;
		case 2:
			return A-B;
		break;
		case 3:
			return A*B;
		break;
		case 4:
			return A/B;
		break;
	}
	return 0;
}

int main(){
	int opc;
	float a,b,c;
	//estructura del programa
	do{
		a=0,b=0,c=0;
		do{
			//menú
			printf("\t Calculadora\n");
			printf("1 Suma.\n");
			printf("2 Resta.\n");
			printf("3 Producto.\n");
			printf("4 Division.\n");
			printf("Elija su opcion:");
			scanf("%d",&opc);
			//sentencia de desición se muestra cuando el usuario no elije una opción mostrada  
			if(opc<1||opc>4){
				printf("\nopcion incorrecta elija nuevamente.\n");
			}
		}while(opc>4 || opc<1);
		//pidiendo valores
		printf("\nDigite los valores que desea para realizar la operacion\n");
		printf("Valor A:");
		scanf("%f",&a);
		printf("Valor B:");
		scanf("%f",&b);
		if(b==0&&opc==4){
			printf("El valor es indeterminado.\n");
		}else{
			c=Operacion(a,b,opc);
			printf("Resultado: %.2f",c);
		}
		//mensaje que se muetra para retornar al menú o salir del programa
		printf("\n\nVolver al menu digite 1 o cualquier numero para salir:");
		scanf("%d",&opc);
	}while(opc==1);
	return 0;
}
