#include <stdio.h>


void potencia(int a, int b){
    int resultado = 1;
    for(int i = 0; i < b; i++){
        resultado = resultado * a;
}

printf("O resultado e %d\n", resultado);
}
int main(){

int a;
int b;

printf("Digite seu numero: ");
scanf("%d", &a);
printf("Elevado: ");
scanf("%d", &b);

potencia(a,b);
}