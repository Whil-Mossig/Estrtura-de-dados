#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    n=0;
    for(i=1; i<=100; i++){
        n=n+i;
    }
    printf("A soma de 1 a 100 eh: %d", n);
    return 0;
}
