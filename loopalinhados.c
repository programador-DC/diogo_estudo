#include <stdio.h>

int main(){

int i, j;
int numero;

for (i = 1; i <= 26; i++)
{
    numero = 1;
    for (j = 1; j <= i; j++)
    {
        printf("%d ", numero);
        ++numero;
    }

    printf("\n");
}


return 0;

}