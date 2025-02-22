#include <stdio.h>

// Desafio de Xadrez - MateCheck

//declaraçao das variaveis e constantes
int numCasas = 0;
char direcao[3];

// Implementação de Movimentação do Bispo
void movimentarBispo(int numCasas, char direcao[3]){
    while(numCasas > 0){
        //verifica primeira direçao
        if(direcao[0] == 'C'){
            printf("Cima\n");
        } 
        else if(direcao[0] == 'B'){
            printf("Baixo\n");
        }

        while(numCasas > 0){
        //verifica segunda direcao
            if(direcao[1] == 'D'){
                printf("Direita\n");
            }
            else if(direcao[1] == 'E'){
                printf("Esquerda\n");
            }
            break;
        }

        //chamada recursiva
        movimentarBispo(numCasas - 1, direcao);
        break;
    }
}

// Implementação de Movimentação da Torre
void movimentarTorre(int numCasas, char direcao){
    while(numCasas > 0){
        //verifica a direçao
        if(direcao == 'C'){
            printf("Cima\n");
        } 
        if(direcao == 'B'){
            printf("Baixo\n");
        }
        if(direcao == 'D'){
            printf("Direita\n");
        }
        if(direcao == 'E'){
            printf("Esquerda\n");
        }

        //chamada recursiva
        movimentarTorre(numCasas - 1, direcao);
        break;
    }
}

// Implementação de Movimentação da Rainha
void movimentarRainha(int numCasas, char direcao){
    if(numCasas > 0)
    {
        //verifica a direcao
        if(direcao == 'C'){
            printf("Cima\n");
        } 
        if(direcao == 'B'){
            printf("Baixo\n");
        }
        if(direcao == 'D'){
            printf("Direita\n");
        }
        if(direcao == 'E'){
            printf("Esquerda\n");
        }

        //chamada recursiva
        movimentarRainha(numCasas - 1, direcao);
    }
}

// Nível Aventureiro - Movimentação do Cavalo
void movimentarCavalo(char direcao[3]){
    int i = 0;
    //movimenta duas casas
    for(int i = 0; i < 2; i++){
        //verifica a direcao
        if(direcao[0] == 'C'){
            printf("Cima\n");
        } 
        else if(direcao[0] == 'B'){
            printf("Baixo\n");
        }
        //depois de chegar à segunda casa executa 1 movimento perpendicular
        while(i == 1){
            //verifica a direcao
            if(direcao[1] == 'D'){
                printf("Direita\n");
            }
            else if(direcao[1] == 'E'){
                printf("Esquerda\n");
            }
            break;
        }
    }
}

int main() {
    //inicializaçao das variaveis
    direcao[0] = 'C'; //cima
    direcao[1] = 'D'; //direita
    numCasas = 5;

    //chamada dos metodos
    printf("\nBispo movimentando... \n");
    movimentarBispo(numCasas, direcao);

    printf("\nRainha movimentando... \n");
    movimentarRainha(8, 'E');

    printf("\nTorre movimentando... \n");
    movimentarTorre(numCasas, 'D');

    printf("\nCavalo movimentando... \n");
    movimentarCavalo(direcao);

    printf("\n");

    return 0;
}
