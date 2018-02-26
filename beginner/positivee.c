#include <stdio.h>

int main()
{int a;
scanf("%d",&a);
if(a>0)
printf("POSITIVE");
else if(a<0)
printf("Negative");
else if(a==0)
printf("Zero");
else
printf("Invalid Input");

    return 0;
}

