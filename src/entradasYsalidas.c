#include<stdio.h>

int main(){

    int q = 0;
    float w = 0.0;
    char e;

    printf("Escribe el valor de la variable q (int) \n");
    scanf("%i",&q);

    printf("Escribe el valor de la variable w (float) \n");
    scanf("%f",&w);

    printf("Escribe el valor de la variable e (char) \n");
    scanf("%c",&e);

    printf("El valor que escribiste de la variable q es:  %i \n",q);
    printf("El valor que escribiste de la variable w es:  %f \n",w);
    printf("El valor que escribiste de la variable e es:  %c \n",e);

    return 0;
}