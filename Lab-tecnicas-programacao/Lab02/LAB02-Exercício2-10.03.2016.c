#include <stdio.h>
void main()
{
    int i;
    double menor, p;

    printf("Digite o valor da menor raia: ");
    scanf("%lf", &menor);

    for(i=0;i<5;i++)
    {
           p = 2*3.14159265*menor;
           printf("a dintancia percorrida na %d raia e %.5fl\n", i, p);
           menor = menor+1;
    }
    system("pause");
}
