/*Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:

SP – R$67.836,43
RJ – R$36.678,66
MG – R$29.229,88
ES – R$27.165,48
Outros – R$19.849,53

Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora.
************************************************************************************/

#include <stdio.h>
#define total 180759.98
#define sp 67836.43
#define rj 36678.66
#define mg 29229.88
#define es 27165.48
#define outros 19849.53

int main(){
    
    printf("Porcentagem de SP: %.2f\n", (sp*100)/total);
    printf("Porcentagem de RJ: %.2f\n", (rj*100)/total);
    printf("Porcentagem de MG: %.2f\n", (mg*100)/total);
    printf("Porcentagem de ES: %.2f\n", (es*100)/total);
    printf("Porcentagem de outros: %.2f", (outros*100)/total);
    return 0;
}
