#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val, n, i, mai, men;
    mai=0;
    men=9999999999;
    printf("Quantos numeros vao ser digitados? ");
    scanf("%d", &n);

    for (i=0; i<n; i++){
        printf("Digite um valor: ");
        scanf("%d", &val);
        if (val>mai)
            mai=val;
        else
            mai=mai;
        if (val<men)
            men=val;
        else
            men=men;
    }
    printf("O maior numero foi: %d \n", mai);
    printf("O menor numero foi: %d", men);
    return 0;
}
