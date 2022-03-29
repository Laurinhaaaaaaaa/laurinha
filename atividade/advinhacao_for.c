#include <stdio.h> //INCLUINDO UMA BIBLIOTECA (UM MONTE DE FUNCAO)
#define NUMERO_DE_TENTATIVAS 5

int main(){
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de advinhacao *\n");
    printf("******************************************\n");

    //int numerodetentativas = 5;
    int numeropensado = 42;
    int chute;

    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {
        printf("Tentativas %d de 5\n" , i, NUMERO_DE_TENTATIVAS);
      printf("Qual o seu chute? ");

    scanf("%d", &chute);
    printf("Seu chute foi o numero %d \n", chute);

    if(chute < 0 ){
    printf("O numero pensado e invalido");
    i--;
    continue;

    } 
    
     int acertou = (chute == numeropensado);
     int maior = chute > numeropensado;
     int menor = chute < numeropensado;
 
       if(acertou) { 
        printf("Parabens, voce acertou! \n");
        printf("jogue de novo, voce e um bom jogador!\n");
        //parar de executar o for
        break;
        }
      
       else if(maior) {
         printf("O numero digitado foi maior que o numero aleatorio\n");
        }
     
       else {
         printf("O numero digitado foi menor que o numero aleatorio\n");
        }
    }  
        
}        
    

