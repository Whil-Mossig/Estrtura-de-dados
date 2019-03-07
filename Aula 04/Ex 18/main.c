#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, i, n, x;
    printf("Quantos numeros serao digitados? ");
    scanf("%d", &n);
    p=0;
    for(i=0; i<n; i++) {
        printf("\nDigite um numero: ");
        scanf("%d", &x);
        if (x>=0)
            p=p+1;
        else
            p=p;
    }
    printf("foram digitados %d numeros positivos", p);
    return 0;
}
