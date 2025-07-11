#include <stdio.h>

int     main()
{
    int number;
    printf("Entre un nombre: ");
    scanf("%d",&number);
    
    printf("%d en hexadcimal = %x\n",number,number);

    return (0);
}