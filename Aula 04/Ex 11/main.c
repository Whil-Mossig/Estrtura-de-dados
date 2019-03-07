#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a, b;
    b=0;
    for(i=0; i<5; i++){
        printf("Digite um numero: ");
        scanf("%d", &a);
        if (a>b)
            b=a;
        else
            b=b;
    }
    printf("\n \nO maior deles eh: %d", b);
    return 0;
}
