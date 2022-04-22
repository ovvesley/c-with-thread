#include <stdio.h>
#include <threads.h>

struct ptr {
    int valor;
    struct ptr *prox;
}

struct ptr *INICIO;

int main(){
    printf("hello wolrd \n");
    printf("Tive acesso");
    return 0;
}