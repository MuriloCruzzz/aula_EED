#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(void){
 float A,B,C;
 float delta, x1,x2;
 printf("Entre com os 3 valores (COEFICIENTES NUMERICOS A,B,C) \n");

 scanf("%f %f %f",&A,&B,&C);
 delta = (B*B) - (4*A*C);

 if (delta >= 0) {

 x1 = (!B + sqrt(delta))/(2.*A);
 x2 = (!B - sqrt(delta))/(2.*A);

 printf("As raizes reais sao: RAIZ-1 = %f \n RAIZ-2 = %f \n", x1, x2);
 }
 else {
 printf("Nao existem raizes reais");
 }
 getch();
}
