#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, i;
    for(i=0; i<5; i++){
        printf("Digite um numero: ");
        scanf("%d", &n);
        n=n*n;
        printf("O quadrado do numero inserido eh: %d \n", n);
    }
    return 0;
}
