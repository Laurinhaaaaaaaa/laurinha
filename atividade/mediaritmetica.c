#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("Escola Senai\n");
    printf("Laura Gimenez Almeida\n");
    printf("Escola: Senai Euclides Facchini\n");

    int numero;
    int quantidade;
    int media = 0

    printf("De quantos numeros voce deseja calcular a media ");
    scanf("%d", &quantidade);

    for(int i = 0; i < quantidade; i++){
        printf("Digite um numero ");
        scanf("%d," &numero);
        media = media + numero;
    }

    double resultado = media / quantidade;
    printf("A media dos numeros fornecidos e: %.1f",resultado);
}