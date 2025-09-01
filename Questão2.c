#include <stdio.h>
int main() {
  float peso, altura; 
  printf ("Diga seu peso; ");
    scanf ("%f",&peso);
    printf ("Diga sua altura: ");
    scanf ("%f",&altura);
    float imc = peso/(altura*altura);
    if (imc<18.5){
        printf ("Abaixo do peso");
    } else if (imc <24.9){
        printf ("Peso normal");
    } else if (imc>=25 && imc<29.9){
        printf ("Sobrepeso");  
    }
     else if (imc>=30 && imc <34.9){
        printf ("Obesidade I");
    }
     else if (imc>=35 && imc <39.9){
        printf ("Obesidade II");
    } else {
        printf ("Obesidade III");
    }
return 0;

}

