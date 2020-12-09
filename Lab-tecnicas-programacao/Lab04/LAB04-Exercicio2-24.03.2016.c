#include <stdio.h>

void main()
{
    int termos, f1, f2, fib, i;

    printf("\N Digite quantos termos tera sua sequencia de fibonacci: ");
    scanf("%d", &termos);
    i=0;
    f1=0;
    f2=1;
    while ( i < termos-2)
    {
        fib = f1 + f2;
        f1 = f2;
        f2 = fib;
        printf("%d \n", fib);
        i++;
    }

}
