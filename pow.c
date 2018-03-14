#include <stdio.h>
int main()
{
    int base, exponent,result;

     result = 1;

    
    scanf("%d", &base);

    
    scanf("%d", &exponent);

    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }

    printf("Answer = %d", result);

    return 0;
}
