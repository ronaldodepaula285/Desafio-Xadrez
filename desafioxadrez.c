#include <stdio.h>

    // Funções recursivas para mover as peças na direção solicitada
    void MoverCima(int n) {
    if (n <= 0) return;
    printf("cima\n");
    MoverCima(n - 1);
}

    void MoverEsquerda(int n) {
    if (n <= 0) return;
    printf("esquerda\n");
    MoverEsquerda(n - 1);
}   

    void MoverDireita(int n) {
    if (n <= 0) return;
    printf("direita\n");
    MoverDireita(n - 1);
}

int main() {
    printf("***Desafio Xadrez***\n");

    // Movimento da torre utilizando recursividade
    printf("\n--Movimento da torre--\n");
    printf("Movendo a torre 5 casas para cima:\n");
    MoverCima(5);
    

    // while usado recursividade para mover a Rainha oito casas para esquerda
    printf("\n--Movimento da Rainha--\n");
    printf("Movendo a Rainha 8 casas para esquerda:\n");
    MoverEsquerda(8);
    
    // loop aninhados usado para mover o Bispo cinco casas na diagonal para cima/direita
    printf("\n--Movimento do Bispo--\n");
    printf("Movendo o Bispo 5 casas na diagonal para cima/direita:\n");
    for (int i = 0; i < 5; i++) {
        printf("cima\n");
        printf("direita\n");
    }   

    // loop aninhado usado para mover o Cavalo três casas em L (duas para cima e uma para direita)
    printf("\n--Movimento do Cavalo--\n");
    printf("Movendo o Cavalo 3 casas em L (duas para cima e uma para direita):\n");
    for (int i = 0; i < 2; i++) {
        printf("cima\n");
    } for (int j = 0; j < 1; j++) {
        printf("direita\n");
    }
    printf("\n***Fim do Desafio Xadrez***\n");

    return 0;
}   