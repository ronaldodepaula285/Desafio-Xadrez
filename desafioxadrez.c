#include <stdio.h>



int main() {
    printf("Desafio Xadrez\n");

    // for usado para rmovimetar a torre cinco casas para cima
    printf("Movimento da torre\n");
    for (int i = 0; i < 5; i++){
    printf("Uma casa para cima\n");
     }
    // while usado para mover a Rainha oito casas para esquerda
    printf("Movimento da Rainha\n");
    int i = 1;
    while (i <= 8){
    printf("Uma casa para esquerda\n");
    i++;
    }
    // do while usado para mover o Bispo cinco casas na diagonal para cima/direita
    printf("Movimento do Bispo\n");
    int j = 1;
    do {
    printf("Uma casa diagonal para cima/direita\n");
    j++;
    } while (j <= 5);
// loop aninhado usado para mover o Cavalo três casas em L (duas para cima e uma para direita)
    printf("Movimento do Cavalo\n");
    int movimentocompleto = 1; // Variável de controle para o movimento completo do cavalo
    
    while (movimentocompleto--)
    {
        for (int k = 0; k < 2; k++) {
            printf("Uma casa para cima\n");
        }
        printf("Uma casa para direita\n");

    }


    return 0;
}   