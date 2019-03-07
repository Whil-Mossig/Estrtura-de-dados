#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, i, n;
    float c;
    printf("Digite a temperatura suerior e inferior: ");
    scanf("%d %d", &s, &n);

    if (n<s)
        for (i=n; i<=s; i++){
            c=i-32;
            c=c*5;
            c=c/9;
            printf("%d convertida para Celsius eh: %.2f \n", i, c);
    }
    else
        printf("...ERROR...");
}
