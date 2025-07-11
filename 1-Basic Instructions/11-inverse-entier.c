#include <stdio.h>

int main()
{
    int n;
    int n1,n2,n3,n4;

    printf("Enter a 4 digits Number: ");
    scanf("%d",&n);

    n1 = n % 10;
    n2 = (n / 10) % 10;
    n3 = (n / 100) % 10;
    n4 = (n / 1000) % 10;

    printf("%d%d%d%d",n1,n2,n3,n4);

    return 0;
}