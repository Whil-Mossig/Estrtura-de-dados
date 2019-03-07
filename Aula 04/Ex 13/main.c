#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, som, qua;
    i=0;
    som=0;

    do{
        printf("Digite um numero: ");
        scanf("%d", &n);
        qua=n*n;
        i=i+1;
        if (qua<=225)
            som=qua+som;
    }while(i<20);

    printf("A soma dos numeros foi de: %d", som);
    return 0;
}
