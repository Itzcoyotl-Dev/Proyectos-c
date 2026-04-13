/* 
    Escriba un programa en C que pida un número al usuario e indique si es par o impar.
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