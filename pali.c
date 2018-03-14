#include <stdio.h>
int main()
{
    int n, b = 0, remainder, c;

    
    scanf("%d", &n);

    c = n;

     
    while( n!=0 )
    {
        remainder = n%10;
        b = b*10 + remainder;
        n /= 10;
    }

    
    if (c == b)
        printf("%d is a palindrome.", c);
    else
        printf("%d is not a palindrome.",c);
    
    return 0;
}
