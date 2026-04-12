/*
	Programa que realiza conversiones de unidades
	El usuario elegira entre las opciones dadas por un menú interactivo
	y el programa le dara el resultado correspondiente a la opcion elegida
*/
//Bibliotecas
#include <stdio.h>

//funciones
void Menu(void){
	printf("\nSeleccione la conversion que desea hacer\n");
	printf("1 Celsius -> Fahrenheit.\n");
	printf("2 Fahrenheit -> Celsius\n");
	printf("3 Kilometros -> Millas\n");
	printf("4 Millas -> Kilometros\n");
	printf("Seleccione una opcion:");
}

float Conversion(float Valor,int OPC){
	switch(OPC){
		case 1:
			return (Valor*(9.0/5.0))+32;
		break;
		case 2:
			return (Valor-32)*(5.0/9.0);
		break;
		case 3:
			return Valor*0.621371;
		break;
		case 4:
			return Valor/0.621371;
		break;
		default:;
	}
	return 0;
}

int main(void){
	int opc;
	float valor;
	do{
		valor=0;
		do{
			Menu();
			scanf("%d",&opc);
			if(opc<1||opc>4){
				printf("\nOpcion no valida");
			}
		}while(opc<1||opc>4);
		printf("Ingrese el valor que desea convertir:");
		scanf("%f",&valor);
		printf("Resultado: %.2f",Conversion(valor,opc));
		printf("\nDigite 0 para salir, cualquier otro numero para volver al menu:");
		scanf("%d",&opc);
	}while(opc!=0);
	return 0;
}
