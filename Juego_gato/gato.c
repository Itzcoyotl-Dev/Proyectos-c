/*
    Juego del gato
*/

#include <stdio.h>

#define COLUMNA 3
#define FILA 3
//funcion que muestra la tabla del juego
void TablaGato(char tabla[FILA][COLUMNA]){
    int i,j;
    printf("\tJuego del Gato\n");
    for(i=0;i<FILA;i++){
        printf("\t  ");
        for(j=0;j<COLUMNA;j++){
            if(j==1){
                printf("| %c |",tabla[i][j]);
            }else{
                printf(" %c ",tabla[i][j]);
            }
        }
        if(i<FILA-1){
            printf("\n\t  -----------");
        }
        printf("\n");
    }
}

//funcion que vacia o asigna un espacio para que se vea limpia
void Limpiar(char tabla[FILA][COLUMNA]){
    int i,j;
    for(i=0;i<FILA;i++){
        for(j=0;j<COLUMNA;j++){
            tabla[i][j] = ' ';
        }
    }
}

//funcion que busca al ganador buscando en horizontal y vertical
int Ganador(char tabla[FILA][COLUMNA]){
    int filaX = 0,columnaX = 0;
    int filaO = 0,columnaO = 0;
    int i,j;
    int vacio=0;
    for(i=0;i<FILA;i++){
        for(j=0;j<COLUMNA;j++){ 
            if(tabla[i][j]==' '){
                vacio++;
            }else if(tabla[i][j]=='x'){
                //busca x en horizontal
                columnaX++;
                
            }else if(tabla[i][j]=='o'){
                //busca o en horizontal
                columnaO++;
                
            }

            if(tabla[j][i]=='x'){
                //busca x en vertical
                filaX++;
            }else if(tabla[j][i]=='o'){
                //busca o en vertical
                filaO++;
            }
        }
        //reinicia la busqueda o termina la busqueda
        if(columnaX==3||filaX==3){
            return 1;
        }else if(columnaO==3||filaO==3){
            return 2;
        }else{
            columnaO = 0;
            columnaX = 0;
            filaO = 0;
            filaX = 0;
        }
    }
    //bloque que busca al ganador en diagonales
    if(tabla[0][0]=='x'&&tabla[1][1]=='x'&&tabla[2][2]=='x'||tabla[2][0]=='x'&&tabla[1][1]=='x'&&tabla[0][2]=='x'){             
        return 1;
    }else if(tabla[0][0]=='o'&&tabla[1][1]=='o'&&tabla[2][2]=='o'||tabla[2][0]=='o'&&tabla[1][1]=='o'&&tabla[0][2]=='o'){
        return 2;
    }
    //si no encuentra regresa 3 como empate
    if(vacio==0){
        return 3;
    }else{
        return 0;
    }
}

//bloque que verifica si las coordenadas ingresadas estan vacias o son correctas
int Verificar(int fila, int columna, char tabla[FILA][COLUMNA]){
    if(fila<0||fila>=FILA){
        return 1;
    }else if(columna<0||columna>=COLUMNA){
        return 1;
    }else if(tabla[fila][columna]==' '){
        //retorno de que la casilla esta vacia
        return 0;
    }else if(tabla[fila][columna]=='o'||tabla[fila][columna]=='x'){
        //retorno de casilla llena;
        return 1;
    }
}

int main(){
    //Matríz tabla del juego tipo char
    char tabla[FILA][COLUMNA];
    int repetir,jugador=1;
    int fila,columna;
    //do while para volver a jugar
    do{
        Limpiar(tabla);
        // do while para repetir la partida hasta que gane un jugador o un empate
        do{
            TablaGato(tabla);
            //muesta el turno
            if(jugador==1){
                printf("\nJugador 1");
            }else if(jugador==2){
                printf("\nJugador 2");
            }
            //bloque que mostrara el mensaje y pedira las coordenadas
            printf("\nIngrese las coordenadas de 0 a 2 ejemplo (1,0):");
            scanf("%d,%d",&fila,&columna);
            //bloque para verificar si es correcta o esta llena las coordenadas dadas
            if(Verificar(fila,columna,tabla)==1){
                printf("Casilla llena o coordenas erroneas Vuelva a intentas\n");
            }else{
                // aqui te quedaste estas viendo como reiniciar sin acabar
                if(jugador==1){
                    tabla[fila][columna]='x';
                    jugador = 2;
                }else{
                    tabla[fila][columna]='o';
                    jugador = 1;
                }
            }
        }while(Ganador(tabla) == 0);
        printf("\tFin del Juego\n");
        TablaGato(tabla);
        //bloque que pondra al ganador o empate
        if(Ganador(tabla)==1){
            printf("\nJugador 1 Gana");
        }else if(Ganador(tabla)==2){
            printf("\nJugador 2 Gana.");
        }else if(Ganador(tabla)==3){
            printf("\nEmpate.");
        }
        jugador = 1;
        //bloque que preguntara si desea volver a jugar
        printf("\n\nDigite 1 para volver a jugar en caso contrario cualquier numero:");
        scanf("%d",&repetir);
    }while(repetir == 1);
    return 0;
}