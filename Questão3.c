#include <stdio.h>
int main() {
    int cedulas [7] = {100, 50, 20, 10, 5, 2,1};
    int valor, i, qtd;
    printf ("Digite o valor:");
    scanf ("%d",&valor);
    for (i=0; i<7; i++) {
        qtd = valor/cedulas[i];
        valor = valor - (qtd * cedulas [i]);
        printf ("%d cedula(s) de R$ %d\n",qtd,cedulas[i]);
    }
    return 0;
}