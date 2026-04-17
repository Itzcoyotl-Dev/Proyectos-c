/*
    ********************************************************************************************************************
    /   Nombre_Archivo : pares impares
    /   Descrpcion : practica hace uso del % modulo para enncontrar pares e impares
    /   Creado : 9/4/2026
    /   Autor : Itzcoyotl-Dev  (Alvaro)
    *********************************************************************************************************************
*/

#include <stdio.h>
int main(){
    int numero;
    printf("Digite un numero:");
    scanf("%d",&numero);
    if(numero%2==0){
        printf("El numero es par.");
    } else {
        printf("El numero es impar.");
    }
    return 0;
}