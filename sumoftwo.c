#include <stdio.h>
int main()
{
    int a=0,j,n, i;
    scanf("%d",&n);
    int b[n];
    scanf("%d",&i);
    for(int c=0;c<n;c++)
    {int loc;
        b[c]=scanf("%d",&loc);
    }
    
    for(j=0;j<=i;j++)
    {
        a=a+b[j];
    }
    printf("%d",a);
    return 0;
}
