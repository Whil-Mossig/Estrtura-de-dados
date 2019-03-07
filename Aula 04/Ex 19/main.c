#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, esp;
    esp = 0;
    do{
        printf("Digite um numero: ");
        scanf("%d", &n);
        if(n > 100 && n < 200)
            esp++;
    }while(n!=0);

    printf("Voce digitou %d numeros entre 100 e 200.", esp);
}
