#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float n;

    for (i=1; i<=20; i++){
        n=i*2.54;
        printf("%d contem %.2f \n", i, n);
    }
    return 0;
}
