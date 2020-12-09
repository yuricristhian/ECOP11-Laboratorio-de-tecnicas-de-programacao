#include <stdio.h>
#include <math.h>

void main()
{
    double x,y,z;
    printf("Digite um numero: ");
    scanf("%lf", &x);
    y = x;
    if (x >= 0)
    {
        y = pow(x,2);
        z = sqrt(x);
        printf("\n O numero digitado elevado ao quadrado e igual a %.2lf ", y);
        printf("\n A raiz quadrada do numero digitado e: %.2lf\n", z);


    }else
    {
        printf("O valor digitado deve ser positivo\n");
    }

    system("pause");

}

