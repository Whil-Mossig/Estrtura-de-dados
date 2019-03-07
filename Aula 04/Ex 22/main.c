#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n, i, c;

 printf("Digite um numero: ");
 scanf("%d", &n);
 c=0;
 for(i=2; i<=n; i++){
    if(n%i==0)
        c++;
 }
    if(c == 1)
        printf("O numero %d eh primo", n);
    else
        printf("O numero %d nao eh primo", n);
}
