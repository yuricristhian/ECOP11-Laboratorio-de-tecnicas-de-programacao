#include <stdio.h>

void main()
{
    float a, b, c;
    printf("\nDigite o valor dos lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if((a+b < c)||(a+c < b)||(b+c < a))
        printf("Invalido, isso nao e um triangulo\n");

    else if ((a==b)&&(b==c))
        printf("esse e um triangulo equilatero\n");

    else if((a==b)||(b==c)||(c==a))
        printf("esse e um triangulo isosceles\n");

    else if((a!=b)&&(b!=c)&&(c!=a))
        printf("esse e um triangulo escaleno\n");

    system ("pause");
}


