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
