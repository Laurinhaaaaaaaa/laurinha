#include <stdio.h>

int main(){

    printf("Laura Gimenez Almeida\n");

    int Pedro = 19;
    int Ismael = 20;
    int Joana = 15;

    printf("Digite a idade de Pedro: \n");
    scanf("%d", &Pedro);
    printf("Digite a idade de Ismael: \n");
    scanf("%d", &Ismael);
    printf("Digite a idade de Joana: \n");
    scanf("%d", &Joana);

    if(Joana < Pedro){
        printf("Pedro e mais velho\n");
    }

    if(Joana < Ismael){
        printf("Ismael  e mais velho\n");

}else{