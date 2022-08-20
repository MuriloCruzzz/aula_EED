#include <stdio.h>
#include <math.h>

int main(){
    int  resultado, potencia;
    float raiz_1,numero;

    printf("Entre com um numero: \n");
    scanf("%f",&numero);

    if (numero < 0){
        printf("%f", pow(numero,2));   
    } else{
        raiz_1 = sqrt(numero);
        printf("%f", raiz_1);
    } 
}
