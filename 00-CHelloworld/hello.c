#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *salida;
    salida = fopen("output.txt","w"); //usa el parámetro "w" para reescribir
    
    fprintf(stdout,"Hello, World!\n"); //imprime por consola
    fprintf(salida,"Hello, World!\n"); //guarda en output.txt

    fclose(salida);
    
    return 0;
}