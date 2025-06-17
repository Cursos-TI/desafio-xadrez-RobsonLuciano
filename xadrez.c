#include <stdio.h>
//Função Torre
void moverTorre(int casas){
    if (casas > 0){
        printf("Torre direita\n");
        moverTorre (casas - 1);
    }
}

//Função Bispo
void moverBispo(int casas){
    if(casas > 0){
        for ( int i = 0; i < 1; i++){
            for (int j = 0; j < 1; j++){printf("Bispo cima ");}
            printf("direita\n");
        }
        moverBispo(casas - 1);
    }
}

//Função Rainha
void moverRainha(int casas){
    if (casas > 0){
        printf("Rainha esquerda\n");
        moverRainha (casas - 1);
    }
}

//Função cavalo
void moverCavalo(int casas){
    if (casas > 0){
        for (int i = 1; i < 10; i++) {
        if (i == 1 || i == 2) {
            printf("Cavalo cima\n"); //Movimento orizontal ou vertical do Cavalo 2x 
            continue;} 
        if (i == 4) {
            printf("Cavalo direita\n"); //Movimento pepenticular do cavalo
            break;} 
        }
        moverCavalo (casas - 1);
    }
}

int main(){
    //Movimentação

    //Torre
    moverTorre(5);
    printf("\n");

    //Bispo
    moverBispo(5);
    printf("\n");

    //Rainha
    moverRainha(8);
    printf("\n");

    //Cavalo
    moverCavalo(1);
    printf("\n");
    

    return 0;
}