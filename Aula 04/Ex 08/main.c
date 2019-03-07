#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;
    float n;
    for(i=0; i<15; i++){
        printf("Digite um numero: ");
        scanf("%f", &n);
        n=sqrt(n);
        printf("O quadrado do numero inserido eh: %.2f \n", n);
    }
    return 0;
}
