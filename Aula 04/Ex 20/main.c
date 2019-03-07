#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;
    float n;
    for(i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%f", &n);
        if(n < 0)
            printf("Digite um numero positivo por favor \n");
        else{
            n=sqrt(n);
            printf("O quadrado do numero inserido eh: %.2f \n", n);
            }
    }
    return 0;
}
