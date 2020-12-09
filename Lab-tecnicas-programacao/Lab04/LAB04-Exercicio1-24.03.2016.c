#include <stdio.h>

void main ()
{
    int n, soma;
    n = 0;
    soma = 0;
    while (n <= 100)
    {
       if ((n%3 == 0) || (n%5 == 0))
       {
            soma = soma + n;
       }
        n++;
    }
    printf(" \n a soma dos numeros multiplos de 3 ou 5 ate 100 e: %d \n\n", soma);
    system("pause");
}
