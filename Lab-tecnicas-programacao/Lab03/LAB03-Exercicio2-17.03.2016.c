#include <stdio.h>

void main()
{
    int id;
    printf("Qual sua idade: ");
    scanf("%d", &id);

    if (id < 7)
    printf("Muito novo pra praticar esportes !!!\n");

    else if ((id >= 7) && (id <= 7))
    printf("sua categoria e infantil A\n");

    else if ((id >= 8) && (id <= 10))
    printf("sua categoria e infantil B\n");

    else if ((id >= 11) && (id <= 13))
    printf("sua categoria e juvenil A\n");

    else if ((id >= 14) && (id <= 17))
    printf("sua categoria e juvenil B\n");

    else
    printf("Senior");

    system ("pause");
}


