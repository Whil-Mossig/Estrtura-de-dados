#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float n;
    for(i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%f", &n);
        n=n/2;
        printf("A metade do numero inserido eh: %.2f \n", n);
    }
    return 0;
}
