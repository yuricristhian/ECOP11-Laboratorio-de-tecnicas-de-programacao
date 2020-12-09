#include <stdio.h>

void main()
{
   double fixo, vend, sal;

   printf("Digite o valor do salario fixo do funcionario: ");
   scanf("%lf", &fixo);

   printf("Digite o valor vendido no mes: ");
   scanf("%lf", &vend);

   sal = fixo + (vend*0.15);

   printf("Salario final = R$ %.2lf\n", sal);
   system("pause");

}
