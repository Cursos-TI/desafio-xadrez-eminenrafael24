#include <stdio.h>

int main() {
    int i, numero;

    printf("Digite um número de casas que o Bispo irá andar...\n");
    scanf("%d", &numero);
    printf("Digite um número de casas que a Torre irá andar...\n");
    scanf("%d", &numero);
    printf("Digite um número de casas que a Rainha irá andar...\n");
    scanf("%d", &numero);

    for (i = 1; i <= 5; i++)
    {
        printf("O Bispo andou %d casas da diagonal Superior Direita\n", i);
    }

    for (i = 1; i <= 5; i++)
    {
        printf("A Torre andou %d casas para a direita\n", i);
    }

    for (i = 1; i <= 8; i++)
    {
        printf("A Rainha andou %d casas para a esquerda\n", i);
    }
    
    
    
    return 0;


}