#include <stdio.h>

    void bispo(int numero){
        if (numero > 0)
        {
            bispo(numero - 1 );  // Chama a si mesma com n - 1
            printf("%d\n", numero);  // Imprime o valor atual de n
        }
    }

    void torre(int numero2){
        if (numero2 > 0)
        {
            torre(numero2 - 1);
            printf("%d\n", numero2);
        }
    }

    void rainha(int numero3){
         if (numero3 > 0)
         {
            rainha(numero3 - 1);
            printf("%d\n", numero3);
         }
    }

    void cavalo(int numero4){
        for (int numero4 = 0; numero4 < 10; numero4++) {
            if (numero4 == 0) continue; // Pula a iteração quando i é 5
            if (numero4 == 5) break;    // Sai do loop quando i é 8
            printf("%d\n", numero4);
        }

    }

    int main() {
        int numero = 5;
        printf("Bispo Casas diagonais Direitas: \n");
        bispo(numero);

        int numero2 = 5;
        printf("Torre casas a Direita: \n");
        torre(numero2);

        int numero3 = 8;
        printf("Rainha Casas a Esquerda: \n");
        rainha(numero3);

        int numero4 = 0;
        printf("Cavalo andou: \n");
        cavalo(numero4);

        return 0;
    }