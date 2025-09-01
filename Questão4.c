#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int numero, chute, tentativas = 0;
    srand(time(NULL));
    numero = rand() & 100;
    printf("Desiste logo.\n");
    do {
        printf ("Escreva um numero de 0 a 100: ");
        scanf ("%d", &chute);
        tentativas++;
        if (chute < numero) {
            printf ("Muito baixo! Tente de novo.\n");
        } else if (chute>numero) {
            printf ("Muito alto dessa vez! Tente de novo.\n");
        } else {
            printf ("Depois de muitas tentativas, você acertou! O numero era %d.\n", numero);  
            return 0;
        }
    } while (tentativas <10);
    printf ("Suas tentativas acabaram! O numero era %d.\n", numero);
    return 0;
}