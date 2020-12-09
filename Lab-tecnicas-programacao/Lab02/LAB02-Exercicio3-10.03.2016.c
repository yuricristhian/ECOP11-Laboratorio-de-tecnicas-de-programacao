#include <stdio.h>
#include <math.h>
void main()
{
    double a, b, c, x, y, d;
    printf("Digite o valor de A, B e C\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("Digite o valor de X e Y\n");
    scanf("%lf %lf", &x, &y);

    d=((a*x)+(b*y)+c)/(sqrt(a*a+b*b));
    printf("o valor da distancia para os pontos ( %.0lf, %.0lf ) \n para a equacao %.0lf x %.0lf + %.0lf x %.0lf + %.0lf e de: %.3lf \n", x, y, a, x, b, y, c, d);

    system("pause");

}
