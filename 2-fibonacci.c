/*2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

IMPORTANTE:
Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;*/

#include<stdio.h>

int main ()
{
    int n, termo, ultimo, penultimo;
    n = termo = ultimo = penultimo = 0;
    
 
    puts("Digite: ");
    scanf("%d", &n);
    
    for (int i=0; i<n; i++){    
        termo = ultimo + penultimo;
        
        if(termo == n)
        {
            printf("\nValor: %u, pertence a sequencia de Fibonacci", n);            
            return 0;
        }
        
        ultimo = termo;
        penultimo = ultimo;
    }
    printf("\nValor: %u, nao pertence a sequencia de Fibonacci", n);            
    return 0;
}
