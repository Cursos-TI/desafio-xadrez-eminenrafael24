#include <stdio.h>
 
int main() {
    int i, j;

    char letra;

    for (i = 3; i <= 5; i++)
    {
        letra = 'A';

        for(j = 2; j <= i; j++)
        {
           printf("%c\t ", letra);
           letra++;
        }

        printf("\n");
    }
    



}