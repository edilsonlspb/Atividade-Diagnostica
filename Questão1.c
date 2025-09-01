#include <stdio.h>
int main() { 
float a,b,c;
printf ("Diga o valor do primeiro lado: ");
scanf ("%f",&a);
printf ("Diga o valor do segundo lado: ");
scanf ("%f",&b);
printf ("Diga o valor do terceiro lado: ");
scanf ("%f",&c);
if (a==b && b==c){
    printf ("O triangulo e equilatero");
} else if (a==b || b==c || a==c){
        printf ("O triangulo e isosceles");
    }
    else {
        printf ("O triangulo e escaleno");
    }
return 0;

}